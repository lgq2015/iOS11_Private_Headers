/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware> {
    NSMutableDictionary * _groupIDtoGroup;
    NSMutableDictionary * _latestStableGroupIDToGroup;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *groupIDtoGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *latestStableGroupIDToGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(id /* block */)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(id /* block */)arg3;
- (id)groupIDtoGroup;
- (id)initWithQueue:(id)arg1;
- (id)latestStableGroupIDToGroup;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (id)queue;
- (void)setGroupIDtoGroup:(id)arg1;
- (void)setLatestStableGroupIDToGroup:(id)arg1;
- (void)setQueue:(id)arg1;

@end