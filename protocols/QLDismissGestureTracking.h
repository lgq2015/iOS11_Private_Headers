/* made by EzioChiu.
 */

@protocol QLDismissGestureTracking <NSObject>

@required

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)dismissalProgress;
- (double)finalAnimationDuration;
- (double)finalAnimationSpringDamping;
- (bool)shouldFinishDismissal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { double x1; double x2; })trackedCenter;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;
- (struct _QLDismissGestureTrackingVelocity { double x1; double x2; double x3; double x4; })trackedVelocity;

@end
