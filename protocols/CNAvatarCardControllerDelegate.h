/* made by EzioChiu.
 */

@protocol CNAvatarCardControllerDelegate <NSObject>

@required

- (UIViewController *)presentingViewControllerForAvatarCardController:(CNAvatarCardController *)arg1;

@optional

- (NSArray *)avatarCardController:(CNAvatarCardController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (long long)avatarCardController:(CNAvatarCardController *)arg1 presentationResultForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)avatarCardController:(CNAvatarCardController *)arg1 shouldPresentForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)avatarCardController:(CNAvatarCardController *)arg1 shouldShowContact:(CNContact *)arg2;
- (void)avatarCardControllerDidDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillBeginPreviewInteraction:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillDismiss:(CNAvatarCardController *)arg1;

@end
