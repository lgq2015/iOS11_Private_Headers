/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTLumaDodgePillStyleSettings : _UISettings {
    double  _blur;
    double  _brightness;
    double  _colorAddOpacity;
    double  _lumaMapPlusColorOpacity;
    double  _overlayBlendOpacity;
    double  _saturation;
}

@property (nonatomic) double blur;
@property (nonatomic) double brightness;
@property (nonatomic) double colorAddOpacity;
@property (nonatomic) double lumaMapPlusColorOpacity;
@property (nonatomic) double overlayBlendOpacity;
@property (nonatomic) double saturation;

+ (id)settingsControllerModule;

- (double)blur;
- (double)brightness;
- (double)colorAddOpacity;
- (double)lumaMapPlusColorOpacity;
- (double)overlayBlendOpacity;
- (double)saturation;
- (void)setBlur:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setColorAddOpacity:(double)arg1;
- (void)setDefaultValues;
- (void)setLumaMapPlusColorOpacity:(double)arg1;
- (void)setOverlayBlendOpacity:(double)arg1;
- (void)setSaturation:(double)arg1;

@end
