/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCBannerPresentationAnimator : NSObject <NCViewControllerAnimatedTransitioning> {
    UIGestureRecognizer * _activeGesture;
    bool  _presenting;
    <NCBannerPresentationAnimatorDelegate> * _transitionAnimatorDelegate;
}

@property (nonatomic, retain) UIGestureRecognizer *activeGesture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;
@property (nonatomic) <NCBannerPresentationAnimatorDelegate> *transitionAnimatorDelegate;

- (void).cxx_destruct;
- (void)_animateDismissalOfViewController:(id)arg1 withContext:(id)arg2;
- (void)_animatePresentationOfViewController:(id)arg1 withContext:(id)arg2;
- (id)activeGesture;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (bool)isPresenting;
- (void)setActiveGesture:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setTransitionAnimatorDelegate:(id)arg1;
- (id)transitionAnimatorDelegate;
- (double)transitionDuration:(id)arg1;

@end
