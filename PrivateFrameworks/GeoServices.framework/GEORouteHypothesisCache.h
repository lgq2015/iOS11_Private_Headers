/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisCache : NSObject {
    GEONavdCachePersistenceManager * _persistenceManager;
}

- (void).cxx_destruct;
- (void)_protectedDataDidBecomeAvailable;
- (void)_removeAllEntries;
- (void)dealloc;
- (id)descriptionOfAllEntries;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)loadEntryForRowId:(long long)arg1;
- (id)loadValueForKey:(id)arg1;
- (double)nextRefreshTimeStamp;
- (long long)numberOfEntriesOnDisk;
- (void)removeKey:(id)arg1 value:(id)arg2;
- (id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (void)saveValue:(id)arg1 forKey:(id)arg2;

@end
