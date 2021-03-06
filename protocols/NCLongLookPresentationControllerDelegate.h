/* made by EzioChiu.
 */

@protocol NCLongLookPresentationControllerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })longLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1 frameForTransitionViewInPresentationSuperview:(UIView *)arg2;

@optional

- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForLongLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1;
- (bool)longLookPresentationControllerShouldAllowKeyboardOnAppearance:(UIPresentationController<NCLongLookPresentationController> *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForLongLookPresentationController:(UIPresentationController<NCLongLookPresentationController> *)arg1;

@end
