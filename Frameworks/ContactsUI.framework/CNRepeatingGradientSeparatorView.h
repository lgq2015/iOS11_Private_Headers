/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNRepeatingGradientSeparatorView : UIView {
    UIColor * _endColor;
    long long  _lineCount;
    UIColor * _startColor;
}

@property (nonatomic, retain) UIColor *endColor;
@property (nonatomic, readonly) NSArray *gradientColors;
@property (nonatomic) long long lineCount;
@property (nonatomic, retain) UIColor *startColor;

- (void).cxx_destruct;
- (void)_updateGradients;
- (id)endColor;
- (id)gradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)lineCount;
- (void)setEndColor:(id)arg1;
- (void)setLineCount:(long long)arg1;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end
