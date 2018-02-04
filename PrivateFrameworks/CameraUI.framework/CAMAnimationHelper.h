/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMAnimationHelper : NSObject

+ (id)_animationWithKeyPath:(id)arg1;
+ (double)_highlightScaleForLayoutStyle:(long long)arg1;
+ (void)animateLayer:(id)arg1 forButtonHighlighted:(bool)arg2 layoutStyle:(long long)arg3;
+ (void)animateLayer:(id)arg1 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromCurrentState:(bool)arg3;
+ (void)configurePowerSensitiveAnimation:(id)arg1;

@end
