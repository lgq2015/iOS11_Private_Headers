/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDoorIconContentView : HUPrimaryStateIconContentView {
    UIViewPropertyAnimator * _doorAnimator;
    UIVisualEffectView * _doorContainerView;
    HUShapeLayerView * _doorView;
    HUVisualEffectContainerView * _frameContainerView;
    HUShapeLayerView * _frameView;
}

@property (nonatomic, retain) UIViewPropertyAnimator *doorAnimator;
@property (nonatomic, retain) UIVisualEffectView *doorContainerView;
@property (nonatomic, retain) HUShapeLayerView *doorView;
@property (nonatomic, retain) HUVisualEffectContainerView *frameContainerView;
@property (nonatomic, retain) HUShapeLayerView *frameView;

- (void).cxx_destruct;
- (id)doorAnimator;
- (id)doorContainerView;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })doorTransformForAngle:(double)arg1;
- (id)doorView;
- (id)frameContainerView;
- (id)frameView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (void)setDoorAnimator:(id)arg1;
- (void)setDoorContainerView:(id)arg1;
- (void)setDoorView:(id)arg1;
- (void)setFrameContainerView:(id)arg1;
- (void)setFrameView:(id)arg1;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(bool)arg3;
- (bool)wantsManagedVibrancyEffect;

@end
