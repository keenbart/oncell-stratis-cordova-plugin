// Objective-C API for talking to stratislibrary Go package.
//   gobind -lang=objc stratislibrary
//
// File is generated by gobind. Do not edit.

#ifndef __Stratislibrary_H__
#define __Stratislibrary_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class StratislibraryAckNakValues;
@class StratislibraryAdvertisedSecurityVersion;
@class StratislibraryAuthTokenParameters;
@class StratislibraryAuthenticationStates;
@class StratislibraryBrivoBleLockData;
@class StratislibraryBrivoNotificationState;
@class StratislibraryBrivoTransmissionState;
@class StratislibraryBrivoUnlockCommandResponse;
@class StratislibraryDataTransferServiceGatt;
@class StratislibraryEngageLockData;
@class StratislibraryErrorStates;
@class StratislibraryLengthReceiverEncryption;
@class StratislibraryLock;
@class StratislibraryLockMetaData;
@class StratislibraryOperationStates;
@class StratislibraryPayloadTypes;
@class StratislibraryProtocolBlockData;
@class StratislibraryStatusResponse;
@class StratislibraryUnlockCommandResponse;
@protocol StratislibraryNativeLogger;
@class StratislibraryNativeLogger;

@protocol StratislibraryNativeLogger <NSObject>
- (void)log:(NSString* _Nullable)message category:(NSString* _Nullable)category level:(NSString* _Nullable)level;
@end

/**
 * AckNakValues are used every time the receiver gets a CRC value regardless of whether
any length or data has been transferred, a one-byte ACK/NAK is sent.
 */
@interface StratislibraryAckNakValues : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSData* _Nullable ackOk;
@property (nonatomic) NSData* _Nullable nakWrongCrc;
@property (nonatomic) NSData* _Nullable nakNotEnoughBytes;
@property (nonatomic) NSData* _Nullable nakLengthTooLarge;
@property (nonatomic) NSData* _Nullable nakInvalidTarget;
@property (nonatomic) NSData* _Nullable nakMessageSizeIsDifferent;
@property (nonatomic) NSData* _Nullable nakEncryptedDataDoesNotAlignOnBlockSizeBoundary;
@property (nonatomic) NSData* _Nullable nakDbModuleIsStillUsingScratchpadBuffer;
@property (nonatomic) NSData* _Nullable nakLargeDataTransferPacketOutsideOfPacketBounds;
@property (nonatomic) NSData* _Nullable nakUnauthorized;
@property (nonatomic) NSData* _Nullable nakTimeout;
@end

/**
 * AdvertisedSecurityVersion has the security version parsed from the BLE advertisement data
 */
@interface StratislibraryAdvertisedSecurityVersion : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) int8_t original;
@property (nonatomic) int8_t sequenceBytesSupported;
@property (nonatomic) int8_t revisionThree;
@end

/**
 * AuthTokenParameters are the Engage security information needed to authenticate with the lock
 */
@interface StratislibraryAuthTokenParameters : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSData* _Nullable userUID;
@property (nonatomic) NSData* _Nullable deviceUID;
@property (nonatomic) NSData* _Nullable tempKey;
@property (nonatomic) long counter;
@property (nonatomic) NSData* _Nullable securityToken;
@property (nonatomic) int64_t tempKeyExpiresAt;
@end

/**
 * AuthenticationStates allows the SDK to keep track of the state of the authentication process
 */
@interface StratislibraryAuthenticationStates : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long unauthenticated;
@property (nonatomic) long challengeReceived;
@property (nonatomic) long authenticated;
@end

/**
 * BrivoBleLockData gives a structure for the lock based on the advertisement data
 */
@interface StratislibraryBrivoBleLockData : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull serialNumber;
@end

/**
 * BrivoNotificationState keeps track of what operation the SDK is actioning on the lock
 */
@interface StratislibraryBrivoNotificationState : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long noIncomingExpected;
@property (nonatomic) long awaitCommandResponse;
@property (nonatomic) long awaitEndResponse;
@property (nonatomic) long completedNotifications;
@property (nonatomic) long transmissionFailed;
@end

/**
 * BrivoTransmissionState keeps track of what operation the SDK is actioning on the lock
 */
@interface StratislibraryBrivoTransmissionState : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long noTransmission;
@property (nonatomic) long serverCommandSent;
@property (nonatomic) long endMsgSent;
@end

