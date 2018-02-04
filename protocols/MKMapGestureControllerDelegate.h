/* made by EzioChiu.
 */

@protocol MKMapGestureControllerDelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })gestureController:(MKMapGestureController *)arg1 focusPointForPoint:(struct CGPoint { double x1; double x2; })arg2 gestureKind:(long long)arg3;
- (bool)gestureController:(MKMapGestureController *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)gestureControllerDidStopPanning:(MKMapGestureController *)arg1 willDecelerate:(bool)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopRotating:(MKMapGestureController *)arg1 willDecelerate:(bool)arg2;
- (void)gestureControllerDidStopRotatingDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopTilting:(MKMapGestureController *)arg1 willDecelerate:(bool)arg2 tiltDirection:(long long)arg3;
- (void)gestureControllerDidStopTiltingDecelerating:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopUserInteraction:(MKMapGestureController *)arg1;
- (void)gestureControllerDidStopZooming:(MKMapGestureController *)arg1 direction:(long long)arg2 type:(long long)arg3 willDecelerate:(bool)arg4;
- (void)gestureControllerDidStopZooming:(MKMapGestureController *)arg1 direction:(long long)arg2 willDecelerate:(bool)arg3;
- (void)gestureControllerDidStopZoomingDecelerating:(MKMapGestureController *)arg1 direction:(long long)arg2;
- (void)gestureControllerDidStopZoomingDecelerating:(MKMapGestureController *)arg1 direction:(long long)arg2 type:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gestureControllerSignificantViewFrame:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartPanning:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartRotating:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartTilting:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartUserInteraction:(MKMapGestureController *)arg1;
- (void)gestureControllerWillStartZooming:(MKMapGestureController *)arg1 animated:(bool)arg2;

@optional

- (double)gestureController:(MKMapGestureController *)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(UITouch *)arg3;

@end
