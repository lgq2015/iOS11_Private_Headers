/* made by EzioChiu.
 */

@protocol CNAvatarCardControllerOrbTransitionDelegate <NSObject>

@required

- (void)orbTransitionDidEndTransition:(CNAvatarCardControllerOrbTransition *)arg1;
- (void)orbTransitionDidPrepareTransition:(CNAvatarCardControllerOrbTransition *)arg1 withContainerView:(UIView *)arg2;

@end