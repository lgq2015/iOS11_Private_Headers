/* made by EzioChiu.
 */

@protocol CAMZoomDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didChangeRampingVideoZoom:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputMinAvailableVideoZoomFactor:(double)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputVideoZoomFactor:(double)arg2;

@end
