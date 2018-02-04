/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKDrawingGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _drawTouchStartPoint;
    <PKDrawingGestureTarget> * _drawingTarget;
    bool  _drawingTargetIsDrawing;
    UITouch * _drawingTouch;
    bool  _gestureDetected;
    bool  _ignoreFingerTouchesUntilReset;
    double  _squaredThreshold;
    double  _thresholdDistance;
    double  thresholdDistance;
}

@property (nonatomic) <PKDrawingGestureTarget> *drawingTarget;
@property (nonatomic, readonly) UITouch *drawingTouch;
@property (nonatomic) double thresholdDistance;

- (void).cxx_destruct;
- (void)_beginDrawingWithTouch:(id)arg1;
- (void)_cancelDrawing;
- (void)_drawingBegan;
- (void)_drawingCancelled;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)arg1;
- (void)_endDrawing;
- (void)_updateDrawingWithEvent:(id)arg1;
- (void)cancel;
- (id)drawingTarget;
- (id)drawingTouch;
- (void)end;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setDrawingTarget:(id)arg1;
- (void)setThresholdDistance:(double)arg1;
- (double)thresholdDistance;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
