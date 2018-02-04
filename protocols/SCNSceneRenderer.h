/* made by EzioChiu.
 */

@protocol SCNSceneRenderer <NSObject>

@required

- (AVAudioEngine *)audioEngine;
- (AVAudioEnvironmentNode *)audioEnvironmentNode;
- (SCNNode *)audioListener;
- (bool)autoenablesDefaultLighting;
- (unsigned long long)colorPixelFormat;
- (<MTLCommandQueue> *)commandQueue;
- (void*)context;
- (<MTLRenderCommandEncoder> *)currentRenderCommandEncoder;
- (unsigned long long)debugOptions;
- (<SCNSceneRendererDelegate> *)delegate;
- (unsigned long long)depthPixelFormat;
- (<MTLDevice> *)device;
- (NSArray *)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(NSDictionary *)arg2;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (bool)isPlaying;
- (bool)loops;
- (NSArray *)nodesInsideFrustumWithPointOfView:(SCNNode *)arg1;
- (SKScene *)overlaySKScene;
- (SCNNode *)pointOfView;
- (bool)prepareObject:(void *)arg1 shouldAbortBlock:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)prepareObjects:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentScene:(void *)arg1 withTransition:(void *)arg2 incomingPointOfView:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: SCNScene *, SKTransition *, SCNNode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (unsigned long long)renderingAPI;
- (SCNScene *)scene;
- (double)sceneTime;
- (void)setAudioListener:(SCNNode *)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id <SCNSceneRendererDelegate>)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setOverlaySKScene:(SKScene *)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfView:(SCNNode *)arg1;
- (void)setScene:(SCNScene *)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (bool)showsStatistics;
- (unsigned long long)stencilPixelFormat;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;

@end
