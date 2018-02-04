/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {
    MTLToolsPointerArray * _blitCommandEncoders;
    MTLToolsPointerArray * _computeCommandEncoders;
    struct { 
        unsigned int hasCommit : 1; 
        unsigned int addedCompletedHandler : 1; 
        unsigned int addedScheduledHandler : 1; 
        unsigned int padding : 29; 
    }  _flags;
    MTLToolsPointerArray * _fragmentRenderCommandEncoders;
    MTLToolsPointerArray * _parallelRenderCommandEncoders;
    MTLToolsPointerArray * _renderCommandEncoders;
    NSMutableSet * _retainedObjects;
    struct ILayerLockingPolicy { int (**x1)(); } * _retainedObjectsLock;
}

@property (readonly) double GPUEndTime;
@property (readonly) double GPUStartTime;
@property (nonatomic, readonly) MTLToolsPointerArray *blitCommandEncoders;
@property (readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) MTLToolsPointerArray *computeCommandEncoders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSError *error;
@property (nonatomic, readonly) MTLToolsPointerArray *fragmentRenderCommandEncoders;
@property (readonly) unsigned long long hash;
@property (readonly) double kernelEndTime;
@property (readonly) double kernelStartTime;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic) unsigned long long listIndex;
@property (nonatomic, readonly) MTLToolsPointerArray *parallelRenderCommandEncoders;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) MTLToolsPointerArray *renderCommandEncoders;
@property (nonatomic, readonly) NSMutableSet *retainedObjects;
@property (nonatomic) struct ILayerLockingPolicy { int (**x1)(); }*retainedObjectsLock;
@property (readonly) bool retainedReferences;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

- (double)GPUEndTime;
- (double)GPUStartTime;
- (void)acceptVisitor:(id)arg1;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)addRetainedObject:(id)arg1;
- (void)addScheduledHandler:(id /* block */)arg1;
- (id)blitCommandEncoder;
- (id)blitCommandEncoders;
- (void)clearRetainedObjects;
- (id)commandQueue;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithParallelExecution;
- (id)computeCommandEncoders;
- (void)dealloc;
- (id)debugCommandEncoder;
- (void)enqueue;
- (id)error;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)fragmentRenderCommandEncoders;
- (unsigned long long)getListIndex;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (bool)isProfilingEnabled;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (id)label;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)parallelRenderCommandEncoders;
- (void)popDebugGroup;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)profilingResults;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoders;
- (id)retainedObjects;
- (struct ILayerLockingPolicy { int (**x1)(); }*)retainedObjectsLock;
- (bool)retainedReferences;
- (id)sampledComputeCommandEncoderWithParallelExecutionWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setRetainedObjectsLock:(struct ILayerLockingPolicy { int (**x1)(); }*)arg1;
- (unsigned long long)status;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (id)userDictionary;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
