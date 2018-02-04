/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {
    bool  _animationsAllowed;
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_layoutContentView;
- (id)_ringColor;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (void)_updateRingColors;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;

@end