/**
 * BrivoUnlockCommandResponse is struct for returning the byte stream for unlocking BrivoBLE
 */
@interface StratislibraryBrivoUnlockCommandResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSData* _Nullable command;
@end

/**
 * DataTransferServiceGatt is used for transferring encrypted JSON and non-JSON payloads including
firmware files, door databases, configurations, authentication tokens, and wifi handover commands.
 */
@interface StratislibraryDataTransferServiceGatt : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull service;
@property (nonatomic) NSString* _Nonnull rxLength;
@property (nonatomic) NSString* _Nonnull rxData;
@property (nonatomic) NSString* _Nonnull rxCRC;
@property (nonatomic) NSString* _Nonnull rxACKNACK;
@property (nonatomic) NSString* _Nonnull txLength;
@property (nonatomic) NSString* _Nonnull txData;
@property (nonatomic) NSString* _Nonnull txCRC;
@property (nonatomic) NSString* _Nonnull txACKNAK;
@property (nonatomic) NSString* _Nonnull ipAddress;
@end

/**
 * EngageLockData gives a structure for the lock based on the advertisement data
 */
@interface StratislibraryEngageLockData : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull serialNumber;
@property (nonatomic) int8_t advertisingVersion;
@property (nonatomic) NSString* _Nonnull lockModel;
@property (nonatomic) NSString* _Nonnull lockStatus;
@property (nonatomic) int8_t securityVersion;
@property (nonatomic) StratislibraryProtocolBlockData* _Nullable protocolBlockData;
@end

/**
 * ErrorStates allows the SDK to report certain errors tied to a code
 */
@interface StratislibraryErrorStates : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long noError;
@property (nonatomic) long nakError;
@property (nonatomic) long timeout;
@property (nonatomic) long authenticationFailed;
@property (nonatomic) long dataTransferFailed;
@property (nonatomic) long missingCrc;
@property (nonatomic) long crcError;
@property (nonatomic) long protocolError;
@end

/**
 * LengthReceiverEncryption tells the lock how to expect the data to be sent based on the advertisement version
 */
@interface StratislibraryLengthReceiverEncryption : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSData* _Nullable noSequenceByte;
@property (nonatomic) NSData* _Nullable sequenceByte;
@end

/**
 * Lock is the representation of a lock we have on teh server
 */
@interface StratislibraryLock : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull id_;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull model;
@property (nonatomic) NSString* _Nonnull unlockTechnology;
// skipped field Lock.Meta with unsupported type: stratislibrary.LockMetaData

@end

/**
 * LockMetaData is more information within the lock that is not reported back to the consumer of the SDK
 */
@interface StratislibraryLockMetaData : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull serialNumber;
@property (nonatomic) NSString* _Nonnull unitID;
@property (nonatomic) NSString* _Nonnull unitName;
@property (nonatomic) NSString* _Nonnull residentLock;
@property (nonatomic) NSString* _Nonnull expirationDate;
@property (nonatomic) NSString* _Nonnull unlockCommand;
@end

/**
 * OperationStates keeps track of what operation the SDK is actioning on the lock
 */
@interface StratislibraryOperationStates : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long noOperation;
@property (nonatomic) long authenticating;
@property (nonatomic) long dataTransfer;
@property (nonatomic) long serverCommandSent;
@property (nonatomic) long readingConfig;
@property (nonatomic) long readingAudits;
@end

/**
 * PayloadTypes gives the form of data that is being sent as a transfer to the lock
 */
@interface StratislibraryPayloadTypes : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) int8_t authenticateEstConnection;
@property (nonatomic) int8_t authenticatedTempkJSON;
@property (nonatomic) int8_t authenticatedGatewaykJSON;
@property (nonatomic) int8_t firmwareDownload;
@property (nonatomic) int8_t authenticatedTempkTlv;
@property (nonatomic) int8_t authenticationChallenge;
@end

/**
 * ProtocolBlockData is the LTV for the advertisement information in Engage 2.0 locks
 */
