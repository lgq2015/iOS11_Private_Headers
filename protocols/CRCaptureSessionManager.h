/* made by EzioChiu.
 */

@protocol CRCaptureSessionManager <NSObject>

@required

- (NSString *)cameraMode;
- (long long)cameraPosition;
- (struct CGSize { double x1; double x2; })cameraResolution;
- (<AVCaptureVideoDataOutputSampleBufferDelegate> *)captureSessionDelegate;
- (<AVCaptureMetadataOutputObjectsDelegate> *)captureSessionMetadataDelegate;
- (struct CGPoint { double x1; double x2; })convertCameraPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(CALayer *)arg2;
- (struct CGPoint { double x1; double x2; })convertCameraPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(CALayer *)arg2;
- (struct CGPoint { double x1; double x2; })convertCameraPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(CALayer *)arg2 flipped:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertCameraRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(CALayer *)arg2;
- (NSString *)currentDeviceID;
- (bool)enableMetadataOutput;
- (long long)exposureMode;
- (long long)focusMode;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (void)highISOAdjustExposure;
- (bool)isAdjustingFocus;
- (bool)isFocusPointOfInterestSupported;
- (bool)isPreviewVideoMirrored;
- (bool)isRunning;
- (CALayer *)previewLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewVisibleRect;
- (void)refocusOnPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)refocusOnPoint:(struct CGPoint { double x1; double x2; })arg1 exposure:(bool)arg2;
- (void)resetFocus;
- (void)setCameraMode:(NSString *)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCameraResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setCaptureSessionDelegate:(id <AVCaptureVideoDataOutputSampleBufferDelegate>)arg1;
- (void)setCaptureSessionMetadataDelegate:(id <AVCaptureMetadataOutputObjectsDelegate>)arg1;
- (void)setCurrentDeviceID:(NSString *)arg1;
- (void)setEnableMetadataOutput:(bool)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setPreviewOrientation:(long long)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setupCameraSession;
- (void)startRunning;
- (void)stopRunning;
- (bool)switchToCamera:(long long)arg1;
- (bool)switchToCameraWithDeviceID:(NSString *)arg1;
- (int)targetVideoFormat;
- (void)teardownCameraSession;
- (bool)toggleCamera;
- (long long)torchMode;
- (long long)whiteBalanceMode;

@end
