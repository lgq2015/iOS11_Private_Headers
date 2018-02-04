/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPSwipeDownTracker : PHSwipeDownTracker {
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

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;

@end
