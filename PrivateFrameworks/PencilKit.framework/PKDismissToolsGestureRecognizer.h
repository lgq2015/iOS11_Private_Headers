/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKDismissToolsGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    bool  _trackingTouch;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic) bool trackingTouch;

- (void)reset;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackingTouch:(bool)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)trackingTouch;

@end
