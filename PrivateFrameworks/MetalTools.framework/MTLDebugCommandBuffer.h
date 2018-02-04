/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {
    NSMutableSet * _buffersBoundForWrite;
    _MTLCommandEncoder * _currentEncoder;
}

@property (nonatomic, readonly) NSMutableSet *buffersBoundForWrite;

- (id)blitCommandEncoder;
- (id)buffersBoundForWrite;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithParallelExecution;
- (void)dealloc;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithParallelExecutionWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
