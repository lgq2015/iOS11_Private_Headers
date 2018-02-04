/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceAvailabilityCenter : NSObject {
    NSMutableDictionary * _availabilityHandlers;
}

+ (id)sharedInstance;

- (void)_handleServiceMonitorNotification:(id)arg1;
- (bool)_isValidServiceType:(long long)arg1;
- (void)_postNotificationForService:(long long)arg1 availability:(long long)arg2;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_stopListeningToMonitor:(id)arg1;
- (bool)addListenerID:(id)arg1 forService:(long long)arg2;
- (long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2;
- (id)containerForService:(long long)arg1 create:(bool)arg2;
- (void)dealloc;
- (bool)hasListenerID:(id)arg1 forService:(long long)arg2;
- (id)init;
- (bool)removeListenerID:(id)arg1 forService:(long long)arg2;

@end
