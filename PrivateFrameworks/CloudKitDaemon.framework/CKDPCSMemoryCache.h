/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSMemoryCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cacheEntries;
    unsigned long long  _maxEntries;
    unsigned long long  _memoryCacheDeleteCount;
    unsigned long long  _memoryCacheEvictCount;
    <NSObject> * _memoryCacheEvictNotificationObserver;
    unsigned long long  _memoryCacheHighwaterCount;
    unsigned long long  _memoryCacheHitCount;
    unsigned long long  _memoryCacheRequestCount;
    unsigned long long  _memoryCacheUpdateCount;
    NSObject<OS_dispatch_source> * _memoryNotificationSource;
    unsigned long long  _memoryStatus;
    bool  _memoryStatusChanged;
    double  _minAge;
    double  _oldestCacheEntry;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *cacheEntries;
@property (nonatomic) unsigned long long maxEntries;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic, retain) <NSObject> *memoryCacheEvictNotificationObserver;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheUpdateCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryNotificationSource;
@property unsigned long long memoryStatus;
@property bool memoryStatusChanged;
@property (nonatomic) double minAge;
@property double oldestCacheEntry;

+ (id)globalEvictQueue;
+ (void)registerEvictionActivity;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (unsigned long long)_cacheCount;
- (void)_lockedEvictEntriesFromCache;
- (id)accessQueue;
- (id)cacheEntries;
- (void)clearCache;
- (void)dealloc;
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasStatusToReport;
- (id)init;
- (unsigned long long)maxEntries;
- (unsigned long long)memoryCacheDeleteCount;
- (unsigned long long)memoryCacheEvictCount;
- (id)memoryCacheEvictNotificationObserver;
- (unsigned long long)memoryCacheHighwaterCount;
- (unsigned long long)memoryCacheHitCount;
- (unsigned long long)memoryCacheRequestCount;
- (unsigned long long)memoryCacheUpdateCount;
- (id)memoryNotificationSource;
- (unsigned long long)memoryStatus;
- (bool)memoryStatusChanged;
- (double)minAge;
- (double)oldestCacheEntry;
- (void)runCacheEviction;
- (void)setAccessQueue:(id)arg1;
- (void)setCacheEntries:(id)arg1;
- (void)setMaxEntries:(unsigned long long)arg1;
- (void)setMemoryCacheDeleteCount:(unsigned long long)arg1;
- (void)setMemoryCacheEvictCount:(unsigned long long)arg1;
- (void)setMemoryCacheEvictNotificationObserver:(id)arg1;
- (void)setMemoryCacheHighwaterCount:(unsigned long long)arg1;
- (void)setMemoryCacheHitCount:(unsigned long long)arg1;
- (void)setMemoryCacheRequestCount:(unsigned long long)arg1;
- (void)setMemoryCacheUpdateCount:(unsigned long long)arg1;
- (void)setMemoryNotificationSource:(id)arg1;
- (void)setMemoryStatus:(unsigned long long)arg1;
- (void)setMemoryStatusChanged:(bool)arg1;
- (void)setMinAge:(double)arg1;
- (void)setOldestCacheEntry:(double)arg1;
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;

@end
