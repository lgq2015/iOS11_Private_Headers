/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface, _HKXPCExportable> {
    id /* block */  _achievementsAddedOrRemovedHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
    id /* block */  _unviewedAchievementDefinitionsChangedHandler;
}

@property (nonatomic, copy) id /* block */ achievementsAddedOrRemovedHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unviewedAchievementDefinitionsChangedHandler;

- (void).cxx_destruct;
- (void)achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)achievementsAddedOrRemovedHandler;
- (void)addAchievement:(id)arg1 completion:(id /* block */)arg2;
- (id)clientQueue;
- (void)clientRemote_achievementDefinitionUnviewedCountChanged;
- (void)clientRemote_achievementsWereAddedOrRemoved;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)createMonthlyChallengeAchievementForMonth:(long long)arg1 year:(long long)arg2 predicateString:(id)arg3 progressExpressionString:(id)arg4 goalExpressionString:(id)arg5 completion:(id /* block */)arg6;
- (void)daemonDidStart;
- (void)dealloc;
- (void)deleteAchievementWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllAchievementsWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (void)expressionValue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAchievementAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchDynamicAchievementDefinitionsWithCompletion:(id /* block */)arg1;
- (void)fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)markAchievementAsViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)markAchievementsAlerted:(id)arg1 completion:(id /* block */)arg2;
- (void)nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(id /* block */)arg1;
- (void)progressAchievementWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resetAchievementDefinitionAlertedStates:(bool)arg1 availabilityStates:(bool)arg2 completion:(id /* block */)arg3;
- (void)runAchievementsFixupAsDryRun:(bool)arg1 completion:(id /* block */)arg2;
- (void)runCompanionAchievementManagerWithCompletion:(id /* block */)arg1;
- (void)setAchievementAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setAchievementsAddedOrRemovedHandler:(id /* block */)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setUnviewedAchievementDefinitionsChangedHandler:(id /* block */)arg1;
- (id /* block */)unviewedAchievementDefinitionsChangedHandler;
- (void)updateAllAchievementAssetsWithCompletion:(id /* block */)arg1;

@end
