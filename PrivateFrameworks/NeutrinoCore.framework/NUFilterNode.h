/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFilterNode : NURenderNode {
    NSString * _filterName;
}

@property (readonly) NSString *filterName;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)descriptionSubClassHook;
- (id)filterName;
- (unsigned long long)hash;
- (id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary { Class x1; }*)arg3;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary { Class x1; }*)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (bool)isEqualToRenderNode:(id)arg1;
- (bool)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)nu_updateDigest:(id)arg1;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
