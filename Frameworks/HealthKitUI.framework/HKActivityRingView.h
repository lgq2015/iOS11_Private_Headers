/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKActivityRingView : UIView {
    HKActivitySummary * _activitySummary;
    double  _emptyRingAlpha;
    _HKShapeView * _maskView;
    double  _ringInsetPercentage;
    HKRingsView * _ringsView;
    bool  _shouldBypassApplicationStateChecking;
}

@property (nonatomic, retain) HKActivitySummary *activitySummary;
@property (getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:, nonatomic) double emptyRingAlpha;
@property (getter=_ringInsetPercentage, setter=_setRingInsetPercentage:, nonatomic) double ringInsetPercentage;
@property (getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:, nonatomic) bool shouldBypassApplicationStateChecking;

+ (id)_iconSpriteImage;

- (void).cxx_destruct;
- (void)_displayIcons;
- (double)_emptyRingAlpha;
- (double)_ringDiameter;
- (double)_ringInsetPercentage;
- (void)_setActivityRingViewBackgroundColor:(id)arg1;
- (void)_setActivityRingViewBackgroundTransparent:(bool)arg1;
- (void)_setActivitySummary:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setEmptyRingAlpha:(double)arg1;
- (void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3;
- (void)_setRingInsetPercentage:(double)arg1;
- (void)_setShouldBypassApplicationStateChecking:(bool)arg1;
- (void)_setUpAfterInit;
- (void)_setUpRingsView;
- (bool)_shouldBypassApplicationStateChecking;
- (id)_snapshotImage;
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3;
- (void)_updateMaskPath;
- (void)_updateRingsViewDiameter;
- (void)_updateRingsViewDiameterLegacy;
- (id)activitySummary;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1;
- (void)setActivitySummary:(id)arg1 animated:(bool)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