@interface StratislibraryProtocolBlockData : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) BOOL engageCapability;
@property (nonatomic) NSString* _Nonnull engageDeviceStatus;
@property (nonatomic) int8_t engageSecurityVersion;
@property (nonatomic) BOOL residentialModeCapability;
@property (nonatomic) NSString* _Nonnull residentialModeStatus;
@property (nonatomic) int8_t residentialModeSecurityVersion;
@property (nonatomic) NSString* _Nonnull residentialModeStatusCounter;
@property (nonatomic) NSString* _Nonnull residentialModeUniqueID;
@property (nonatomic) int8_t residentialModeNZRV;
@property (nonatomic) BOOL bleCredentialCapability;
@property (nonatomic) NSString* _Nonnull bleCredentialStatus;
@property (nonatomic) int8_t bleCredentialSecurityVersion;
@end

/**
 * StatusResponse - the structure used to represent statuses and errors in the application
 */
@interface StratislibraryStatusResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) int64_t code;
@property (nonatomic) NSString* _Nonnull message;
@property (nonatomic) NSString* _Nonnull detailedMessage;
@end

/**
 * UnlockCommandResponse is the response object that contains the command and sequence number coming from the server side
 */
@interface StratislibraryUnlockCommandResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull command;
@property (nonatomic) double seqNum;
@end

/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryActivateLockDoneCode;
/**
 * AllegionCompanyIdentifierHex is the identifier for Allegion Company info from BLE Advertisement
 */
FOUNDATION_EXPORT const int64_t StratislibraryAllegionCompanyIdentifierHex;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryAllowedReaders;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryBleCommmandProtocol;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryBleCredentialServiceReaderBytes;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryBleCredentialServiceUUID;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBluetoothAdapterErrorCode;
/**
 * Bluetooth responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryBluetoothEnabledCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBluetoothInitErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBluetoothNotEnabledCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBluetoothSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBrivoActivationFailureCode;
/**
 * Brivo locks responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryBrivoActivationSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryBrivoIDNotFoundCode;
/**
 * BrivoIdentifierString is found in the BLE advertisement and identifies that it is a Brivo lock
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryBrivoIdentifierString;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryBrivoMaximumTransferUnit;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryBrivoReservedNonce;
/**
 * Exported constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryBrivoServiceID;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryCRCStartValue;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryChrcUpdateNotificationDscptUUID;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryCounterKey;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryCredentialTag;
/**
 * Server Environments
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryDEV;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryDataTag;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryDataTransferCharacteristicUUID;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryDefaultBleTimeFrame;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryDeviceUIDKey;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryDormaKabaActivateInstructionsCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryDormaKabaActivationNotReadyCode;
/**
 * DormaKaba responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryDormaKabaInitializationNotReadyCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryDormaKabaLockAccessDeniedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryDormaKabaLockAccessGrantedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageActivationFailedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageActivationFailureCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageActivationSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageAuthenticationFailureCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageAuthenticationSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnAckSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnAckUnauthorizedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnAckUnknownCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnAckWrongCrcCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnActivateFailedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnActivatedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnActivatingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnAuthenticatedSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnIncomingTransferAuthenticatingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnIncomingTransferFailureCode;
/**
 * Engage locks responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnectingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnectionFailureCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageConnectionSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryEngageResyncFailedCode;
/**
 * Service IDs
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryEngageServiceID;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryErrorParsingBTManufacturerDataCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryForbiddenCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryGetLocksSuccessCode;
/**
 * Other SDK responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryInitSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryInvalidBufferPacketCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryLockCurrentlyActivatingErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryLockNotFoundErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryLocksNotFoundErrorCode;
/**
 * Locks responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryLocksParsingErrorCode;
/**
 * Log levels
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryLogLevelDebug;
/**
 * Log levels
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryLogLevelError;
/**
 * Log levels
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryLogLevelInfo;
/**
 * Log levels
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryLogLevelWarn;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryMaxChunkSize;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryMaxPacketLen;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryMaxTransferSize;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryNetworkErrorCode;
/**
 * Brivo BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryOkStatus;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryOtherServerErrorCode;
/**
 * Server Environments
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryPROD;
/**
 * responses used by the Go application code
 */
