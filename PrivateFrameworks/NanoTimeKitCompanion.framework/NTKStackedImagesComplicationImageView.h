/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKStackedImagesComplicationImageView : UIView <NTKComplicationImageView, NTKLegibilityView> {
    NTKColoringImageView * _backgroundImageView;
    UIColor * _color;
    UIImageView * _foregroundAccentImageView;
    NTKColoringImageView * _foregroundImageView;
    CLKImageProvider * _imageProvider;
    double  _imageScaleFactor;
    bool  _isShadowImagesStale;
    bool  _isUsingLegibility;
    NTKColoringImageView * _monochromeImageView;
    UIImageView * _monochromeShadowView;
    double  _multicolorAlpha;
    UIImageView * _multipartShadowView;
    UIImage * _multipartShadowViewSource;
    UIColor * _overrideColor;
    double  _shadowBlur;
    UIColor * _shadowColor;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic) bool legibilityEnabled;
@property (nonatomic) double multicolorAlpha;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) double shadowBlur;
@property (nonatomic, retain) UIColor *shadowColor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (void)_enumerateImageViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateMultipartImageViewsWithBlock:(id /* block */)arg1;
- (bool)_hasMultipartImages;
- (bool)_hasShadowViews;
- (void)_loadImageViewsIfNecessary;
- (void)_updateAlpha;
- (void)_updateColors;
- (void)_updateImageSubviewsMaxSize;
- (void)_updateImages;
- (void)_updateShadow;
- (void)_updateShadowViewImages;
- (id)color;
- (id)contentColor;
- (bool)hasMonochromeImage;
- (id)imageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)legibilityEnabled;
- (double)multicolorAlpha;
- (id)overrideColor;
- (void)setColor:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLegibilityEnabled:(bool)arg1;
- (void)setMulticolorAlpha:(double)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesLegibility;

@end
