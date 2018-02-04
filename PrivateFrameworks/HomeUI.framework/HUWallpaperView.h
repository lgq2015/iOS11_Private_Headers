/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperView : UIView {
    UIView * _wallpaperContentView;
    HFWallpaperSlice * _wallpaperSlice;
}

@property (nonatomic, retain) UIView *wallpaperContentView;
@property (nonatomic, retain) HFWallpaperSlice *wallpaperSlice;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWallpaperContentView:(id)arg1;
- (void)setWallpaperSlice:(id)arg1;
- (id)wallpaperContentView;
- (id)wallpaperSlice;

@end
