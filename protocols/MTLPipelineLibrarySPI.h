/* made by EzioChiu.
 */

@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>

@required

- (<MTLDevice> *)device;
- (<MTLPipelineCache> *)functionCache;
- (NSString *)label;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithName:(NSString *)arg1 error:(id*)arg2;
- (<MTLComputePipelineState> *)newComputePipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithName:(NSString *)arg1 error:(id*)arg2;
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (<MTLPipelineCache> *)pipelineCache;
- (NSArray *)pipelineNames;
- (void)setLabel:(NSString *)arg1;

@end
