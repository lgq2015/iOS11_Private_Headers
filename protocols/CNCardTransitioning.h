/* made by EzioChiu.
 */

@protocol CNCardTransitioning <NSObject>

@required

- (void)setTransitioningImageVisible:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (UIImage *)transitioningImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningImageFrame;
- (bool)transitioningImageVisible;
- (UIView *)transitioningView;

@optional

- (UIView *)transitioningContentView;

@end
