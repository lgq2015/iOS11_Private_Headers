/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionHistoryCache : NSObject {
    PFUbiquityKnowledgeVector * _cacheKV;
    NSMutableArray * _entriesToWrite;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    NSMutableDictionary * _globalIDToHistoryArray;
    bool  _hasScheduledWriteBlock;
    NSString * _localPeerID;
    PFUbiquityKnowledgeVector * _minCacheKV;
    NSMutableDictionary * _peerIDToHistoryArray;
    NSRecursiveLock * _peerIDToHistoryArrayLock;
    NSPersistentStoreCoordinator * _privatePSC;
    NSPersistentStore * _privateStore;
    PFUbiquityLocation * _rootLocation;
    NSString * _storeName;
}

@property (nonatomic, readonly) PFUbiquityKnowledgeVector *cacheKV;
@property (nonatomic, readonly) NSArray *cachedGlobalIDs;
@property (nonatomic, retain) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *minCacheKV;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (bool)addTransactionEntry:(id)arg1 error:(id*)arg2;
- (bool)addTransactionEntryLight:(id)arg1 needsWrite:(bool)arg2 error:(id*)arg3;
- (bool)addTransactionEntryLights:(id)arg1 error:(id*)arg2;
- (id)cacheKV;
- (bool)cacheTransactionHistory:(id*)arg1;
- (id)cachedGlobalIDs;
- (id)cachedTransactionHistoryForGlobalID:(id)arg1;
- (void)dealloc;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (id)description;
- (id)globalIDCache;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)minCacheKV;
- (bool)purgeCacheAndWritePendingEntries:(bool)arg1 error:(id*)arg2;
- (void)setGlobalIDCache:(id)arg1;
- (id)ubiquityRootLocation;
- (bool)writePendingEntries:(id*)arg1;

@end