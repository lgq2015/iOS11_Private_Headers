/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCache : NSObject {
    NSMutableDictionary * _cacheEntries;
    long long  _countLimit;
    long long  _currentCost;
    long long  _currentCount;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct entryList { 
        struct lruEntry {} *tqh_first; 
        struct lruEntry {} **tqh_last; 
    }  _lru;
    long long  _totalCostLimit;
}

- (void)dealloc;
- (id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;

@end
