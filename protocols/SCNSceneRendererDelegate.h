/* made by EzioChiu.
 */

@protocol SCNSceneRendererDelegate <NSObject>

@optional

- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;

@end
