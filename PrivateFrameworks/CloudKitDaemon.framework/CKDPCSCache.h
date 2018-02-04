/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCache : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKDClientContext * _context;
    CKDPCSFetchAggregator * _fetchAggregator;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSMutableDictionary * _outstandingFetches;
    CKDPCSMemoryCache * _recordMemoryCache;
    CKDPCSMemoryCache * _shareMemoryCache;
    CKDPCSSQLCache * _sqlCache;
    CKDPCSMemoryCache * _zoneMemoryCache;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) CKDClientContext *context;
@property (nonatomic, retain) CKDPCSFetchAggregator *fetchAggregator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, retain) NSMutableDictionary *outstandingFetches;
@property (nonatomic, readonly) CKDPCSMemoryCache *recordMemoryCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *shareMemoryCache;
@property (nonatomic, readonly) CKDPCSSQLCache *sqlCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *zoneMemoryCache;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(id /* block */)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(id /* block */)arg5 withCompletionHandler:(id /* block */)arg6;
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;
- (id)_lockedGetSQLCache;
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(id /* block */)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)callbackQueue;
- (void)clearPCSCaches;
- (void)clearPCSMemoryCaches;
- (id)context;
- (void)dealloc;
- (id)fetchAggregator;
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)fetchQueue;
- (bool)hasStatusToReport;
- (id)initWithClientContext:(id)arg1;
- (id)outstandingFetches;
- (id)recordMemoryCache;
- (void)removePCSDataForItemsInShareWithID:(id)arg1;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchAggregator:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setOutstandingFetches:(id)arg1;
- (id)shareMemoryCache;
- (id)sqlCache;
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)zoneMemoryCache;

@end
