/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIIconForceTouchVisualEffectView : _UIBackdropView {
    double  _effectStrength;
    _UIBackdropViewSettings * _targetBackdropViewSettings;
}

@property (nonatomic) double effectStrength;

- (void).cxx_destruct;
- (double)effectStrength;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setComputesColorSettings:(bool)arg1;
- (void)setEffectStrength:(double)arg1;

@end
