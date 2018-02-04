/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTPreviewBackgroundMaterialSettings : NSObject <MTMaterialOverlaySettings, MTMaterialSettings, MTZooming, _MTMaterialVersioning>

@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic, readonly) long long materialVersion;
@property (nonatomic) double primaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *primaryOverlayTintColor;
@property (nonatomic) double saturation;
@property (nonatomic) double secondaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *secondaryOverlayTintColor;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (nonatomic) bool usesLuminanceMap;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;
@property (nonatomic, readonly) double zoom;

+ (id)sharedMaterialSettings;

- (double)blurRadius;
- (double)brightness;
- (double)luminanceAlpha;
- (long long)materialVersion;
- (double)primaryOverlayTintAlpha;
- (id)primaryOverlayTintColor;
- (double)saturation;
- (double)secondaryOverlayTintAlpha;
- (id)secondaryOverlayTintColor;
- (void)setBlurRadius:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setLuminanceAlpha:(double)arg1;
- (void)setPrimaryOverlayTintAlpha:(double)arg1;
- (void)setSaturation:(double)arg1;
- (void)setSecondaryOverlayTintAlpha:(double)arg1;
- (void)setTintAlpha:(double)arg1;
- (void)setUsesLuminanceMap:(bool)arg1;
- (double)tintAlpha;
- (void)updateWithSettingsFromArchive:(id)arg1;
- (bool)usesLuminanceMap;
- (id)vibrantStylingProvider;
- (double)zoom;

@end
