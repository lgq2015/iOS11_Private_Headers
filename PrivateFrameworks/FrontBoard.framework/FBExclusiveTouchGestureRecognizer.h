/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExclusiveTouchGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedMovement;
    bool  _achievedMaximumAbsoluteAccumulatedMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maximumAbsoluteAccumulatedMovement;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } accumulatedMovement;
@property (nonatomic, readonly) bool achievedMaximumAbsoluteAccumulatedMovement;
@property (nonatomic) <FBExclusiveTouchGestureRecognizerDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } maximumAbsoluteAccumulatedMovement;

- (struct CGPoint { double x1; double x2; })accumulatedMovement;
- (bool)achievedMaximumAbsoluteAccumulatedMovement;
- (id)description;
- (struct CGPoint { double x1; double x2; })maximumAbsoluteAccumulatedMovement;
- (void)reset;
- (void)setMaximumAbsoluteAccumulatedMovement:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
