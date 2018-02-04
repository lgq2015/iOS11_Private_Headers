/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppAssertionManager : NSObject {
    NSMutableSet * _activeAssertions;
    NSMutableDictionary * _appAssertions;
    NSMutableArray * _pendingAssertions;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableSet *activeAssertions;
@property (nonatomic, retain) NSMutableDictionary *appAssertions;
@property (nonatomic, retain) NSMutableArray *pendingAssertions;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_assertionDidFinish:(id)arg1;
- (void)_queue_considerLaunchingApp;
- (void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (id)_queue_pendingAssertionsReadyForLaunch;
- (void)_queue_retryAppLaunchForAssertion:(id)arg1;
- (id)activeAssertions;
- (id)appAssertions;
- (void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (id)pendingAssertions;
- (id)profile;
- (id)queue;
- (void)setActiveAssertions:(id)arg1;
- (void)setAppAssertions:(id)arg1;
- (void)setPendingAssertions:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;

@end
