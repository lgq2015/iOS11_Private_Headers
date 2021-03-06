/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransition : NSObject {
    UIViewPropertyAnimator * _currentAnimator;
    double  _interactiveTransitionPercentComplete;
    AVPlayerViewController * _playerViewController;
    <UIViewControllerContextTransitioning> * _transitionContext;
    bool  _wasInitiallyInteractive;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) UIViewPropertyAnimator *currentAnimator;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIViewController *fromViewController;
@property (nonatomic) double interactiveTransitionPercentComplete;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) UIViewController *toViewController;
@property (nonatomic, readonly) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic) bool wasInitiallyInteractive;

+ (id)transitionWithTransitionContext:(id)arg1 playerViewController:(id)arg2;

- (void).cxx_destruct;
- (void)animateAlongsideInteractiveTransitionAnimationForCancelling;
- (void)animateAlongsideInteractiveTransitionAnimationForFinishing;
- (void)animateAlongsideNonInteractiveTransitionAnimation;
- (void)animateNonInteractiveTransition;
- (id)animatorWithDurationFactor:(double)arg1;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (id)currentAnimator;
- (void)dealloc;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)fromView;
- (id)fromViewController;
- (id)initWithTransitionContext:(id)arg1 playerViewController:(id)arg2;
- (double)interactiveTransitionPercentComplete;
- (void)pauseInteractiveTransition;
- (id)playerViewController;
- (void)setCurrentAnimator:(id)arg1;
- (void)setInteractiveTransitionPercentComplete:(double)arg1;
- (void)setWasInitiallyInteractive:(bool)arg1;
- (id)toView;
- (id)toViewController;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScale:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)transitionContext;
- (void)transitionWillBegin;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4;
- (bool)wasInitiallyInteractive;

@end
