/* made by EzioChiu.
 */

@protocol CCCameraConnectionDelegate <NSObject>

@required

- (void)cameraConnection:(CCCameraConnection *)arg1 takePhotoWithCountdown:(unsigned long long)arg2;

@optional

- (bool)cameraConnection:(CCCameraConnection *)arg1 setCaptureMode:(long long)arg2;
- (void)cameraConnection:(CCCameraConnection *)arg1 setFlashMode:(long long)arg2;
- (void)cameraConnection:(CCCameraConnection *)arg1 setFocusPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)cameraConnection:(CCCameraConnection *)arg1 setHDRMode:(long long)arg2;
- (void)cameraConnection:(CCCameraConnection *)arg1 setIrisMode:(long long)arg2;
- (void)cameraConnection:(CCCameraConnection *)arg1 setZoomAmount:(double)arg2;
- (bool)cameraConnectionBeginBurstCapture:(CCCameraConnection *)arg1;
- (bool)cameraConnectionBurstSupport:(CCCameraConnection *)arg1;
- (void)cameraConnectionCancelCountdown:(CCCameraConnection *)arg1;
- (long long)cameraConnectionCaptureMode:(CCCameraConnection *)arg1;
- (bool)cameraConnectionEndBurstCapture:(CCCameraConnection *)arg1;
- (long long)cameraConnectionFlashMode:(CCCameraConnection *)arg1;
- (long long)cameraConnectionFlashSupport:(CCCameraConnection *)arg1;
- (long long)cameraConnectionHDRMode:(CCCameraConnection *)arg1;
- (long long)cameraConnectionHDRSupport:(CCCameraConnection *)arg1;
- (long long)cameraConnectionIrisMode:(CCCameraConnection *)arg1;
- (long long)cameraConnectionIrisSupport:(CCCameraConnection *)arg1;
- (bool)cameraConnectionIsShowingLivePreview:(CCCameraConnection *)arg1;
- (long long)cameraConnectionOrientation:(CCCameraConnection *)arg1;
- (bool)cameraConnectionStartCapture:(CCCameraConnection *)arg1;
- (bool)cameraConnectionStopCapture:(CCCameraConnection *)arg1;
- (NSArray *)cameraConnectionSupportedCaptureModes:(CCCameraConnection *)arg1;
- (void)cameraConnectionToggleCameraDevice:(CCCameraConnection *)arg1;
- (bool)cameraConnectionToggleCameraDeviceSupport:(CCCameraConnection *)arg1;
- (double)cameraConnectionZoomAmount:(CCCameraConnection *)arg1;
- (bool)cameraConnectionZoomSupport:(CCCameraConnection *)arg1;

@end
