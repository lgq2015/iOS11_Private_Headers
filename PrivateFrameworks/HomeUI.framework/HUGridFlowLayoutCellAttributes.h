/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {
    HFWallpaperSlice * _blurredWallpaperSlice;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedWallpaperRect;
}

@property (nonatomic, retain) HFWallpaperSlice *blurredWallpaperSlice;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedWallpaperRect;

- (void).cxx_destruct;
- (id)blurredWallpaperSlice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedWallpaperRect;
- (void)setBlurredWallpaperSlice:(id)arg1;
- (void)setNormalizedWallpaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
