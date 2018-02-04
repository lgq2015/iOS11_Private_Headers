/* made by EzioChiu.
 */

@protocol VKNavigationCameraController <VKCameraController, VKPuckAnimatorDelegate>

@required

- (VKSceneConfiguration *)sceneConfiguration;
- (VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> *)screenCanvas;
- (void)setSceneConfiguration:(VKSceneConfiguration *)arg1;
- (void)setScreenCanvas:(VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> *)arg1;
- (void)setZoomScale:(double)arg1;
- (void)startWithPounce:(void *)arg1 startLocation:(void *)arg2 startCourse:(void *)arg3 pounceCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: bool, struct { double x1; double x2; }, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)stop;
- (double)zoomScale;

@end
