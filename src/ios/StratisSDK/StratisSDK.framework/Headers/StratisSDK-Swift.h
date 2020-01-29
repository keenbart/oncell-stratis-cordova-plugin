#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="StratisSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



enum ServerEnvironment : NSInteger;

SWIFT_CLASS("_TtC10StratisSDK13Configuration")
@interface Configuration : NSObject
- (nonnull instancetype)initWithServerEnvironment:(enum ServerEnvironment)serverEnvironment accessToken:(NSString * _Nonnull)accessToken remoteLoggingEnabled:(BOOL)remoteLoggingEnabled loggingMetadata:(NSDictionary<NSString *, NSString *> * _Nonnull)loggingMetadata OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// All methods send their results via this interface’s result
/// method. The <code>result</code> & <code>error</code> method can be called multiple times,
/// e.g. for each found or unrecognized lock during <code>scanLocks</code>. The <code>done</code>
/// method is called when there will be no more results or errors.
SWIFT_PROTOCOL("_TtP10StratisSDK14ResultCallback_")
@protocol ResultCallback
/// A result dictionary
- (void)resultWithRes:(NSDictionary<NSString *, id> * _Nonnull)res;
/// Called when there will be no more results or errors
- (void)doneWithDone:(NSDictionary<NSString *, id> * _Nonnull)done;
/// If an error occurs, done will also be called after error() denote this is final
- (void)errorWithErr:(NSDictionary<NSString *, id> * _Nonnull)err;
@end

/// The different server environment STRATIS has
typedef SWIFT_ENUM(NSInteger, ServerEnvironment, closed) {
/// STRATIS internal development
  ServerEnvironmentDEV = 0,
/// External testing with beta features available
  ServerEnvironmentSANDBOX = 1,
/// STRATIS internal testing
  ServerEnvironmentTEST = 2,
/// Available services for customers with most stability
  ServerEnvironmentPROD = 3,
};


SWIFT_CLASS("_TtC10StratisSDK10StratisSDK")
@interface StratisSDK : NSObject
/// Instantiates the SDK for calling internal methods
/// \param initCallback Tells if the SDK was completely initialized
///
- (nonnull instancetype)initWithInitCallback:(id <ResultCallback> _Nonnull)initCallback OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_MSG("Please use init(configuration:) instead.");
/// Instantiates an instance of the SDK with a specified configuration.
/// \param configuration A Configuration struct that defines behavior of the SDK.
///
- (nonnull instancetype)initWithConfiguration:(Configuration * _Nonnull)configuration OBJC_DESIGNATED_INITIALIZER;
/// Get the locks available for the authenticated user on the specified property.
/// These locks are not known to be in range. Call <code>scanLocks</code> to determine which
/// locks the user can activate.
/// note:
/// The result callback returns a list of locks as a dictionary as follows:
/// \code
///  | Parameter | Type | Description |
///  |---------------|--------|--------------|
///  | name | String | The lock's display name |
///  | id | String | The identifier used for calling `activateLock` |
///  | model | String | The kind of lock it is, (e.g. Schlage BE467 Deadbolt, Brivo Access Point) |
///  | unlock_technology | String | Methodology for how the device will be interfaced with |
///
/// \endcode\param property The Property resource name, e.g. “properties/p-123xyz”
///
/// \param callback Result will include a key, “locks”, that is a list of lock objects
///
- (void)getLocksWithProperty:(NSString * _Nonnull)property callback:(id <ResultCallback> _Nonnull)callback;
/// Begins scanning for locks which are nearby, or which the user can access online.
/// The callback’s result method is called for each lock found.
/// \param seconds Number of seconds to scan for
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)scanLocksWithSeconds:(double)seconds callback:(id <ResultCallback> _Nonnull)callback;
/// Activate a lock chosen by the user. This will generate events sent via the callbacks in as
/// an status code and message that should be rephrased to make a user-friendly message.
/// The <code>done</code> method is called once the activate process has completed successfully or unsuccessfully.
/// \param lockId The <code>id</code> key from the lock object returned from <code>getLocks</code> & <code>scanLocks</code>
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)activateLockWithLockId:(NSString * _Nonnull)lockId callback:(id <ResultCallback> _Nonnull)callback;
/// Activate a lock chosen by the user. This will generate events sent via the callbacks in as
/// an status code and message that should be rephrased to make a user-friendly message.
/// The <code>done</code> method is called once the activate process has completed successfully or unsuccessfully.
/// \param lockId The <code>id</code> key from the lock object returned from <code>getLocks</code> & <code>scanLocks</code>
///
/// \param asppointmentId The <code>id</code> of the appointment for this lock, only use for Tour24 properties.
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)activateLockWithLockId:(NSString * _Nonnull)lockId appointmentId:(NSString * _Nonnull)appointmentId callback:(id <ResultCallback> _Nonnull)callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="StratisSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



