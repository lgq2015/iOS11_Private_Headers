/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SPConcreteCoreSpotlightIndexer : NSObject {
    int * _cancelPtr;
    NSMapTable * _checkedInClients;
    unsigned long long  _createCount;
    NSString * _dataclass;
    NSObject<OS_dispatch_queue> * _firstUnlockQueue;
    struct __SI { } * _index;
    NSObject<OS_dispatch_source> * _indexIdleTimer;
    NSObject<OS_dispatch_queue> * _indexQueue;
    NSMutableSet * _knownClients;
    double  _lastPreheat;
    double  _lastTTLPass;
    unsigned int  _maintenanceOperations;
    NSMutableArray * _outstandingMaintenance;
    SPCoreSpotlightIndexer * _owner;
    NSMutableSet * _reindexAllDelegateBundleIDs;
    struct __SIResultQueue { } * _resultQueue;
    bool  _scheduledStringsCleanup;
    bool  _softSuspended;
    bool  _suspended;
}

@property (nonatomic, readonly) NSMapTable *checkedInClients;
@property (nonatomic, retain) NSString *dataclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (nonatomic) struct __SI { }*index;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *indexIdleTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *indexQueue;
@property (nonatomic, readonly) NSMutableSet *knownClients;
@property (nonatomic, retain) NSMutableArray *outstandingMaintenance;
@property (nonatomic) SPCoreSpotlightIndexer *owner;
@property (nonatomic) struct __SIResultQueue { }*resultQueue;

+ (id)_stateInfoAttributeNameWithClientStateName:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_addNewClientWithBundleID:(id)arg1;
- (void)_backgroundDeleteItems:(id)arg1 bundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_cancelIdleTimer;
- (void)_expireCorruptIndexFilesWithPath:(id)arg1 keepLatest:(bool)arg2;
- (void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_indexMaintenanceActivityName;
- (id)_indexPath;
- (void)_performXPCActivity:(id)arg1 name:(id)arg2;
- (void)_saveCorruptIndexWithPath:(id)arg1;
- (void)_scheduleStringsCleanupForBundleID:(id)arg1;
- (void)_setClientState:(id)arg1 clientStateName:(id)arg2 forBundleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_startInternalQueryWithIndex:(struct __SI { }*)arg1 query:(id)arg2 fetchAttributes:(id)arg3 resultsHandler:(id /* block */)arg4;
- (id)_startQueryWithQueryTask:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)addClients:(id)arg1;
- (void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2;
- (void)attributesForBundleId:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forBundleID:(id)arg3;
- (void)checkInWithBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)checkedInClients;
- (void)cleanupStringsWithActivity:(id)arg1 group:(id)arg2 shouldDefer:(bool*)arg3 flags:(int)arg4;
- (void)cleanupStringsWithCompletionHandler:(id /* block */)arg1;
- (void)clientDidCheckin:(id)arg1 service:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)closeIndex;
- (void)commitUpdates:(id)arg1;
- (void)coolDown:(id)arg1;
- (id)dataclass;
- (void)dealloc;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 shouldGC:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteItemsForEnumerator:(id)arg1 traceID:(long long)arg2 bundleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteItemsForQuery:(id)arg1 bundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteSearchableItemsSinceDate:(id)arg1 forBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dirty;
- (void)dumpAllRankingDiagnosticInformationForQuery:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)ensureOpenIndexFiles;
- (void)fetchAllCompletedBundleIDsForIndexerTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchLastClientStateForBundleID:(id)arg1 clientStateName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)finishReindexAll;
- (id)firstUnlockQueue;
- (id)getPropertyForKey:(id)arg1;
- (void)imageDataForBundleId:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (struct __SI { }*)index;
- (void)indexFinishedDrainingJournal;
- (void)indexFinishedDrainingJournal:(id)arg1;
- (void)indexFromBundle:(id)arg1 options:(long long)arg2 items:(id)arg3 itemsText:(id)arg4 clientState:(id)arg5 clientStateName:(id)arg6 deletes:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)indexIdleTimer;
- (id)indexQueue;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(id /* block */)arg7;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 forBundleID:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithQueue:(id)arg1 protectionClass:(id)arg2 cancelPtr:(int*)arg3;
- (void)issueConsistencyCheck;
- (void)issueRepair;
- (void)issueSplit;
- (id)knownClients;
- (void)mergeWithCompletionHandler:(id /* block */)arg1;
- (void)mergeWithGroup:(id)arg1;
- (int)openIndex:(bool)arg1;
- (int)openIndex:(bool)arg1 shouldReindexAll:(bool)arg2;
- (id)outstandingMaintenance;
- (id)owner;
- (void)performIndexerTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performIndexerTask:(id)arg1 withIndexDelegatesAndCompletionHandler:(id /* block */)arg2;
- (void)performQueryForCountOfItemsInCategory:(id)arg1 completion:(id /* block */)arg2;
- (void)powerStateChanged;
- (void)preheat;
- (void)readyIndex:(bool)arg1;
- (bool)reindexAllStarted;
- (void)removeExpiredItemsForBundleId:(id)arg1 group:(id)arg2;
- (struct __SIResultQueue { }*)resultQueue;
- (void)resumeIndex;
- (void)revokeExpiredItems:(id)arg1;
- (void)scheduleMaintenance:(id /* block */)arg1 description:(id)arg2 forDarkWake:(bool)arg3;
- (void)setDataclass:(id)arg1;
- (void)setFirstUnlockQueue:(id)arg1;
- (void)setIndex:(struct __SI { }*)arg1;
- (void)setIndexIdleTimer:(id)arg1;
- (void)setIndexQueue:(id)arg1;
- (void)setOutstandingMaintenance:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2 sync:(bool)arg3;
- (void)setResultQueue:(struct __SIResultQueue { }*)arg1;
- (void)shrink:(unsigned long long)arg1;
- (void)startQueryWithQueryTask:(id)arg1 startHandler:(id /* block */)arg2 resultsHandler:(id /* block */)arg3;
- (void)startReindexAll;
- (void)suspendIndexForDeviceLock;
- (void)updateRankingDates;
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 forBundleID:(id)arg3;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (void)zombifyAllContactItems:(id)arg1;

@end
