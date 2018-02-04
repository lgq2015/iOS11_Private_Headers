/* made by EzioChiu.
 */

@protocol AVPlaybackControlsVisibilityControllerDelegate <NSObject>

@required

- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 animateAlongsideVisibilityAnimations:(id <UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 updateStatusBarAppearanceUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityControllerDidChangeViewVisibility:(AVPlaybackControlsVisibilityController *)arg1;
- (void)playbackControlsVisibilityControllerWillExitAutoplayPhase:(AVPlaybackControlsVisibilityController *)arg1;

@end
