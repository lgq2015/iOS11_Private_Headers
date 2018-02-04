/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIDatabase : NSObject {
    struct sqlite3 { } * _db;
    struct __CFDictionary { } * _groupObjectsById;
    long long  _options;
    NSString * _path;
    NSDictionary * _preparedStatements;
    int  _queryCounter;
    NSObject<OS_dispatch_queue> * _searchQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PSITokenizer * _tokenizer;
    NSMutableArray * _tokenizerOutputNormalizedTokens;
    struct { 
        long long location; 
        long long length; 
    }  _tokenizerOutputRanges;
    NSMutableString * _tokenizerOutputString;
    NSMutableArray * _tokenizerOutputTokens;
}

@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSString *path;

+ (void)_dropDatabase:(struct sqlite3 { }*)arg1 withCompletion:(id /* block */)arg2;
+ (struct sqlite3 { }*)_openDatabaseAtPath:(id)arg1 options:(long long)arg2;
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(id /* block */)arg2;

- (void)_inSearchQueueAsync:(id /* block */)arg1;
- (unsigned long long)_inqAddUUID:(id)arg1 string:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 isInBatch:(bool)arg5;
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 insertIfNeeded:(bool)arg2;
- (void)_inqAsync:(id /* block */)arg1;
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(bool*)arg2;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 allowError:(int)arg2 withStatementBlock:(id /* block */)arg3;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id /* block */)arg2;
- (void)_inqGetTokensFromString:(id)arg1 forIndexing:(bool)arg2 useWildcard:(bool)arg3 tokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; long long x4; long long x5; struct { /* ? */ } *x6; long long x7; long long x8; }*)arg4;
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 insertIfNeeded:(bool)arg4 tokenOutput:(const struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; long long x4; long long x5; struct { /* ? */ } *x6; long long x7; long long x8; }*)arg5 shouldUpdateOwningGroupId:(bool)arg6;
- (struct __CFArray { }*)_inqNewAssetIdsForGroupId:(unsigned long long)arg1;
- (struct __CFArray { }*)_inqNewAssetUUIDsForAssetIds:(const void**)arg1 count:(long long)arg2;
- (id)_inqNewContentStringForGroupId:(unsigned long long)arg1;
- (id)_inqNewGroupArraysFromGroupIdSets:(id)arg1 forQuery:(id)arg2;
- (struct __CFSet { }*)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;
- (struct __CFSet { }*)_inqNewGroupIdsForDeleteOperationWithMatchingGroupIds:(const void**)arg1 count:(long long)arg2;
- (struct __CFSet { }*)_inqNewGroupIdsMatchingToken:(id)arg1;
- (id)_inqNewGroupsWithMatchingGroupIds:(const void**)arg1 count:(long long)arg2 matchingPredicateBlock:(id /* block */)arg3;
- (void)_inqPerformBatch:(id /* block */)arg1;
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPrepareStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPreparedContainsStatementWithPrefix:(const char *)arg1 matchingIds:(const void**)arg2 count:(long long)arg3;
- (void)_inqRecycleGroups;
- (void)_inqRemoveUUID:(id)arg1 isInBatch:(bool)arg2;
- (void)_inqSync:(id /* block */)arg1;
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;
- (unsigned long long)_inqUpdateGroupAndPrefixTreeForString:(id)arg1 category:(short)arg2 owningGroupId:(unsigned long long)arg3;
- (unsigned long long)_inqUpdateGroupAndPrefixTreeForString:(id)arg1 category:(short)arg2 owningGroupId:(unsigned long long)arg3 shouldUpdateOwningGroupId:(bool)arg4;
- (void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg1 text:(id)arg2;
- (void)_prepareTokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; long long x4; long long x5; struct { /* ? */ } *x6; long long x7; long long x8; }*)arg1 forIndexing:(bool)arg2;
- (void)_query:(id)arg1 recursiveAddToGroupResults:(id)arg2 aggregate:(id)arg3 atIndex:(unsigned long long)arg4 outOf:(unsigned long long)arg5 inGroupArrays:(id)arg6;
- (void)_safeGetTokensForSearchFromString:(id)arg1 useWildcard:(bool)arg2 tokens:(id*)arg3 wildcardTokens:(id*)arg4;
- (void)addAsset:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addAssets:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (void)dropDatabaseWithCompletion:(id /* block */)arg1;
- (void)group:(id)arg1 fetchOwningContentString:(bool)arg2 assetUUIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)initWithPath:(id)arg1 options:(long long)arg2;
- (id)newQueryWithSearchText:(id)arg1;
- (id)newQueryWithSearchText:(id)arg1 isWildcardSearch:(bool)arg2;
- (long long)options;
- (id)path;
- (void)query:(id)arg1 searchString:(id)arg2 earlyResultsHandler:(id /* block */)arg3 resultsHandler:(id /* block */)arg4;
- (void)query:(id)arg1 searchString:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)removeAssetWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
