/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView {
    NTKColoringLabel * _label;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)_updateLabelsForFontChange;
- (bool)_wantsPlatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateLabelWithString:(id)arg1;

@end
