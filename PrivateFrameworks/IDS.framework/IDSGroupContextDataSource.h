/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupContextDataSource : NSObject <ENGroupContextCacheMiddleware, ENGroupContextDataSource> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_groupContextCacheMiddleware;
- (id)_groupContextDataSource;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(id /* block */)arg2;
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)participantsForCypher:(id)arg1 completion:(id /* block */)arg2;
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(id /* block */)arg3;

@end
