/* made by EzioChiu.
 */

@protocol UIImagePickerCameraViewController <NSObject>

@required

- (long long)_cameraCaptureMode;
- (long long)_cameraDevice;
- (long long)_cameraFlashMode;
- (UIView *)_cameraOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_cameraViewTransform;
- (void)_setCameraCaptureMode:(long long)arg1;
- (void)_setCameraDevice:(long long)arg1;
- (void)_setCameraFlashMode:(long long)arg1;
- (void)_setCameraOverlayView:(UIView *)arg1;
- (void)_setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setShowsCameraControls:(bool)arg1;
- (bool)_showsCameraControls;
- (bool)_startVideoCapture;
- (void)_stopVideoCapture;
- (void)_takePicture;
- (id)initWithInitialImagePickerProperties:(NSDictionary *)arg1;

@end
