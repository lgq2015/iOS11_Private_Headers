/* made by EzioChiu.
 */

@protocol SCNEventHandler <SCNCameraControlConfiguration>

@required

- (void)activateFreeCamera;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (bool)enableFreeCamera;
- (bool)enabled;
- (SCNNode *)freeCamera;
- (NSArray *)gestureRecognizers;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setEnableFreeCamera:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setView:(SCNView *)arg1;
- (SCNView *)view;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (bool)wantsRedraw;

@end
