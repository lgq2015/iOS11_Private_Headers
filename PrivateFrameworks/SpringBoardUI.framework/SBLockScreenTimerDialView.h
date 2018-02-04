/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenTimerDialView : UIView <SBFScreenFadeReplicatable, SBUILegibility> {
    SBUILegibilityView * _dialView;
    _UILegibilitySettings * _legibilitySettings;
    double  _strength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_imageNameForCurrentContentSize:(id)arg1;
- (id)_newDialViewForSettings:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)legibilitySettings;
- (id)replicate;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;

@end
