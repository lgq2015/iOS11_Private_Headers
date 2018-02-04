/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    _GKBubbleFlowTransitionInfo * _transitionInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _GKBubbleFlowTransitionInfo *transitionInfo;

- (void)_animateTransition:(id)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)dealloc;
- (void)setTransitionInfo:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionInfo;

@end