FOUNDATION_EXPORT const int64_t StratislibraryParametersMissingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeriperhalWriteStatusOkCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralCharacteristicNotFoundWhileGettingData;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralCharacteristicsCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralCharacteristicsErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralConnectedCode;
/**
 * Peripheral responses
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralConnectingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidDiscoverServicesCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidDiscoverServicesErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidReadRssiCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidReadRssiErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidUpdateNotificationStateErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidUpdateValueErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidWriteValueCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDidWriteValueErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDisconnectedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralDisconnectionFailureCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralLockFoundCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralMessageWasNullCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralNotConnectedCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralNotConnectedForRssiCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralNotFoundWhileConnectingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralNotFoundWhileDisconnectingCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralNotFoundWhileGettingData;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralServiceNotFoundWhileGettingData;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryPeripheralServiceRefreshErrorCode;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryResetSequenceAck;
/**
 * Server Environments
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibrarySANDBOX;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryScanLockErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryScanLockFoundCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryScanReadyLockFoundCode;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibrarySecurityTokenKey;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryServerEnvironmentNotSetCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibraryServerErrorCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibrarySetAccessTokenSuccessCode;
/**
 * StatusResponse codes
 */
FOUNDATION_EXPORT const int64_t StratislibrarySetServerEnvironmentSuccessCode;
/**
 * Server Environments
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryTEST;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryTempKeyExpiresAtKey;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryTempKeyKey;
/**
 * Unknown error
 */
FOUNDATION_EXPORT const int64_t StratislibraryUnknownErrorCode;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryUnlockSuccessAck;
/**
 * Engage BLE constants
 */
FOUNDATION_EXPORT const int64_t StratislibraryUnlockTimeout;
/**
 * Constants for Engage device information
 */
FOUNDATION_EXPORT NSString* _Nonnull const StratislibraryUserUIDKey;

@interface Stratislibrary : NSObject
// skipped variable BrivoEndOfTransmission with unsupported type: [5]byte

// skipped variable StatusResponses with unsupported type: map[int64]*stratislibrary.StatusResponse

@end

/**
 * BrivoUnlock sends unlock command to Brivo online lock
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryBrivoUnlock(long accessPointID, NSError* _Nullable* _Nullable error);

/**
 * ByteArrayToHexString converts a byte array, ByteArray (Kotlin) / Data (Swift)
to a hex encoded string. Easy to be used for debugging purposes.
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryByteArrayToHexString(NSData* _Nullable ba);

/**
 * CalculateCRC takes the data we get from the lock and returns the CRC to be checked by the lock
 */
FOUNDATION_EXPORT NSData* _Nullable StratislibraryCalculateCRC(NSData* _Nullable data);

/**
 * CheckCRC is given the actual and expected CRC to verify the calculation was done correctly
 */
FOUNDATION_EXPORT BOOL StratislibraryCheckCRC(NSData* _Nullable actual, NSData* _Nullable expected);

/**
 * CheckIsAllegionDevice gets the company identifier from the advertisement to see if it is an Allegion device
 */
FOUNDATION_EXPORT BOOL StratislibraryCheckIsAllegionDevice(NSData* _Nullable bytearray);

/**
 * ChunkBuffer takes all the data being sent to the lock and contatenates it with padding
 */
FOUNDATION_EXPORT NSData* _Nullable StratislibraryChunkBuffer(NSData* _Nullable data);

/**
 * DecodeBrivoAdvertisementData takes the service data from the Brivo BLE advertisement and converts it to a serial number
 */
FOUNDATION_EXPORT StratislibraryBrivoBleLockData* _Nullable StratislibraryDecodeBrivoAdvertisementData(NSData* _Nullable serviceData, NSError* _Nullable* _Nullable error);

/**
 * DecodeEngageAdvertisementData takes all info from the advertisement and gives a structured representation of the lock
 */
FOUNDATION_EXPORT StratislibraryEngageLockData* _Nullable StratislibraryDecodeEngageAdvertisementData(NSData* _Nullable serviceData, NSData* _Nullable manufacturerData, NSError* _Nullable* _Nullable error);

/**
 * EncryptWithTempKey takes the data and the encrypted token for an Engage property
and encrupts the data together
 */
FOUNDATION_EXPORT NSData* _Nullable StratislibraryEncryptWithTempKey(NSData* _Nullable key, NSData* _Nullable data, NSError* _Nullable* _Nullable error);

