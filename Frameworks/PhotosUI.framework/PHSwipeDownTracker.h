/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHSwipeDownTracker : NSObject {
    PXSwipeDownTracker * _impl;
}

@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (nonatomic, readonly) PXSwipeDownTracker *impl;
@property (nonatomic, readonly) bool shouldFinishDismissal;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackedBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } trackedCenter;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } trackedTransform;
@property (nonatomic, readonly) struct PHDisplayVelocity { double x1; double x2; double x3; double x4; } trackedVelocity;

- (void).cxx_destruct;
- (double)dismissalProgress;
- (double)finalAnimationDuration;
- (double)finalAnimationSpringDamping;
- (id)impl;
- (id)init;
- (bool)shouldFinishDismissal;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)trackGestureTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { double x1; double x2; })trackedCenter;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;
- (struct PHDisplayVelocity { double x1; double x2; double x3; double x4; })trackedVelocity;

@end
