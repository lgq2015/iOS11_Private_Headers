/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKScatterAnimator : GKBubblePathAnimator {
    long long  _focusBubbleType;
}

@property (nonatomic) long long focusBubbleType;

+ (double)preferredDuration;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (long long)focusBubbleType;
- (double)minimumDurationForViewAnimations;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg3 context:(id)arg4;
- (bool)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (bool)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (void)setFocusBubbleType:(long long)arg1;

@end