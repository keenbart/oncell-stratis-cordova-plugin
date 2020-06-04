package com.oncell;

import org.apache.cordova.CallbackContext;
import org.apache.cordova.CordovaInterface;
import org.apache.cordova.CordovaPlugin;
import org.apache.cordova.CordovaWebView;
import org.apache.cordova.PluginResult;
import org.apache.cordova.PluginResult.Status;

import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import org.json.JSONObject;
import org.json.JSONArray;
import org.json.JSONException;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.ExclusionStrategy;
import com.google.gson.FieldAttributes;

import java.lang.Runnable;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.HashMap;

import android.util.Log;
import android.content.Context;
import android.os.Handler;

import com.stratisiot.stratissdk.StratisSDK;
import com.stratisiot.stratissdk.constants.ServerEnvironment;
import com.stratisiot.stratissdk.model.Configuration;
import com.stratisiot.stratissdk.error.StratisError;
import com.stratisiot.stratissdk.listener.DeviceActivationEvent;
import com.stratisiot.stratissdk.listener.StratisDeviceAccessListener;
import com.stratisiot.stratissdk.listener.StratisDeviceActivationListener;
import com.stratisiot.stratissdk.listener.StratisDeviceDiscoveryListener;
import com.stratisiot.stratissdk.model.lock.StratisLock;

import com.bugsnag.android.*;

public class OnCellStratis extends CordovaPlugin {
    private static final String TAG = "OnCellStratis";
    private StratisSDK stratisSDK;
    private Collection<StratisLock> accessibleLocks;
    private List<StratisLock> discoveredLocks;

    public OnCellStratis() {
        super();
    }

    @Override
    public void initialize(CordovaInterface cordova, CordovaWebView webView) {
        Log.d(TAG, "OnCellStratis plugin initialize");
        super.initialize(cordova, webView);
    }
    
    private enum Commands {
        initSDK, getLocks, scanLocks, activateLock
    }
    
    @Override
    public boolean execute(String action, JSONArray args, CallbackContext callbackContext) throws JSONException {
        Commands cmd = Commands.valueOf(action);
        switch (cmd) {
            case initSDK:
                String serverEnvironmentString = args.getString(0);
                String accessToken = args.getString(1);
                String propertyId = args.getString(2);
                this.initSDK(serverEnvironmentString, accessToken, propertyId, callbackContext);
                return true;
            case getLocks:
                this.getLocks(callbackContext);
                return true;
            case scanLocks:
                this.scanLocks(callbackContext);
                return true;
            case activateLock:
                String lockId = args.getString(0);
                String appointmentId = args.getString(1);
                this.activateLock(lockId, appointmentId, callbackContext);
                return true;
            default:
                return false;
        }
    }

    /* Begin command functions */

    public void initSDK(String serverEnvironmentString, String accessToken, String propertyId, CallbackContext callbackContext) {
        Log.d(TAG, "initSDK serverEnvironmentString: " + serverEnvironmentString + ", accessToken: " + accessToken + ", propertyId: " + propertyId);
        Bugsnag.leaveBreadcrumb("initSDK serverEnvironmentString: " + serverEnvironmentString + ", accessToken: " + accessToken + ", propertyId: " + propertyId);

        if (isValidServerEnvironment(serverEnvironmentString) && accessToken != null && propertyId != null) {
            MainActivity mainActivity = (MainActivity) cordova.getActivity();
            Context appContext = mainActivity.getApplicationContext();
            Map<String, String> logMap = new HashMap<String, String>();
            logMap.put("app", "OnCell");

            Configuration configuration = new Configuration(
                    ServerEnvironment.valueOf(serverEnvironmentString),
                    accessToken,
                    true,
                    logMap,
                    propertyId
            );

            stratisSDK = new StratisSDK(appContext, configuration);

            // return successfully
            callbackSuccess(callbackContext, null);
        } else { // return with error
            Log.e(TAG, "Missing or invalid parameters on initSDK");
            bugsnagNotify("Missing or invalid parameters on initSDK");
            callbackError(callbackContext, "Error initializing Stratis SDK");
        }
    }


    public void getLocks(CallbackContext callbackContext) {
        Log.d(TAG, "getLocks");
        stratisSDK.setDeviceAccessListener(new OnCellStratisDeviceAccessListener(callbackContext));
        stratisSDK.fetchAccessibleDevices();
    }

