/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCLongLookPresentationControllerDelegate, NCNotificationCustomContentDelegate, NCNotificationLongLookViewDelegate> {
    UINotificationFeedbackGenerator * _homeAffordanceFeedbackGenerator;
    NCLongLookTransitionDelegate * _longLookTransitionDelegate;
    id /* block */  _notificationTapBlock;
    NCNotificationShortLookViewController * _presentingNotificationViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_notificationTapBlock, setter=_setNotificationTapBlock:, nonatomic, copy) id /* block */ notificationTapBlock;
@property (nonatomic) NCNotificationShortLookViewController *presentingNotificationViewController;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (id)_extensionIdentifier;
- (void)_fireHomeGesture;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleCloseButton:(id)arg1;
- (void)_handleCustomContentHomeAffordancePan:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (void)_handleNotificationTap:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(bool)arg3;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (void)_loadLookView;
- (id /* block */)_notificationTapBlock;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 parentContentContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_presentedLongLookViewController;
- (void)_setNotificationTapBlock:(id /* block */)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_settleHomeAffordance;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2;
- (void)_updateTitleWithProvidedCustomContent;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)contentProviderDismissCustomContent:(id)arg1 animated:(bool)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContentDidUpdateTitle:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)hideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isLookStyleLongLook;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (bool)longLookPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg1;
- (long long)longLookTransitionTypeForTransitionDelegate:(id)arg1;
- (void)notificationLongLookView:(id)arg1 willInteractWithURL:(id)arg2;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentingNotificationViewController;
- (void)preserveInputViews;
- (bool)resignFirstResponder;
- (bool)restoreInputViews;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setPresentingNotificationViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)unhideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
