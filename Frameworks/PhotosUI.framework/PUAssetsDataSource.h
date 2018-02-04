/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetsDataSource : PUTilingDataSource

@property (nonatomic, readonly) bool containsMultipleAssets;
@property (nonatomic, readonly) NSIndexPath *firstItemIndexPath;

+ (id)emptyDataSource;

- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (bool)containsMultipleAssets;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (bool)couldAssetReferenceAppear:(id)arg1;
- (id)firstItemIndexPath;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (bool)isEmpty;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (id)startingAssetReference;

@end