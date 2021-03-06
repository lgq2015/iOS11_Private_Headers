/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTUserNotificationPoster : NSObject <MTNotificationPoster> {
    NAFuture * _notificationCenterFuture;
    unsigned long long  _numAuthAttempts;
    <NAScheduler> * _serializer;
    FBSSystemService * _systemService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *notificationCenterFuture;
@property (nonatomic) unsigned long long numAuthAttempts;
@property (nonatomic, readonly) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (nonatomic, retain) FBSSystemService *systemService;

+ (id)_bundleIDForPlatform;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)soundForMTSound:(id)arg1;
+ (id)soundForMTSound:(id)arg1 isGoToBed:(bool)arg2 isEarlyWakeUp:(bool)arg3;

- (void).cxx_destruct;
- (id)_bedtimeFormatter;
- (id)_durationComponentsFormatter;
- (void)_performBlockRequiringNotificationCenter:(id /* block */)arg1;
- (void)_queue_requestAuthorizationWithRetry;
- (void)_requestAuthorizationWithRetryAfterDelay:(double)arg1;
- (void)_setEarlyWakeUpTitleAndBody:(id)arg1 forAlarm:(id)arg2;
- (void)_setGoToBedTitleAndBody:(id)arg1 forAlarm:(id)arg2;
- (id)_userInfoForAlarm:(id)arg1;
- (id)_userInfoForTimer:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (id)init;
- (id)notificationCategories;
- (id)notificationCenterFuture;
- (unsigned long long)numAuthAttempts;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)prewarmNotificationBundle;
- (id)serializer;
- (void)setNotificationCenterFuture:(id)arg1;
- (void)setNumAuthAttempts:(unsigned long long)arg1;
- (void)setSystemService:(id)arg1;
- (id)systemService;

@end
