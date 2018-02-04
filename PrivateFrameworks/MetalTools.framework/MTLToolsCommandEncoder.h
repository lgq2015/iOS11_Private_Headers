/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {
    MTLToolsCommandBuffer * _commandBuffer;
}

@property (nonatomic, readonly) MTLToolsCommandBuffer *commandBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)addRetainedObject:(id)arg1;
- (id)commandBuffer;
- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setGlobalTraceObjectID:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;

@end
