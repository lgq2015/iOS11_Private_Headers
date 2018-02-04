/* made by EzioChiu.
 */

@protocol NUIContainerViewDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(NUIContainerView *)arg1 layoutFrameForArrangedSubview:(UIView *)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(NUIContainerView *)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(UIView *)arg3;
- (void)containerView:(NUIContainerView *)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)containerViewDidInvalidateIntrinsicContentSize:(NUIContainerView *)arg1;
- (void)containerViewDidLayoutArrangedSubviews:(NUIContainerView *)arg1;

@end
