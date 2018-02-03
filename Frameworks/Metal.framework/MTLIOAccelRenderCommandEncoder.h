/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelRenderCommandEncoder : MTLIOAccelCommandEncoder

- (void)bindEmulationArguments;
- (void*)getFragmentBufferContentsAtIndex:(unsigned long long)arg1;
- (id)getRenderPipelineState;
- (unsigned long long)getType;
- (void*)getVertexBufferContentsAtIndex:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;
- (bool)isMemorylessRender;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthCleared;
- (void)setDepthClipModeSPI:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setEmulationFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setEmulationFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setEmulationFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setEmulationVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setEmulationVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setEmulationVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStencilCleared;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)textureBarrier;
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;

@end