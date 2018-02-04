/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    FCAssetManager * _assetManager;
    unsigned long long  _childrenCachePolicy;
    double  _childrenMaximumCachedAge;
    <FCTagsFetchOperationDelegate> * _delegate;
    FCHeldRecords * _heldChildTagRecords;
    FCHeldRecords * _heldParentTagRecords;
    FCHeldRecords * _heldTagRecords;
    bool  _includeChildren;
    bool  _includeParents;
    bool  _overrideChildrenCachePolicy;
    bool  _overrideTargetsCachePolicy;
    NSArray * _tagIDs;
    FCTagRecordSource * _tagRecordSource;
    unsigned long long  _targetsCachePolicy;
    double  _targetsMaximumCachedAge;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;
@property (nonatomic) <FCTagsFetchOperationDelegate> *delegate;
@property (nonatomic, retain) FCHeldRecords *heldChildTagRecords;
@property (nonatomic, retain) FCHeldRecords *heldParentTagRecords;
@property (nonatomic, retain) FCHeldRecords *heldTagRecords;
@property (nonatomic) bool includeChildren;
@property (nonatomic) bool includeParents;
@property bool overrideChildrenCachePolicy;
@property bool overrideTargetsCachePolicy;
@property (nonatomic, copy) NSArray *tagIDs;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;

- (void).cxx_destruct;
- (id)assetManager;
- (unsigned long long)childrenCachePolicy;
- (double)childrenMaximumCachedAge;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)delegate;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchParentTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)arg1;
- (id)heldChildTagRecords;
- (id)heldParentTagRecords;
- (id)heldTagRecords;
- (bool)includeChildren;
- (bool)includeParents;
- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4;
- (bool)overrideChildrenCachePolicy;
- (bool)overrideTargetsCachePolicy;
- (void)setAssetManager:(id)arg1;
- (void)setChildrenCachePolicy:(unsigned long long)arg1;
- (void)setChildrenMaximumCachedAge:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeldChildTagRecords:(id)arg1;
- (void)setHeldParentTagRecords:(id)arg1;
- (void)setHeldTagRecords:(id)arg1;
- (void)setIncludeChildren:(bool)arg1;
- (void)setIncludeParents:(bool)arg1;
- (void)setOverrideChildrenCachePolicy:(bool)arg1;
- (void)setOverrideTargetsCachePolicy:(bool)arg1;
- (void)setTagIDs:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (void)setTargetsCachePolicy:(unsigned long long)arg1;
- (void)setTargetsMaximumCachedAge:(double)arg1;
- (id)tagIDs;
- (id)tagRecordSource;
- (unsigned long long)targetsCachePolicy;
- (double)targetsMaximumCachedAge;

@end
