/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView {
    UIView<NTKComplicationImageView> * _imageView;
}

@property (nonatomic, retain) UIView<NTKComplicationImageView> *imageView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateImageViewMulticolorAlphaIfNeeded;
- (bool)_wantsPlatter;
- (id)imageView;
- (void)layoutSubviews;
- (void)setImageView:(id)arg1;
- (void)setUsesMediumLayout:(bool)arg1;

@end
