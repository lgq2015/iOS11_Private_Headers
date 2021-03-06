/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookTransitionDelegate : NSObject <NCLongLookAnimatorObserving, UIViewControllerTransitioningDelegate> {
    UIPresentationController<NCLongLookPresentationController> * _longLookPresentationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_longLookPresentationController, setter=_setLongLookPresentationController:, nonatomic, retain) UIPresentationController<NCLongLookPresentationController> *longLookPresentationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_longLookPresentationController;
- (id)_longLookPresentationControllerOfClass:(Class)arg1 presentedController:(id)arg2 presentingController:(id)arg3 sourceController:(id)arg4;
- (void)_setLongLookPresentationController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)longLookAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)longLookAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)previewPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end
