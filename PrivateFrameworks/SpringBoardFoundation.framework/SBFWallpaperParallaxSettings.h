/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings {
    double  _overhangX;
    double  _overhangY;
    double  _perspectiveTransform;
}

@property double overhangX;
@property double overhangY;
@property double perspectiveTransform;

+ (long long)_currentDeviceType;
+ (struct CGSize { double x1; double x2; })_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })_requiredOverhangSizeForDeviceType:(long long)arg1;
+ (struct CGSize { double x1; double x2; })bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (struct CGSize { double x1; double x2; })bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(bool)arg2;
+ (struct CGSize { double x1; double x2; })bestWallpaperSizeForWallpaperSize:(struct CGSize { double x1; double x2; })arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(bool)arg4;
+ (struct CGSize { double x1; double x2; })minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })minimumWallpaperSizeForWallpaperSize:(struct CGSize { double x1; double x2; })arg1 deviceType:(long long)arg2;
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize { double x1; double x2; })arg1 parallaxFactor:(double)arg2;
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize { double x1; double x2; })arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3;
+ (struct CGSize { double x1; double x2; })overhangSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })overhangSizeForDeviceType:(long long)arg1;
+ (id)settingsControllerModule;

- (double)overhangX;
- (double)overhangY;
- (double)perspectiveTransform;
- (void)setDefaultValues;
- (void)setOverhangX:(double)arg1;
- (void)setOverhangY:(double)arg1;
- (void)setPerspectiveTransform:(double)arg1;

@end
