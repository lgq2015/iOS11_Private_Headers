/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver> {
    NSDate * _lastNotificationsEnableRequestDate;
    HMHome * _notificationsEnabledHome;
    NSMutableSet * _notificationsEnabledReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastNotificationsEnableRequestDate;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (nonatomic, retain) HMHome *notificationsEnabledHome;
@property (nonatomic, readonly) NSMutableSet *notificationsEnabledReasons;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_updateNotificationsEnabled;
- (void)disableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)enableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)init;
- (id)lastNotificationsEnableRequestDate;
- (bool)notificationsEnabled;
- (id)notificationsEnabledHome;
- (id)notificationsEnabledReasons;
- (void)setLastNotificationsEnableRequestDate:(id)arg1;
- (void)setNotificationsEnabledHome:(id)arg1;

@end
