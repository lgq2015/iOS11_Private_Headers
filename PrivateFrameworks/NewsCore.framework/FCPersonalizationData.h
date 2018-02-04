/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationData : FCPrivateDataController <FCAppActivityObserving, FCAppConfigurationObserving, FCDerivedPersonalizationData, FCOperationThrottlerDelegate, FCUserInfoObserving> {
    NSMutableDictionary * _aggregates;
    bool  _attemptingUpload;
    NSMutableArray * _closedChangeGroups;
    NSMutableDictionary * _openChangeGroupDeltas;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    CKRecord * _remoteRecord;
    <FCOperationThrottler> * _saveThrottler;
    FCPersonalizationTreatment * _treatment;
    FCUserInfo * _userInfo;
}

@property (nonatomic, retain) NSMutableDictionary *aggregates;
@property bool attemptingUpload;
@property (nonatomic, retain) NSMutableArray *closedChangeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *openChangeGroupDeltas;
@property (nonatomic, readonly) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *readWriteQueue;
@property (nonatomic, retain) CKRecord *remoteRecord;
@property (nonatomic, retain) <FCOperationThrottler> *saveThrottler;
@property (readonly) Class superclass;
@property (retain) FCPersonalizationTreatment *treatment;
@property (nonatomic, retain) FCUserInfo *userInfo;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (void)initialize;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_closeOpenChangeGroup;
- (id)_instanceIdentifier;
- (void)_reloadTreatmentWithReliablyFetchedAppConfig:(bool)arg1;
- (void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2;
- (void)_writeToLocalStoreWithCompletionHandler:(id /* block */)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addObserver:(id)arg1;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregates;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (void)appConfigurationDidChange:(id)arg1;
- (bool)attemptingUpload;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (void)clearPersonalizationData;
- (id)closedChangeGroups;
- (id)d_allGlobalAggregates;
- (void)enumerateAggregatesUsingBlock:(id /* block */)arg1;
- (id)featureKeysWithNoAggregates:(id)arg1;
- (void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 userInfo:(id)arg4;
- (void)loadLocalCachesFromStore;
- (id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6;
- (id)openChangeGroupDeltas;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (id)personalizationTreatment;
- (id)readWriteQueue;
- (id)recordsForRestoringZoneName:(id)arg1;
- (id)remoteRecord;
- (void)removeObserver:(id)arg1;
- (id)saveThrottler;
- (void)setAggregates:(id)arg1;
- (void)setAttemptingUpload:(bool)arg1;
- (void)setClosedChangeGroups:(id)arg1;
- (void)setOpenChangeGroupDeltas:(id)arg1;
- (void)setReadWriteQueue:(id)arg1;
- (void)setRemoteRecord:(id)arg1;
- (void)setSaveThrottler:(id)arg1;
- (void)setTreatment:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)syncWithCompletion:(id /* block */)arg1;
- (id)treatment;
- (id)userInfo;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (void)d_allResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)arg1;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(bool)arg5 configurableValues:(id)arg6 featuresUpdatedBlock:(id /* block */)arg7;

@end
