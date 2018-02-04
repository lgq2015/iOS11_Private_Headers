/* made by EzioChiu.
 */

@protocol SXPresentationDelegate <NSObject>

@required

- (<SXAdDocumentStateManager> *)adDocumentStateManager;
- (bool)addInteractivityFocusForComponent:(SXComponentView *)arg1;
- (bool)allowInteractivityFocusForComponent:(SXComponentView *)arg1;
- (SXComponentAnimationController *)animationController;
- (SXComponentBehaviorController *)behaviorController;
- (SXComponentController *)componentController;
- (void)dismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (SXFullscreenVideoPlaybackManager *)fullscreenVideoPlaybackManager;
- (bool)isScrolling;
- (void)maintainPositionOfViewWhileScrolling:(UIView *)arg1;
- (SXMediaPlaybackController *)mediaPlaybackController;
- (SXPresentationAttributes *)presentationAttributes;
- (UIViewController *)presentingContentViewController;
- (void)releasePositionOfView:(UIView *)arg1;
- (void)removeInteractivityFocusForComponent:(SXComponentView *)arg1;
- (UIView *)requestFullScreenCanvasForComponent:(SXComponentView *)arg1 canvasController:(SXFullScreenCanvasController *)arg2;
- (SXFullScreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1;
- (SXFullScreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 6: SXComponentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (SXTangierController *)tangierController;
- (<SXTextSelectionManager> *)textSelectionManager;
- (void)updateBehaviorForComponentView:(SXComponentView *)arg1;
- (<SXVideoPlayerViewControllerProvider> *)videoPlayerViewControllerProvider;
- (SXViewport *)viewport;

@end
