/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAppAssertion : NSObject {
    HDAppAssertionManager * _assertionManager;
    NSString * _bundleIdentifier;
    bool  _invalidated;
    double  _lastLaunchAttempt;
    long long  _launchErrorCount;
    NSMutableDictionary * _pendingDataTypeCodesToAnchors;
    NSMutableDictionary * _pendingLaunchCompletions;
    NSMutableSet * _processAssertions;
    NSObject<OS_dispatch_source> * _processDeathSource;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) HDAppAssertionManager *assertionManager;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) bool invalidated;
@property (nonatomic, readonly) double lastLaunchAttempt;
@property (nonatomic, readonly) long long launchErrorCount;
@property (nonatomic, readonly) double nextLaunchAttempt;
@property (nonatomic, readonly) NSMutableDictionary *pendingDataTypeCodesToAnchors;
@property (nonatomic, retain) NSMutableDictionary *pendingLaunchCompletions;
@property (nonatomic, retain) NSMutableSet *processAssertions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *processDeathSource;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_acquireAssertionWithCompletion:(id /* block */)arg1;
- (void)_queue_invalidate;
- (id)assertionManager;
- (id)bundleIdentifier;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 queue:(id)arg4;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (bool)invalidated;
- (bool)isEqual:(id)arg1;
- (double)lastLaunchAttempt;
- (id)launchBundleIdentifier;
- (long long)launchErrorCount;
- (void)launchWithCompletion:(id /* block */)arg1;
- (double)nextLaunchAttempt;
- (id)pendingDataTypeCodesToAnchors;
- (id)pendingLaunchCompletions;
- (id)processAssertions;
- (id)processDeathSource;
- (id)profile;
- (id)queue;
- (void)setAssertionManager:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setPendingLaunchCompletions:(id)arg1;
- (void)setProcessAssertions:(id)arg1;
- (void)setProcessDeathSource:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;

@end
