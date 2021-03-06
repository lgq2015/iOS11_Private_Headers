/* made by EzioChiu.
 */

@protocol NCLongLookPresentationController <NCLongLookAnimatorObserving>

@required

- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3 sourceView:(UIView *)arg4;
- (bool)isHomeAffordanceVisible;
- (<NCLongLookPresentationControllerDelegate> *)longLookPresentationControllerDelegate;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setLongLookPresentationControllerDelegate:(id <NCLongLookPresentationControllerDelegate>)arg1;

@end
