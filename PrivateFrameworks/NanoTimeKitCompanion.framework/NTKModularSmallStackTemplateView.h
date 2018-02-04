/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> * _imageView;
    NTKOneColumnModularSmallLayoutAttributes * _layoutAttributes;
    NTKColoringLabel * _subtitleLabel;
    NTKColoringLabel * _titleLabel;
}

@property (nonatomic, retain) UIView<NTKComplicationImageView> *imageView;
@property (nonatomic, retain) NTKColoringLabel *subtitleLabel;
@property (nonatomic, retain) NTKColoringLabel *titleLabel;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_update;
- (void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
