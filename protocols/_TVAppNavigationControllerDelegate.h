/* made by EzioChiu.
 */

@protocol _TVAppNavigationControllerDelegate <NSObject>

@optional

- (bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldDismissShroudForDocument:(IKAppDocument *)arg2;
- (bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldIgnoreDismissalForViewController:(UIViewController *)arg2;
- (bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldOverrideModalBehaviorForDocument:(IKAppDocument *)arg2 andExistingDocument:(IKAppDocument *)arg3;
- (void)appNavigationController:(_TVAppNavigationController *)arg1 willLoadAppDocumentWithController:(_TVAppDocumentController *)arg2;

@end
