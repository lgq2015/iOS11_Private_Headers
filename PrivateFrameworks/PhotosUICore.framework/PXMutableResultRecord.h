/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMutableResultRecord : PXResultRecord {
    bool  _curate;
    PHFetchResult * _curatedFetchResult;
    NSSet * _curatedOids;
    NSSet * _excludedOids;
    PHFetchResult * _fetchResult;
    PHFetchResult * _filteredFetchResult;
    bool  _filteredFetchResultIsValid;
    NSSet * _includedOids;
    NSPredicate * _inclusionPredicate;
    bool  _inclusionPredicateIsValid;
    PHFetchResult * _keyAssetsFetchResult;
    bool  _reverseSortOrder;
}

@property (nonatomic) bool curate;
@property (nonatomic, retain) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) NSSet *curatedOids;
@property (nonatomic, readonly) NSSet *excludedOids;
@property (nonatomic, readonly) PHFetchResult *exposedFetchResult;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) PHFetchResult *filteredFetchResult;
@property (nonatomic, readonly) NSSet *includedOids;
@property (nonatomic, readonly) NSPredicate *inclusionPredicate;
@property (nonatomic, retain) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic, readonly) bool reverseSortOrder;

- (void).cxx_destruct;
- (void)_invalidateFilteredFetchResult;
- (void)_invalidateInclusionPredicate;
- (void)_setIncludeOids:(id)arg1;
- (void)_updateFilteredFetchResultIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)curate;
- (id)curatedFetchResult;
- (id)curatedOids;
- (void)excludeOids:(id)arg1;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)fetchResult;
- (id)filteredFetchResult;
- (void)includeOids:(id)arg1;
- (id)includedOids;
- (id)inclusionPredicate;
- (void)invalidateFetchResultAssetCache;
- (id)keyAssetsFetchResult;
- (bool)reverseSortOrder;
- (void)setCurate:(bool)arg1;
- (void)setCuratedFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1 reverseSortOrder:(bool)arg2;
- (void)setKeyAssetsFetchResult:(id)arg1;
- (void)setReverseSortOrder:(bool)arg1;
- (void)stopExcludingOids:(id)arg1;
- (void)stopIncludingAllOids;

@end
