/* made by EzioChiu.
 */

@protocol ENGroupContextCacheMiddleware <ENGroupContextMiddleware>

@required

- (void)deleteAllKnownGroupsForGroupContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: ENGroupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deleteCachedValueForForGroupContext:(void *)arg1 withGroupID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: ENGroupContext *, ENGroupID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)groupContext:(void *)arg1 cacheGroup:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: ENGroupContext *, ENGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)groupContext:(void *)arg1 cachedGroupWithID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ENGroupContext *, ENGroupID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENGroup *, void*
- (void)groupContext:(void *)arg1 fetchAllKnownGroups:(void *)arg2; // needs 2 arg types, found 7: ENGroupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)groupContext:(void *)arg1 latestCachedGroupWithStableID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ENGroupContext *, ENStableGroupID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENGroup *, void*
- (long long)middlewareCacheCostForContext:(ENGroupContext *)arg1;

@end
