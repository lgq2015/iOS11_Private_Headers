/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowOverlayView : GKBubbleFlowContainerView

@property (nonatomic, readonly) GKBubbleSet *secondaryBubbleControls;

+ (id)sharedBubbleOverlayView;
+ (id)sharedBubbleOverlayViewForWindow:(id)arg1;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultRectForBubbleOfType:(long long)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)secondaryBubbleControls;
- (void)willBeginTransition;

@end
