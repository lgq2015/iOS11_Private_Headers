/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver> {
    bool  _appIsActive;
    NSString * _bundleIdentifier;
    <HDWatchAppStateMonitorDelegate> * _delegate;
}

@property (nonatomic, readonly) bool appIsActive;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDWatchAppStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1;

- (void).cxx_destruct;
- (bool)appIsActive;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithFirstPartyWorkoutApp;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
