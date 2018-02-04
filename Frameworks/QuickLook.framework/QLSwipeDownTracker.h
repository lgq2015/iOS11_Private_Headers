/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSwipeDownTracker : PHSwipeDownTracker <QLDismissGestureTracking> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldFinishDismissal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackedBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } trackedCenter;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity { double x1; double x2; double x3; double x4; } trackedVelocity;

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;

@end
