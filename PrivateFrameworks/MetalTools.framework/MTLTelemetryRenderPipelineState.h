/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {
    MTLTelemetryDevice * device;
    unsigned int  uniqueID;
}

+ (unsigned int)generateUniqueID;

- (void)accumulateUsage;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
