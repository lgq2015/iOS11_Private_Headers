/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView {
    UIView<NTKComplicationImageView> * _imageView;
    bool  _needsLayoutContent;
}

@property (nonatomic, retain) UIView<NTKComplicationImageView> *imageView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageView:(id)arg1;

@end
