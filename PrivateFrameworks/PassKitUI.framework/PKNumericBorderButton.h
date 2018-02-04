/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumericBorderButton : UIButton {
    UIView * _bottomBorder;
    UIView * _leadingBorder;
    UIView * _topBorder;
    UIView * _trailingBorder;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBorder:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;

@end
