/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLReduceDepthPass : SCNMTLRenderPass {
    <MTLComputePipelineState> * _initCS;
    <MTLBuffer> * _reduceResult;
    <MTLTexture> * _reduceTmpTexture;
    <MTLComputePipelineState> * _stepCS;
    <MTLComputePipelineState> * _tailCS;
}

- (void)dealloc;
- (void)execute:(id)arg1;
- (void)setup:(id)arg1;

@end
