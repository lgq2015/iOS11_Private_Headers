/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneClassificationRequest : VNImageBasedRequest {
    VNSceneObservation * _sceneObservation;
}

@property (nonatomic, readonly, retain) VNSceneObservation *sceneObservation;

+ (id)knownSceneClassifications;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithSceneObservation:(id)arg1;
- (id)initWithSceneObservation:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)sceneObservation;
- (void)setSceneObservation:(id)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
