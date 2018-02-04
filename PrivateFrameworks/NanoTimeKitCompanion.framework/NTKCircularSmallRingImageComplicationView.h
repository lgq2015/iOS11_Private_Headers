/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {
    UIView<NTKComplicationImageView> * _imageView;
    CLKProgressProvider * _progressProvider;
    struct NSNumber { Class x1; } * _progressUpdateToken;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