    private class OnCellStratisDeviceAccessListener implements StratisDeviceAccessListener {

        private CallbackContext callbackContext;

        public OnCellStratisDeviceAccessListener(CallbackContext cc) {
            super();
            this.callbackContext = cc;
        }

        @Override
        public void stratisDeviceAccessRequestCompleted(@NotNull StratisSDK stratisSDK, @NotNull Collection<? extends StratisLock> collection, @Nullable StratisError stratisError) {
            Log.d(TAG, "stratisDeviceAccessRequestCompleted");
            if (stratisError == null) {
                accessibleLocks = (Collection<StratisLock>) collection;
                JSONArray locksJson = new JSONArray();
                if (!accessibleLocks.isEmpty()) {
                    locksJson = getLocksAsJson(accessibleLocks);
                    Log.d(TAG, "accessibleLocks: " + locksJson.toString());
                    Bugsnag.leaveBreadcrumb("accessibleLocks: " + locksJson.toString());
                } else {
                    bugsnagNotify("No accessible locks found");
                }
                callbackSuccess(callbackContext, locksJson);
            } else {
                Log.e(TAG, stratisError.getDebugDescription());
                bugsnagNotify(stratisError.getDebugDescription());
                callbackError(callbackContext, stratisError.getDebugMessage());
            }
        }
    }


    public void scanLocks(CallbackContext callbackContext) {
        Log.d(TAG, "scanLocks");
        if (accessibleLocks != null) {
            discoveredLocks = new ArrayList<StratisLock>();
            stratisSDK.setDeviceDiscoveryListener(new OnCellStratisDeviceDiscoveryListener(callbackContext));
            stratisSDK.discoverActionableDevices(accessibleLocks);
        } else {
            Log.e(TAG, "scanLocks called before setting accessibleLocks");
            callbackError(callbackContext, "Cannot scan locks before getting lock authorization");
        }
    }

    private class OnCellStratisDeviceDiscoveryListener implements StratisDeviceDiscoveryListener {

        private CallbackContext callbackContext;

        public OnCellStratisDeviceDiscoveryListener(CallbackContext cc) {
            super();
            this.callbackContext = cc;
        }

        @Override
        public void stratisDiscoveredDevices(@NotNull StratisSDK stratisSDK, @NotNull Collection<? extends StratisLock> collection) {
            Log.d(TAG, "stratisDiscoveredDevices");
            Log.d(TAG, collection.toString());
            discoveredLocks.addAll(collection);
        }

        @Override
        public void stratisDiscoveryCompleted(@NotNull StratisSDK stratisSDK) {
            Log.d(TAG, "stratisDiscoveryCompleted");
            JSONArray locksJson = new JSONArray();
            if (!discoveredLocks.isEmpty()) {
                locksJson = getLocksAsJson(discoveredLocks);
                Log.d(TAG, "discoveredLocks: " + locksJson.toString());
                Bugsnag.leaveBreadcrumb("discoveredLocks: " + locksJson.toString());
            } else {
                bugsnagNotify("No scanned locks discovered");
            }
            callbackSuccess(callbackContext, locksJson);
        }

        @Override
        public void stratisDiscoveryEncounteredError(@NotNull StratisSDK stratisSDK, @NotNull StratisError stratisError) {
            Log.e(TAG, "stratisDiscoveryEncounteredError");
            Log.e(TAG, stratisError.getDebugDescription());
            bugsnagNotify(stratisError.getDebugDescription());
            callbackError(callbackContext, stratisError.getDebugMessage());
        }
    }


    public void activateLock(String lockId, String appointmentId, CallbackContext callbackContext) {
        Log.d(TAG, "activateLock");
        Bugsnag.leaveBreadcrumb("lockId: " + lockId);
        // appointmentId is no longer necessary for the Stratis SDK, but I'm leaving it here for debugging purposes
        Bugsnag.leaveBreadcrumb("appointmentId: " + appointmentId);

        if (discoveredLocks != null ) {
            StratisLock deviceToActivate = null;
            for (StratisLock lock : discoveredLocks) {
                if (lock.getIdentifier().equals(lockId)) {
                    deviceToActivate = lock;
                }
            }
            if (deviceToActivate != null) {
                OnCellStratisDeviceActivationListener listener = new OnCellStratisDeviceActivationListener(callbackContext);
                deviceToActivate.setListener(listener);
                deviceToActivate.activate();
                // return error to JS and send log to Bugsnag if we haven't unlocked device in 20 seconds
                listener.startActivationTimer(20);
            } else {
                Log.e(TAG, "Cannot find lock to activate");
                bugsnagNotify("Cannot find lock to activate");
                callbackError(callbackContext, "Cannot find lock to activate");
            }
        } else {
            Log.e(TAG, "Called activateLock before setting discoveredLocks");
            callbackError(callbackContext, "Cannot activate lock before scanning for locks");
        }
    }

