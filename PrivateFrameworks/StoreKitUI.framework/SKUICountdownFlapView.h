/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdownFlapView : UIImageView {
    UIView * _backgroundViewBot;
    UIView * _backgroundViewTop;
    UIImageView * _backgroundViewTransitionBot;
    UIImageView * _backgroundViewTransitionTop;
    double  _factor;
    UIColor * _flapBottomColor;
    UIColor * _flapTopColor;
    UILabel * _labelBot;
    UILabel * _labelTop;
    UILabel * _labelTransitionBot;
    UILabel * _labelTransitionTop;
    long long  _position;
    NSString * _string;
    UIColor * _textColor;
}

@property (nonatomic, readonly) UIColor *flapBottomColor;
@property (nonatomic, readonly) UIColor *flapTopColor;
@property (nonatomic, readonly) long long position;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)_newBackgroundImageForTop:(int)arg1;
- (id)_newLabel;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForAngle:(double)arg1 isTop:(bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)initWithPosition:(long long)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;
- (void)layoutSubviews;
- (long long)position;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setString:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)string;
- (id)textColor;

@end
