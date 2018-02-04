/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCollectionFlowLayout : UICollectionViewFlowLayout {
    long long  _assetCollectionSubtype;
}

@property (nonatomic, readonly) long long assetCollectionSubtype;

- (long long)assetCollectionSubtype;
- (id)initWithAssetCollectionSubtype:(long long)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
