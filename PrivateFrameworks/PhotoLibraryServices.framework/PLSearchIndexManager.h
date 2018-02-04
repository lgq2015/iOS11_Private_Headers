/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexManager : NSObject {
    bool  __indexing;
    id /* block */  __inqAfterIndexingDidIterate;
    NSCountedSet * __pauseReasons;
    PLSearchIndexDateFormatter * _dateFormatter;
    PSIDatabase * _db;
    bool  _hasScheduledCloseIndex;
    bool  _hasValidSearchIndex;
    bool  _isTrackingRebuild;
    PLKeywordManager * _keywordManager;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _rebuildReason;
    bool  _receivedUpdatesWhileIndexing;
    NSString * _searchIndexDirectory;
    NSDictionary * _searchMetadata;
    PLClientServerTransaction * _serverTransaction;
    PLThrottleTimer * _throttleTimer;
    long long  _updateState;
    NSDictionary * _uuidsToProcess;
}

@property (getter=_isIndexing, setter=_setIndexing:) bool _indexing;
@property (setter=_setInqAfterIndexingDidIterate:, nonatomic, copy) id /* block */ _inqAfterIndexingDidIterate;
@property (nonatomic, readonly, copy) NSCountedSet *_pauseReasons;
@property (readonly) unsigned long long enqueuedUUIDsCount;
@property (getter=isIndexingPaused, readonly) bool indexingPaused;

+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)defaultDatabasePath;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (id)_cxindexProgressPath;
- (id)_dbMetadataPath;
- (id)_dbPath;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (id /* block */)_inqAfterIndexingDidIterate;
- (void)_inqCloseIndexIfAbleOrForce:(bool)arg1 isDelete:(bool)arg2;
- (void)_inqCloseSearchIndexAndDelete:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqEndTrackingUpdateIfNeeded;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(bool)arg1;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchMetadataExists;
- (void)_inqEnsureSearchProgressExists;
- (bool)_inqHasValidSearchIndex;
- (bool)_inqIsIndexingPaused;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(id /* block */)arg2;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqSetIndexingPaused:(bool)arg1 reason:(id)arg2;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (bool)_inqUpdateLocale;
- (bool)_inqUpdateMetadata:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (bool)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (bool)_isIndexing;
- (void)_localeDidChange:(id)arg1;
- (id)_oldDbPath;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(id /* block */)arg2;
- (void)_onQueueSync:(id /* block */)arg1;
- (id)_pauseReasons;
- (bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (void)_setIndexing:(bool)arg1;
- (void)_setIndexingPaused:(bool)arg1 synchronously:(bool)arg2 reason:(id)arg3;
- (void)_setInqAfterIndexingDidIterate:(id /* block */)arg1;
- (void)_throttleTimerFire:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (id)_uuidsToRemoveFromUUIDsToProcess:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(id /* block */)arg2;
- (void)closeSearchIndexWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg1;
- (unsigned long long)enqueuedUUIDsCount;
- (void)ensureSearchIndexExists;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (bool)isIndexingPaused;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)registerSceneTaxonomySHA:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(id /* block */)arg2;
- (void)unpauseIndexingWithReason:(id)arg1;

@end
