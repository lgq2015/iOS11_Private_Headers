/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAnimatedLabel : UIView {
    PXAnimatedCounter * _counter;
    NSLayoutConstraint * _counterWidthConstraint;
    UIFont * _font;
    UILabel * _label;
    NSString * _text;
}

@property (retain) PXAnimatedCounter *counter;
@property (readonly) NSLayoutConstraint *counterWidthConstraint;
@property (nonatomic, retain) UIFont *font;
@property (retain) UILabel *label;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)_updateConstraintsForText;
- (void)commonInit;
- (id)counter;
- (id)counterWidthConstraint;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)layoutSubviews;
- (void)setCounter:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)text;

@end
