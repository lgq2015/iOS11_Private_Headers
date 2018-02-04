/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksMigrationCoordinator : NSObject <WBSCloudBookmarksUserIdentityFetcher> {
    <WBSCloudTabDeviceProvider> * _cloudTabDeviceProvider;
    <WBSLogger> * _keyActionsLogger;
    <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> * _localDataProvider;
    bool  _migrationEnabled;
    WBSCloudBookmarksMigrationRampEvaluator * _migrationRampEvaluator;
    WBSCloudBookmarksMigrationReadinessDecider * _migrationReadinessDecider;
    NSTimer * _migrationReadinessReevaluationTimer;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _rampEnabled;
    bool  _readyToMigrate;
    long long  _skipReason;
    <WBSCloudBookmarksMigrationCoordinatorStorage> * _storage;
    <WBSSafariBookmarksSyncAgentProtocol> * _syncAgent;
    <WBSCloudBookmarksDeviceEligibilityFetcher> * _windowsDeviceEligibilityFetcher;
}

@property (nonatomic, readonly) <WBSCloudTabDeviceProvider> *cloudTabDeviceProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <WBSLogger> *keyActionsLogger;
@property (nonatomic, readonly) <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> *localDataProvider;
@property (getter=isMigrationEnabled, nonatomic) bool migrationEnabled;
@property (getter=isRampEnabled, nonatomic) bool rampEnabled;
@property (nonatomic, readonly) <WBSCloudBookmarksMigrationCoordinatorStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WBSSafariBookmarksSyncAgentProtocol> *syncAgent;
@property (nonatomic, readonly) <WBSCloudBookmarksDeviceEligibilityFetcher> *windowsDeviceEligibilityFetcher;

- (void).cxx_destruct;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_evaluateMigrationRampInclusionForced:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_migrationReadinessDataInvalidated:(id)arg1;
- (void)_migrationReadinessDeciderDecidedMigrationIsNoLongerPossible;
- (void)_migrationReadinessDeciderDecidedMigrationIsPossible;
- (void)_reevaluateMigrationReadiness;
- (void)_scheduleMigrationReadinessReevaluationForDate:(id)arg1;
- (void)_startWaitingForMigrationReadiness;
- (void)_stopWaitingForMigrationReadiness;
- (id)cloudTabDeviceProvider;
- (void)dealloc;
- (void)fetchUserIdentityWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithStorage:(id)arg1 syncAgent:(id)arg2 localDataProvider:(id)arg3 cloudTabDeviceProvider:(id)arg4 windowsDeviceEligibilityFetcher:(id)arg5;
- (bool)isMigrationEnabled;
- (bool)isRampEnabled;
- (id)keyActionsLogger;
- (id)localDataProvider;
- (void)noteCloudTabDevicesChanged;
- (void)setKeyActionsLogger:(id)arg1;
- (void)setMigrationEnabled:(bool)arg1;
- (void)setRampEnabled:(bool)arg1;
- (void)startCoordinatingMigration;
- (id)storage;
- (id)syncAgent;
- (id)windowsDeviceEligibilityFetcher;

@end
