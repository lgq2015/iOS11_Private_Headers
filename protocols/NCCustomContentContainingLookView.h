/* made by EzioChiu.
 */

@protocol NCCustomContentContainingLookView <MTPlatter, MTTitled>

@required

- (UIScrollView *)_scrollView;
- (struct CGSize { double x1; double x2; })actionsSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeExcludingActions;
- (unsigned long long)customContentLocation;
- (struct CGSize { double x1; double x2; })customContentSize;
- (bool)hidesNotificationContent;
- (bool)isActionsHidden;
- (UITapGestureRecognizer *)lookViewTapGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewFrame;
- (void)setActionsHidden:(bool)arg1;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidesNotificationContent:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeExcludingActions;

@end