enum ServerEnvironment : NSInteger;

SWIFT_CLASS("_TtC10StratisSDK13Configuration")
@interface Configuration : NSObject
- (nonnull instancetype)initWithServerEnvironment:(enum ServerEnvironment)serverEnvironment accessToken:(NSString * _Nonnull)accessToken remoteLoggingEnabled:(BOOL)remoteLoggingEnabled loggingMetadata:(NSDictionary<NSString *, NSString *> * _Nonnull)loggingMetadata OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// All methods send their results via this interface’s result
/// method. The <code>result</code> & <code>error</code> method can be called multiple times,
/// e.g. for each found or unrecognized lock during <code>scanLocks</code>. The <code>done</code>
/// method is called when there will be no more results or errors.
SWIFT_PROTOCOL("_TtP10StratisSDK14ResultCallback_")
@protocol ResultCallback
/// A result dictionary
- (void)resultWithRes:(NSDictionary<NSString *, id> * _Nonnull)res;
/// Called when there will be no more results or errors
- (void)doneWithDone:(NSDictionary<NSString *, id> * _Nonnull)done;
/// If an error occurs, done will also be called after error() denote this is final
- (void)errorWithErr:(NSDictionary<NSString *, id> * _Nonnull)err;
@end

/// The different server environment STRATIS has
typedef SWIFT_ENUM(NSInteger, ServerEnvironment, closed) {
/// STRATIS internal development
  ServerEnvironmentDEV = 0,
/// External testing with beta features available
  ServerEnvironmentSANDBOX = 1,
/// STRATIS internal testing
  ServerEnvironmentTEST = 2,
/// Available services for customers with most stability
  ServerEnvironmentPROD = 3,
};


SWIFT_CLASS("_TtC10StratisSDK10StratisSDK")
@interface StratisSDK : NSObject
/// Instantiates the SDK for calling internal methods
/// \param initCallback Tells if the SDK was completely initialized
///
- (nonnull instancetype)initWithInitCallback:(id <ResultCallback> _Nonnull)initCallback OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_MSG("Please use init(configuration:) instead.");
/// Instantiates an instance of the SDK with a specified configuration.
/// \param configuration A Configuration struct that defines behavior of the SDK.
///
- (nonnull instancetype)initWithConfiguration:(Configuration * _Nonnull)configuration OBJC_DESIGNATED_INITIALIZER;
/// Get the locks available for the authenticated user on the specified property.
/// These locks are not known to be in range. Call <code>scanLocks</code> to determine which
/// locks the user can activate.
/// note:
/// The result callback returns a list of locks as a dictionary as follows:
/// \code
///  | Parameter | Type | Description |
///  |---------------|--------|--------------|
///  | name | String | The lock's display name |
///  | id | String | The identifier used for calling `activateLock` |
///  | model | String | The kind of lock it is, (e.g. Schlage BE467 Deadbolt, Brivo Access Point) |
///  | unlock_technology | String | Methodology for how the device will be interfaced with |
///
/// \endcode\param property The Property resource name, e.g. “properties/p-123xyz”
///
/// \param callback Result will include a key, “locks”, that is a list of lock objects
///
- (void)getLocksWithProperty:(NSString * _Nonnull)property callback:(id <ResultCallback> _Nonnull)callback;
/// Begins scanning for locks which are nearby, or which the user can access online.
/// The callback’s result method is called for each lock found.
/// \param seconds Number of seconds to scan for
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)scanLocksWithSeconds:(double)seconds callback:(id <ResultCallback> _Nonnull)callback;
/// Activate a lock chosen by the user. This will generate events sent via the callbacks in as
/// an status code and message that should be rephrased to make a user-friendly message.
/// The <code>done</code> method is called once the activate process has completed successfully or unsuccessfully.
/// \param lockId The <code>id</code> key from the lock object returned from <code>getLocks</code> & <code>scanLocks</code>
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)activateLockWithLockId:(NSString * _Nonnull)lockId callback:(id <ResultCallback> _Nonnull)callback;
/// Activate a lock chosen by the user. This will generate events sent via the callbacks in as
/// an status code and message that should be rephrased to make a user-friendly message.
/// The <code>done</code> method is called once the activate process has completed successfully or unsuccessfully.
/// \param lockId The <code>id</code> key from the lock object returned from <code>getLocks</code> & <code>scanLocks</code>
///
/// \param asppointmentId The <code>id</code> of the appointment for this lock, only use for Tour24 properties.
///
/// \param callback Result will include a lock object with the RSSI for BLE locks
///
- (void)activateLockWithLockId:(NSString * _Nonnull)lockId appointmentId:(NSString * _Nonnull)appointmentId callback:(id <ResultCallback> _Nonnull)callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
