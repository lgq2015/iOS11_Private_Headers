/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugFragmentRenderCommandEncoder : MTLToolsFragmentRenderCommandEncoder {
    unsigned int  _backStencilRef;
    float  _blendColorAlpha;
    float  _blendColorBlue;
    float  _blendColorGreen;
    float  _blendColorRed;
    MTLDepthStencilDescriptor * _defaultDepthStencilDescriptor;
    struct ResourceTrackingDeferredAttachments { 
        NSMutableArray *colorAttachments; 
        MTLRenderPassDepthAttachmentDescriptorInternal *depthAttachment; 
        MTLRenderPassStencilAttachmentDescriptorInternal *stencilAttachment; 
    }  _deferredAttachments;
    float  _depthBias;
    float  _depthBiasClamp;
    float  _depthBiasSlopeScale;
    <MTLDepthStencilState> * _depthStencilState;
    MTLRenderPassDescriptor * _descriptor;
    unsigned int  _encoderState;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentBuffers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentSamplers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentTextures;
    unsigned int  _frontStencilRef;
    unsigned long long  _height;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; } * _limits;
    <MTLRenderPipelineState> * _renderPipelineState;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _scissorRect;
    unsigned int  _unknownStoreActions;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned int backStencilRef;
@property (nonatomic, readonly) float blendColorAlpha;
@property (nonatomic, readonly) float blendColorBlue;
@property (nonatomic, readonly) float blendColorGreen;
@property (nonatomic, readonly) float blendColorRed;
@property (nonatomic, readonly) MTLDepthStencilDescriptor *defaultDepthStencilDescriptor;
@property (nonatomic, readonly) float depthBias;
@property (nonatomic, readonly) float depthBiasClamp;
@property (nonatomic, readonly) float depthBiasSlopeScale;
@property (nonatomic, readonly) <MTLDepthStencilState> *depthStencilState;
@property (nonatomic, readonly, copy) MTLRenderPassDescriptor *descriptor;
@property (nonatomic, readonly) unsigned int frontStencilRef;
@property (readonly) unsigned long long height;
@property (nonatomic, readonly) <MTLRenderPipelineState> *renderPipelineState;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } scissorRect;
@property (readonly) unsigned long long width;

- (id).cxx_construct;
- (void)_resourceTrackingRecordBoundResourceAccesses;
- (void)_resourceTrackingRecordDrawAccesses;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (unsigned int)backStencilRef;
- (float)blendColorAlpha;
- (float)blendColorBlue;
- (float)blendColorGreen;
- (float)blendColorRed;
- (void)dealloc;
- (id)defaultDepthStencilDescriptor;
- (float)depthBias;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (id)depthStencilState;
- (id)description;
- (id)descriptor;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char *)arg3 triangleCount:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char *)arg5 triangleCount:(unsigned long long)arg6;
- (void)endEncoding;
- (void)enumerateFragmentBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateFragmentSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateFragmentTexturesUsingBlock:(id /* block */)arg1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned int)frontStencilRef;
- (unsigned long long)height;
- (id)initWithFragmentRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (id)renderPipelineState;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })scissorRect;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)validateFramebufferWithRenderPipelineState:(id)arg1;
- (unsigned long long)width;

@end
