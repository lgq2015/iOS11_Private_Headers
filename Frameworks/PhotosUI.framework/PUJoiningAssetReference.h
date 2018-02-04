/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningAssetReference : PUAssetReference {
    PUAssetReference * _containedAssetReference;
    long long  _hintDataSourceIndex;
}

@property (nonatomic, readonly) PUAssetReference *containedAssetReference;
@property (nonatomic, readonly) long long hintDataSourceIndex;

- (void).cxx_destruct;
- (id)containedAssetReference;
- (id)description;
- (long long)hintDataSourceIndex;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(long long)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end
