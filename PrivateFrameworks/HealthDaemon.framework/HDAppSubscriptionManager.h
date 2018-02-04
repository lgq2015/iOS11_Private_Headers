/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver> {
    HDAppAssertionManager * _appAssertionManager;
    int  _backgroundAppRefreshNotifyToken;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> * _launchQueue;
    NSMutableDictionary * _launchTimerLaunchTimes;
    NSObject<OS_dispatch_queue> * _launchTimerQueue;
    NSMutableDictionary * _launchTimers;
    NSMutableSet * _pendingFirstLaunchBundleIdentifiers;
    NSMutableDictionary * _pendingTypeCodesToAnchors;
    HDProfile * _profile;
    bool  _shouldScheduleLaunches;
}

@property (nonatomic, retain) HDAppAssertionManager *appAssertionManager;
@property (nonatomic) int backgroundAppRefreshNotifyToken;
@property (nonatomic, retain) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *launchQueue;
@property (nonatomic, retain) NSMutableDictionary *launchTimerLaunchTimes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *launchTimerQueue;
@property (nonatomic, retain) NSMutableDictionary *launchTimers;
@property (nonatomic, retain) NSMutableSet *pendingFirstLaunchBundleIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *pendingTypeCodesToAnchors;
@property (nonatomic) HDProfile *profile;
@property (nonatomic) bool shouldScheduleLaunches;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityNameForSubscription:(id)arg1 anchor:(id)arg2;
- (void)_applicationsInstalled:(id)arg1;
- (void)_launchTimerFired:(id)arg1 code:(id)arg2 anchor:(id)arg3;
- (void)_queue_ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)_queue_launchSubscription:(id)arg1 anchor:(id)arg2;
- (void)_queue_scheduleLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (void)_queue_scheduleLaunches:(long long)arg1 anchor:(id)arg2;
- (void)_queue_subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (id)_queue_subscriptionForActivityName:(id)arg1 anchor:(id*)arg2;
- (void)_queue_updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (void)_removeBundleID:(id)arg1;
- (void)_removeLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (void)_removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (bool)_shouldDoAFirstLaunchForBundleIdentifier:(id)arg1;
- (void)ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (id)appAssertionManager;
- (bool)areSubscriptionsSupportedForDataTypeCode:(long long)arg1;
- (int)backgroundAppRefreshNotifyToken;
- (id)backgroundTaskScheduler;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)launchQueue;
- (id)launchTimerLaunchTimes;
- (id)launchTimerQueue;
- (id)launchTimers;
- (id)pendingFirstLaunchBundleIdentifiers;
- (id)pendingTypeCodesToAnchors;
- (id)profile;
- (void)removeBundleID:(id)arg1;
- (void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)setAppAssertionManager:(id)arg1;
- (void)setBackgroundAppRefreshNotifyToken:(int)arg1;
- (void)setBackgroundTaskScheduler:(id)arg1;
- (void)setLaunchQueue:(id)arg1;
- (void)setLaunchTimerLaunchTimes:(id)arg1;
- (void)setLaunchTimerQueue:(id)arg1;
- (void)setLaunchTimers:(id)arg1;
- (void)setPendingFirstLaunchBundleIdentifiers:(id)arg1;
- (void)setPendingTypeCodesToAnchors:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setShouldScheduleLaunches:(bool)arg1;
- (bool)shouldScheduleLaunches;
- (void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (void)unitTesting_synchronizeWithQueue;
- (void)updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;

@end