/**
 * ErrorForCode returns an error for the given status response code
 */
FOUNDATION_EXPORT BOOL StratislibraryErrorForCode(int64_t code, NSError* _Nullable* _Nullable error);

/**
 * ErrorWithDetailedMessageForCode returns an error for the given status response code
along with a custom detailedMessage
 */
FOUNDATION_EXPORT BOOL StratislibraryErrorWithDetailedMessageForCode(int64_t code, NSString* _Nullable detailedMessage, NSError* _Nullable* _Nullable error);

// skipped function FragmentChunk with unsupported parameter or return types


/**
 * GetAccessToken allows the SDK to get the access token anywhere in the projects
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryGetAccessToken(void);

/**
 * GetAckNakValues gives an object of the Indication constants
 */
FOUNDATION_EXPORT StratislibraryAckNakValues* _Nullable StratislibraryGetAckNakValues(void);

/**
 * GetAdvertisedSecurityVersion gives an object with the Advertised Security Version constants
 */
FOUNDATION_EXPORT StratislibraryAdvertisedSecurityVersion* _Nullable StratislibraryGetAdvertisedSecurityVersion(void);

/**
 * GetAuthenticationStates gives an object with the Authentication State constants
 */
FOUNDATION_EXPORT StratislibraryAuthenticationStates* _Nullable StratislibraryGetAuthenticationStates(void);

/**
 * GetBrivoBLEUnlockCommand called from Native. Gets unlock command and returns unlock byte stream
 */
FOUNDATION_EXPORT StratislibraryBrivoUnlockCommandResponse* _Nullable StratislibraryGetBrivoBLEUnlockCommand(long brivoDoorID, long brivoUserID, NSError* _Nullable* _Nullable error);

/**
 * GetBrivoNotificationState gives an object with the Operation State constants
 */
FOUNDATION_EXPORT StratislibraryBrivoNotificationState* _Nullable StratislibraryGetBrivoNotificationState(void);

/**
 * GetBrivoTransmissionState gives an object with the Operation State constants
 */
FOUNDATION_EXPORT StratislibraryBrivoTransmissionState* _Nullable StratislibraryGetBrivoTransmissionState(void);

/**
 * GetChallengeResponse copies parts of the BLE Challenge Response into a byte array
 */
FOUNDATION_EXPORT NSData* _Nullable StratislibraryGetChallengeResponse(NSData* _Nullable deviceUID, NSData* _Nullable challengeTempKey, NSData* _Nullable securityToken);

/**
 * GetChunkLength takes the length as a byte array and gives a representation of it to be sent to the lock
 */
FOUNDATION_EXPORT long StratislibraryGetChunkLength(NSData* _Nullable data);

/**
 * GetDataTransferServiceGattIds gives an object of the Data Transfer Service constants
 */
FOUNDATION_EXPORT StratislibraryDataTransferServiceGatt* _Nullable StratislibraryGetDataTransferServiceGattIds(void);

/**
 * GetEngageSecurityToken will check the passed in auth token information and check if they are stll valid
if not it will create new information for the next authentication challenge for the lock
 */
FOUNDATION_EXPORT StratislibraryAuthTokenParameters* _Nullable StratislibraryGetEngageSecurityToken(StratislibraryAuthTokenParameters* _Nullable parameters, NSError* _Nullable* _Nullable error);

/**
 * GetErrorStates gives an object with the Error State constants
 */
FOUNDATION_EXPORT StratislibraryErrorStates* _Nullable StratislibraryGetErrorStates(void);

/**
 * GetLengthReceiverEncryption gives an object to get the Length Receiver Encruption constants
 */
FOUNDATION_EXPORT StratislibraryLengthReceiverEncryption* _Nullable StratislibraryGetLengthReceiverEncryption(void);

/**
 * GetLocks returns a JSON string of the locks a user has access to
To be parsed by the application side
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryGetLocks(NSString* _Nullable property, NSError* _Nullable* _Nullable error);

/**
 * GetOperationStates gives an object with the Operation State constants
 */
FOUNDATION_EXPORT StratislibraryOperationStates* _Nullable StratislibraryGetOperationStates(void);

/**
 * GetPayloadTypes gives an object with the Payload Type constants
 */
FOUNDATION_EXPORT StratislibraryPayloadTypes* _Nullable StratislibraryGetPayloadTypes(void);

