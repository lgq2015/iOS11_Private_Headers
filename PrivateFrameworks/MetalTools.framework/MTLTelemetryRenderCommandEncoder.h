/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    unsigned int  _reDraws;
    MTLTelemetryCommandBuffer * _telemetryCommandBuffer;
    MTLTelemetryDevice * _telemetryDevice;
}

- (void)accumDrawWithType:(unsigned long long)arg1 indexType:(unsigned long long)arg2 primitiveType:(unsigned long long)arg3 vertexCount:(unsigned long long)arg4 instanceCount:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)endEncoding;
- (void)initTelemetryWithDescriptor:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 commandBuffer:(id)arg3 descriptor:(id)arg4;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1;

@end
