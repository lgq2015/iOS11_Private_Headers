/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView {
    HUAnimationApplier * _animationApplier;
    HUVisualEffectContainerView * _bodyContainerView;
    HUShapeLayerView * _bodyView;
    UIView * _indicatorClippingView;
    NSArray * _indicatorContainerViews;
    NSArray * _indicatorViews;
}

@property (nonatomic, retain) HUAnimationApplier *animationApplier;
@property (nonatomic, retain) HUVisualEffectContainerView *bodyContainerView;
@property (nonatomic, retain) HUShapeLayerView *bodyView;
@property (nonatomic, retain) UIView *indicatorClippingView;
@property (nonatomic, retain) NSArray *indicatorContainerViews;
@property (nonatomic, retain) NSArray *indicatorViews;

- (void).cxx_destruct;
- (id)_animationSettingsForShowingIndicators:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndicatorViewInPosition:(unsigned long long)arg1 showIndicators:(bool)arg2;
- (void)_layoutIndicatorViewsShowingIndicators:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (void)_updateIndicatorAlpha;
- (id)animationApplier;
- (id)bodyContainerView;
- (id)bodyView;
- (id)indicatorClippingView;
- (id)indicatorContainerViews;
- (id)indicatorViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (void)setAnimationApplier:(id)arg1;
- (void)setBodyContainerView:(id)arg1;
- (void)setBodyView:(id)arg1;
- (void)setIndicatorClippingView:(id)arg1;
- (void)setIndicatorContainerViews:(id)arg1;
- (void)setIndicatorViews:(id)arg1;
- (bool)showIndicators;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(bool)arg3;
- (bool)wantsManagedVibrancyEffect;

@end
