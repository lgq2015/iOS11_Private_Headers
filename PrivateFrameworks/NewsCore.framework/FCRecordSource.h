/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCCacheFlushing, FCFetchCoordinatorDelegate> {
    NSString * _activeTreatmentID;
    FCCacheCoordinator * _cacheCoordinator;
    FCCKContentDatabase * _contentDatabase;
    NSString * _contentDirectory;
    NSString * _experimentalizableFieldsPostfix;
    FCFetchCoordinator * _fetchCoordinator;
    FCThreadSafeMutableDictionary * _fetchErrorsByKey;
    NSObject<OS_dispatch_queue> * _initQueue;
    FCKeyValueStore * _localStore;
}

@property (nonatomic, readonly) NSString *activeTreatmentID;
@property (nonatomic, readonly) FCCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) FCCKContentDatabase *contentDatabase;
@property (nonatomic, readonly) NSString *contentDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (nonatomic, readonly) NSString *experimentalizableFieldsPostfix;
@property (nonatomic, readonly) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (nonatomic, readonly) NSArray *genericKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (readonly) Class superclass;

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)defaultCachePolicy;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (id)identifierFromCKRecord:(id)arg1;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;
+ (bool)supportsDeletions;

- (void).cxx_destruct;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_desiredKeysForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2;
- (id)_desiredKeysWithCacheDictionary:(id)arg1;
- (id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg1;
- (id)_experimentalizedKeysByOriginalWithCacheDictionary:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_fetchErrorForKey:(id)arg1;
- (id)_identifierFromCKRecordID:(id)arg1;
- (void)_initStore;
- (id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2;
- (id)_localizedExperimentalizedKeysByOriginalWithCacheDictionary:(id)arg1;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1;
- (id)_localizedKeysByOriginalWithCacheDictionary:(id)arg1;
- (void)_prepareForUse;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3;
- (id)activeTreatmentID;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)cachedRecordsWithIDs:(id)arg1;
- (id)contentDatabase;
- (id)contentDirectory;
- (id)desiredKeys;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)experimentalizableFieldsPostfix;
- (id)experimentalizableKeys;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(bool)arg3 context:(id)arg4;
- (id)fetchErrorsByKey;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (id)genericKeys;
- (id)init;
- (id)initQueue;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (bool)isRecordStale:(id)arg1 withCachePolicy:(id)arg2;
- (id)localStore;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveRecords:(id)arg1;
- (void)setInitQueue:(id)arg1;
- (void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg1 treatmentID:(id)arg2;
- (void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;
- (void)updateFetchDateForRecordIDs:(id)arg1;

@end
