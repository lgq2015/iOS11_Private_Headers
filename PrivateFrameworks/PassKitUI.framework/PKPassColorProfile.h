/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassColorProfile : NSObject {
    UIColor * _backgroundColor;
    double  _backgroundLightness;
    UIColor * _foregroundColor;
    double  _foregroundLightness;
    UIColor * _highlightColor;
    UIColor * _labelColor;
    double  _labelLightness;
    double  _overlayDarkeningAlpha;
    double  _overlayLighteningAlpha;
    double  _regularDarkeningAlpha;
    double  _regularLighteningAlpha;
    PKPassColorProfile * _stripProfile;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, readonly) bool isLight;
@property (nonatomic, readonly) UIColor *labelColor;
@property (nonatomic, readonly) double overlayDarkeningAlpha;
@property (nonatomic, readonly) double overlayLighteningAlpha;
@property (nonatomic, readonly) double regularDarkeningAlpha;
@property (nonatomic, readonly) double regularLighteningAlpha;

+ (id)profileForDisplayProfile:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)_imageForGlyph:(id)arg1 color:(id)arg2;
- (id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)backgroundColor;
- (void)dealloc;
- (id)foregroundAttributesForFont:(id)arg1;
- (id)foregroundColor;
- (id)foregroundColorOverStrip:(bool)arg1;
- (id)foregroundImageForGlyph:(id)arg1;
- (id)highlightColor;
- (bool)isLight;
- (id)labelAttributesForFont:(id)arg1;
- (id)labelColor;
- (id)labelColorOverStrip:(bool)arg1;
- (id)labelImageForGlyph:(id)arg1;
- (double)overlayDarkeningAlpha;
- (double)overlayLighteningAlpha;
- (double)regularDarkeningAlpha;
- (double)regularLighteningAlpha;

@end
