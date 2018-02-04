/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVCarrierParameters : NSObject {
    NSDictionary * _parameterValues;
}

+ (id)carrierServiceName;
+ (bool)ignoresRoamingSwitch;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (bool)supportsDetachedStorage;
+ (bool)supportsGreetingChanges;
+ (bool)supportsPasswordChanges;

- (void).cxx_destruct;
- (void)_initForBundle:(id)arg1;
- (id)initForService:(id)arg1;
- (id)initForServiceBundleId:(id)arg1;
- (id)parameterValueForKey:(id)arg1;

@end
