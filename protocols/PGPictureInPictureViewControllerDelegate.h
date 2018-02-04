/* made by EzioChiu.
 */

@protocol PGPictureInPictureViewControllerDelegate <NSObject>

@optional

- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerActionButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(PGPictureInPictureViewController *)arg1;

@end
