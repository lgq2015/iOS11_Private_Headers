/* made by EzioChiu.
 */

@protocol PXMutablePinchTracker <NSObject>

@required

- (struct CGPoint { double x1; double x2; })pinchLocation1;
- (struct CGPoint { double x1; double x2; })pinchLocation2;
- (void)setPinchLocation1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPinchLocation2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