/**
 * GetResetCommand is called when the lock's sequence number is out of sequence with the server and needs to be reset
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryGetResetCommand(NSString* _Nullable lockID, NSError* _Nullable* _Nullable error);

/**
 * GetServerEnvironment allows the SDK to get the server environment anywhere in the projects
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryGetServerEnvironment(void);

// skipped function GetUint32 with unsupported parameter or return types


/**
 * GetUnlockCommand returns a struct with those values to be placed in a JSON string on the application side
 */
FOUNDATION_EXPORT StratislibraryUnlockCommandResponse* _Nullable StratislibraryGetUnlockCommand(NSString* _Nullable lockID, NSError* _Nullable* _Nullable error);

/**
 * HexStringToByteArray converts a string to a byte array. Useful for unit tests since
ByteArray (Kotlin) and Data (Swift) are not easily printable.
 */
FOUNDATION_EXPORT NSData* _Nullable StratislibraryHexStringToByteArray(NSString* _Nullable hs, NSError* _Nullable* _Nullable error);

/**
 * LogFlush requests all remaining data in the logQueue be immediately sent to server and stops the logging process
 */
FOUNDATION_EXPORT void StratislibraryLogFlush(void);

/**
 * LogGetMetadata returns the current metadata value for the given key
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryLogGetMetadata(NSString* _Nullable key);

/**
 * LogGetSessionID returns the current logging session id
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryLogGetSessionID(void);

/**
 * LogJSON adds a json object to the log queue at the specified category and level
 */
FOUNDATION_EXPORT BOOL StratislibraryLogJSON(NSString* _Nullable jsonString, NSString* _Nullable category, NSString* _Nullable level, NSError* _Nullable* _Nullable error);

/**
 * LogSetEnabled sets whether logging is enabled or disabled
 */
FOUNDATION_EXPORT BOOL StratislibraryLogSetEnabled(BOOL enabled);

/**
 * LogSetMetadata sets a key/value pair that will be appended to all log statements for the current logging session
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryLogSetMetadata(NSString* _Nullable key, NSString* _Nullable value);

/**
 * LogStart starts a new logging session
 */
FOUNDATION_EXPORT void StratislibraryLogStart(void);

/**
 * RegisterDormaKabaDevice gives back a token from DormaKaba to register with the device
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibraryRegisterDormaKabaDevice(NSString* _Nullable deviceUUID, NSError* _Nullable* _Nullable error);

/**
 * SendSuccessfulUnlockResult is called when the lock is successfully activated
It is then reported back to the server
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibrarySendSuccessfulUnlockResult(NSString* _Nullable lockID, long sequenceNumber, BOOL prefetch, BOOL success, NSError* _Nullable* _Nullable error);

/**
 * SetAccessToken places the passed in token from the application side in the go runtime
To be used with calls to the STRATIS APIs
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibrarySetAccessToken(NSString* _Nullable token);

/**
 * SetNativeLogger enables Android/iOS code to set the platform-specific native logger
 */
FOUNDATION_EXPORT void StratislibrarySetNativeLogger(id<StratislibraryNativeLogger> _Nullable nl);

/**
 * SetServerEnvironment places the passed in environment from the application side in the go runtime
To be used with calls to teh STRATIS APIs
 */
FOUNDATION_EXPORT NSString* _Nonnull StratislibrarySetServerEnvironment(NSString* _Nullable environment);

/**
 * StatusResponseForCode returns the status response for the given status response code
 */
FOUNDATION_EXPORT StratislibraryStatusResponse* _Nullable StratislibraryStatusResponseForCode(int64_t code);

/**
 * StatusResponseWithDetailedMessageForCode returns the status response for the given status response code
along with a custom detailedMessage
 */
FOUNDATION_EXPORT StratislibraryStatusResponse* _Nullable StratislibraryStatusResponseWithDetailedMessageForCode(int64_t code, NSString* _Nullable detailedMessage);

@class StratislibraryNativeLogger;

/**
 * NativeLogger is the platform-specific logger
 */
@interface StratislibraryNativeLogger : NSObject <goSeqRefInterface, StratislibraryNativeLogger> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)log:(NSString* _Nullable)message category:(NSString* _Nullable)category level:(NSString* _Nullable)level;
@end

#endif
