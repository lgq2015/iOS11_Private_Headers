/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregate : NSObject {
    NSMutableArray * _aggregatedGroupIds;
    NSMutableArray * _assetIdArrays;
    NSMutableArray * _groups;
    NSMutableArray * _primaryAssetIdArrays;
    NSMutableArray * _rangesMatchingTokens;
    NSArray * _searchTokens;
    NSMutableArray * _secondaryAssetIdArrays;
}

@property (nonatomic, readonly) NSArray *searchTokens;

+ (bool)_canDedupeGroupResult:(id)arg1 withGroupResult:(id)arg2;
+ (bool)_prefer:(id)arg1 over:(id)arg2;
+ (void)postProcessGroupResults:(id)arg1;

- (struct __CFArray { }*)_newSortedGroupIds;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3;
- (bool)_verifySortedGroupIdsUnique;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1;
- (id)newGroupResult;
- (void)pop;
- (bool)pushGroup:(id)arg1 secondaryPairedGroup:(id)arg2;
- (id)searchTokens;

@end
