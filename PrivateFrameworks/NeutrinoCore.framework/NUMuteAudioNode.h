/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMuteAudioNode : NURenderNode

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)initWithInput:(id)arg1;
- (bool)requiresAudioMix;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
