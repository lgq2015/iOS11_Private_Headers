/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFColorWallpaperView : SBFWallpaperView {
    NSString * _cacheGroup;
    UIImage * _cachedSnapshotImage;
}

@property (nonatomic, retain) UIImage *cachedSnapshotImage;
@property (nonatomic, readonly) UIColor *wallpaperColor;

- (void).cxx_destruct;
- (id)_computeAverageColor;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSmudgeRadius:(double)arg2;
- (id)cacheGroup;
- (id)cachedSnapshotImage;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperColor:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 wallpaperSettingsProvider:(id)arg5;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)setCachedSnapshotImage:(id)arg1;
- (id)snapshotImage;
- (id)wallpaperColor;
- (long long)wallpaperType;

@end
