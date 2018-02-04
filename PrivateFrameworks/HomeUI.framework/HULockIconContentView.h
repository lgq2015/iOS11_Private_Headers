/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULockIconContentView : HUPrimaryStateIconContentView <CAAnimationDelegate> {
    HULockIconStateTransition * _activeTransition;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutSize;
    HUVisualEffectContainerView * _lockBodyContainerView;
    HUShapeLayerView * _lockBodyView;
    HUVisualEffectContainerView * _lockKeyholeContainerView;
    HUShapeLayerView * _lockKeyholeFillView;
    UIVisualEffectView * _lockShackleContainerView;
    HUShapeLayerView * _lockShackleView;
    unsigned long long  _lockState;
}

@property (nonatomic, retain) HULockIconStateTransition *activeTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } lastLayoutSize;
@property (nonatomic, retain) HUVisualEffectContainerView *lockBodyContainerView;
@property (nonatomic, retain) HUShapeLayerView *lockBodyView;
@property (nonatomic, retain) HUVisualEffectContainerView *lockKeyholeContainerView;
@property (nonatomic, retain) HUShapeLayerView *lockKeyholeFillView;
@property (nonatomic, retain) UIVisualEffectView *lockShackleContainerView;
@property (nonatomic, retain) HUShapeLayerView *lockShackleView;
@property (nonatomic) unsigned long long lockState;
@property (readonly) Class superclass;

+ (id)_lockKeyholePathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_lockShacklePathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_applyAnimation:(id)arg1 ofType:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_performTransitionToLockState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_removeAllTransitionAnimations;
- (void)_removePendingBounceAnimations;
- (void)_rotateShackleForLockState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_translateShackleForLockState:(unsigned long long)arg1 animated:(bool)arg2;
- (id)_viewForTransitionAnimationType:(unsigned long long)arg1;
- (id)_viewsAnimatedForStateTransition;
- (id)activeTransition;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })lastLayoutSize;
- (void)layoutSubviews;
- (id)lockBodyContainerView;
- (id)lockBodyView;
- (id)lockKeyholeContainerView;
- (id)lockKeyholeFillView;
- (id)lockShackleContainerView;
- (id)lockShackleView;
- (unsigned long long)lockState;
- (id)managedVisualEffectViews;
- (void)setActiveTransition:(id)arg1;
- (void)setLastLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLockBodyContainerView:(id)arg1;
- (void)setLockBodyView:(id)arg1;
- (void)setLockKeyholeContainerView:(id)arg1;
- (void)setLockKeyholeFillView:(id)arg1;
- (void)setLockShackleContainerView:(id)arg1;
- (void)setLockShackleView:(id)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(bool)arg3;
- (bool)wantsManagedVibrancyEffect;

@end
