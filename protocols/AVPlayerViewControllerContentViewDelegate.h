/* made by EzioChiu.
 */

@protocol AVPlayerViewControllerContentViewDelegate <NSObject>

@required

- (void)playerViewControllerContentViewDidChangeVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidMoveToWindow:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewWillLayoutSubviews:(AVPlayerViewControllerContentView *)arg1;

@end
