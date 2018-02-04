/* made by EzioChiu.
 */

@protocol VKCameraControllerDelegate <NSObject>

@required

- (void)cameraController:(VKCameraController *)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomInDidChange:(bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeWillChange:(int)arg2;
- (<VKTrackableAnnotationPresentation> *)cameraController:(VKCameraController *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)cameraController:(VKCameraController *)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraController:(VKCameraController *)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(VKCameraController *)arg1;
- (void)cameraControllerDidLeaveDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerDidReturnToDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerHasStartedPanning:(VKCameraController *)arg1;
- (void)cameraControllerHasStoppedPanning:(VKCameraController *)arg1;
- (void)cameraControllerRequestsLayout:(VKCameraController *)arg1;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(VKCameraController *)arg1;
- (void)runAnimation:(VKAnimation *)arg1;

@end
