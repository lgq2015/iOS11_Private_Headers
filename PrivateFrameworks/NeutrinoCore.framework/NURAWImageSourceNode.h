/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURAWImageSourceNode : NUCGImageSourceNode {
    NSCache * _propertiesByOptionCache;
}

- (void).cxx_destruct;
- (id)_RAWCameraSpaceProperties:(id)arg1 RAWProperties:(id)arg2;
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;
- (id)_appendFilter:(id)arg1 filterType:(int)arg2 settings:(id)arg3 source:(id)arg4;
- (id)_cachedRawImagePropertiesForOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (int)_filterTypeForClassName:(id)arg1;
- (id)_neutralColorArrayForSettings:(id)arg1;
- (id)_neutralColorVectorForSettings:(id)arg1;
- (void)_processRAWProperties:(id)arg1;
- (id)_rawMethodVersionForSettings:(id)arg1 error:(out id*)arg2;
- (id)_sourceOptionsForSettings:(id)arg1 rawMethodVersion:(id)arg2 sushiLevel:(id)arg3;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 identifier:(id)arg2;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (bool)load:(out id*)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2;

@end
