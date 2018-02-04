/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKWiggleRotateAnimator : GKBubblePathAnimator {
    bool  _aggroBubbles;
}

@property (nonatomic) bool aggroBubbles;

- (bool)aggroBubbles;
- (void)animateTransition:(id)arg1;
- (void)animateWithBounce:(id)arg1;
- (void)animateWithoutBounce:(id)arg1;
- (long long)animatorType;
- (bool)rotatingRightWithTransitionContext:(id)arg1;
- (void)setAggroBubbles:(bool)arg1;
- (bool)updateInFlightAnimations:(id)arg1;

@end
