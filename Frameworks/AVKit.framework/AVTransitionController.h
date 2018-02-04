/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate> {
    AVTransition * _activeTransition;
    AVInteractiveTransitionGestureTracker * _gestureTracker;
    AVPlayerViewController * _playerViewController;
    long long  _state;
}

@property (nonatomic, retain) AVTransition *activeTransition;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (id)_animationControllerForPlayerViewController;
- (void)_createActiveTransitionIfNeededForTransitionContext:(id)arg1;
- (id)activeTransition;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (id)gestureTracker;
- (void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
- (void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint { double x1; double x2; })arg5;
- (void)gestureTrackerDidCancelTracking:(id)arg1;
- (void)gestureTrackerDidFinishTracking:(id)arg1;
- (bool)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)playerViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setActiveTransition:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (long long)state;
- (double)transitionDuration:(id)arg1;
- (bool)wantsInteractiveStart;

@end