    private class OnCellStratisDeviceActivationListener implements StratisDeviceActivationListener {

        private CallbackContext callbackContext;
        private Boolean responseSent = false;

        public OnCellStratisDeviceActivationListener(CallbackContext cc) {
            super();
            this.callbackContext = cc;
        }

        public void startActivationTimer(Integer maxSeconds) {
            // if we haven't sent a response to the front-end after X seconds, return error and log to Bugsnag
            Runnable runnable = new Runnable() {
                @Override
                public void run() {
                    Log.d(TAG, "activateLock responseSent: " + responseSent);
                    if (!responseSent) {
                        bugsnagNotify("Lock activation took too long to complete");
                        callbackError(callbackContext,"Lock activation took too long to complete");
                    }
                }
            };
            Handler handler = new Handler();
            handler.postDelayed(runnable, maxSeconds*1000);
        }

        @Override
        public void stratisDeviceActivationDidPostEvent(@NotNull StratisLock stratisLock, @NotNull DeviceActivationEvent deviceActivationEvent, @Nullable StratisError stratisError) {
            Log.d(TAG, "stratisDeviceActivationDidPostEvent");
            if (stratisError == null) {
                Log.d(TAG, deviceActivationEvent.toString());
                if (deviceActivationEvent == DeviceActivationEvent.COMPLETE) {
                    callbackSuccess(callbackContext, null);
                    responseSent = true;
                }
            } else {
                Log.e(TAG, stratisError.getDebugDescription());
                bugsnagNotify(stratisError.getDebugDescription());
                callbackError(callbackContext, stratisError.getDebugMessage());
                responseSent = true;
            }
        }
    }

    /* End command functions */

    /* Begin utility functions */

    private boolean isValidServerEnvironment(String serverEnvironmentString) {
        // Valid serverEnvironmentStrings:
        // DEV, SANDBOX, TEST, PROD
        // see https://developer.stratisiot.com/sdk/v4/android/com.stratisiot.stratissdk.constants/-server-environment/ for more info
        try {
            ServerEnvironment.valueOf(serverEnvironmentString);
            return true;
        } catch (IllegalArgumentException e) {
            return false;
        }
    }


    private JSONArray getLocksAsJson(Collection locks) {
        ExclusionStrategy strategy = new ExclusionStrategy() {
            @Override
            public boolean shouldSkipField(FieldAttributes field) {
                if (field.getName().matches("errorAggregator|metaData|advertisementData|bluetoothDevice|authToken")) {
                    return true;
                }
                return false;
            }
            @Override
            public boolean shouldSkipClass(Class<?> clazz) {
                return false;
            }
        };

        Gson gson = new GsonBuilder()
                .addSerializationExclusionStrategy(strategy)
                .create();
        String locksGson = gson.toJson(locks);

        JSONArray locksJson = new JSONArray();
        try {
            locksJson = new JSONArray(locksGson);
        } catch (JSONException e) {
            e.printStackTrace();
        }

        return locksJson;
    }


    private void callbackSuccess(CallbackContext callbackContext, JSONArray locksJSON) {
        JSONObject r = new JSONObject();
        try {
            r.put("success", 1);
            if (locksJSON != null) {
                r.put("locks", locksJSON);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        callbackContext.success(r.toString());
    }


    private void callbackError(CallbackContext callbackContext, String message) {
        JSONObject r = new JSONObject();
        try {
            r.put("success", 0);
            if (message != null && message.length() > 0) {
                r.put("error", message);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        callbackContext.error(r.toString());
    }


    private void bugsnagNotify(String errorMessage) {
        class lockException extends Exception {
            public lockException(String message) {
                super(message);
            }
        }
        Bugsnag.notify(new lockException(errorMessage));
    }

    /* End utility functions*/

}
