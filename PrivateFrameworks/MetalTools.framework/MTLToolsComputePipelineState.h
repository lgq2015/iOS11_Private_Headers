/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {
    <MTLFunction> * _function;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadExecutionWidth;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)staticThreadgroupMemoryLength;
- (unsigned long long)threadExecutionWidth;

@end
