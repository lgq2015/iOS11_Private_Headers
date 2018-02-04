/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPhysicalButtonView : UIView {
    bool  _animating;
    NSString * _animationKey;
    double  _animationWidth;
    UIView * _buttonView;
    NSString * _instruction;
    UILabel * _instructionLabel;
    long long  _style;
}

@property (nonatomic) bool animating;
@property (nonatomic, copy) NSString *instruction;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (void)_animateWithWidth:(double)arg1;
- (void)_beginAnimationIfNecessary;
- (void)_endAnimationIfNecessary;
- (bool)animating;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)instruction;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setInstruction:(id)arg1;
- (long long)style;

@end
