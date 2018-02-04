/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface VideoRelightingMetal : NSObject {
    <MTLTexture> * _alphaTexture;
    float  _backgroundColor;
    <MTLTexture> * _blurLightTexture;
    <MTLTexture> * _boundaryTexture;
    UIColor * _clearColor;
    <MTLCommandQueue> * _commandQueue;
    int  _computeHeight;
    int  _computeWidth;
    <MTLTexture> * _countTexture;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _directLightTexture;
    int  _displayHeight;
    int  _displayMode;
    int  _displayWidth;
    <MTLTexture> * _dstTexture;
    <MTLTexture> * _dstUVTexture;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _edgeIndex;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _edgeKernel;
    int  _edgeKernelSize;
    <MTLTexture> * _edgeTexture;
    void _faceCenter;
    bool  _faceDetected;
    float  _faceImageCenterX;
    float  _faceImageCenterY;
    MTLRenderPassDescriptor * _faceRenderDesc1;
    MTLRenderPassDescriptor * _faceRenderDesc2;
    MTLRenderPassDescriptor * _faceRenderDesc3;
    <MTLTexture> * _facemaskRegionTexture;
    <MTLFunction> * _function_fragment_Light;
    <MTLFunction> * _function_fragment_face;
    <MTLFunction> * _function_vertex_Depth;
    <MTLFunction> * _function_vertex_Light;
    <MTLFunction> * _function_vertex_face;
    double  _gpuEndTime;
    double  _gpuStartTime;
    <MTLBuffer> * _indexBuffer;
    NSObject<OS_dispatch_semaphore> * _inflightSemaphore;
    <MTLComputePipelineState> * _kernel_Boundary;
    <MTLComputePipelineState> * _kernel_Clear;
    <MTLComputePipelineState> * _kernel_Count;
    <MTLComputePipelineState> * _kernel_CountVertical;
    <MTLRenderPipelineState> * _kernel_Depth;
    <MTLComputePipelineState> * _kernel_Edge;
    <MTLComputePipelineState> * _kernel_EdgeVertical;
    <MTLComputePipelineState> * _kernel_Edge_Count;
    <MTLRenderPipelineState> * _kernel_Face;
    <MTLRenderPipelineState> * _kernel_Light;
    <MTLComputePipelineState> * _kernel_Relight;
    <MTLComputePipelineState> * _kernel_Slide;
    <MTLComputePipelineState> * _kernel_SmoothSlide;
    <MTLComputePipelineState> * _kernel_SmoothVertSlide;
    <MTLComputePipelineState> * _kernel_UpScale;
    <MTLComputePipelineState> * _kernel_VertEdge_VertCount;
    <MTLLibrary> * _library;
    <MTLBuffer> * _lightBuffer;
    <MTLTexture> * _lightDepthTexture;
    MTLRenderPassDescriptor * _lightRenderDesc;
    <MTLTexture> * _lightTexture;
    struct array<Light, 5> { 
        struct Light { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
        } __elems_[5]; 
    }  _lights;
    bool  _markFaceCenter;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__first_; 
        } __end_cap_; 
    }  _modelIndices;
    struct vector<Vertex, std::__1::allocator<Vertex> > { 
        struct Vertex {} *__begin_; 
        struct Vertex {} *__end_; 
        struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { 
            struct Vertex {} *__first_; 
        } __end_cap_; 
    }  _modelVertices;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewProjectionMatrix;
    bool  _overlayModel;
    int  _relightingCondition;
    <MTLTexture> * _relightingMapTexture;
    int  _renderHeight;
    int  _renderWidth;
    <MTLSamplerState> * _sampler;
    <MTLTexture> * _scaledLightTexture;
    <MTLTexture> * _shadowDepthTexture3;
    <MTLTexture> * _shadowDepthTexture4;
    MTLRenderPassDescriptor * _shadowRenderDesc3;
    MTLRenderPassDescriptor * _shadowRenderDesc4;
    bool  _skipAlpha;
    <MTLTexture> * _slideTexture;
    MPSImageGaussianBlur * _smoothFilter;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _smoothIndex;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _smoothKernel;
    int  _smoothKernelSize;
    <MTLTexture> * _smoothSlideTexture;
    <MTLTexture> * _smoothVertSlideTexture;
    <MTLTexture> * _srcTexture;
    NSObject<OS_dispatch_queue> * _synchronousRelightingCallbackQueue;
    <MTLBuffer> * _uniformBuffer_count;
    <MTLBuffer> * _uniformBuffer_edge;
    <MTLBuffer> * _uniformBuffer_light;
    <MTLBuffer> * _uniformBuffer_relight;
    <MTLBuffer> * _uniformBuffer_render;
    <MTLBuffer> * _uniformBuffer_shadow3;
    <MTLBuffer> * _uniformBuffer_shadow4;
    <MTLBuffer> * _uniformBuffer_slide;
    <MTLBuffer> * _uniformBuffer_smoothSlide;
    <MTLBuffer> * _uniformBuffer_smoothVertSlide;
    <MTLBuffer> * _uniformBuffer_vertCount;
    <MTLBuffer> * _uniformBuffer_vertEdge;
    <MTLTexture> * _vertCountTexture;
    <MTLTexture> * _vertEdgeTexture;
    <MTLBuffer> * _vertexBuffer;
    float  _weightContrast;
}

@property (readonly) double gpuEndTime;
@property (readonly) double gpuStartTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureRenderPipeline;
- (void)createComputeTexturesWith:(unsigned long long)arg1 Height:(unsigned long long)arg2;
- (void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2;
- (void)enableLightKernelToCommandBuffer:(id)arg1;
- (void)enableShadowKernelToCommandBuffer:(id)arg1;
- (void)encodeBoundaryKernelToCommandBuffer:(id)arg1;
- (void)encodeClearDstKernelToCommandBuffer:(id)arg1;
- (void)encodeComputeKernelsToCommandBuffer:(id)arg1;
- (void)encodeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeEdgeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeEdgeKernelToCommandBuffer:(id)arg1;
- (void)encodeFaceKernelToCommandBuffer:(id)arg1 descriptor:(id)arg2 modelViewProjectionMatrix:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 inVertexBuffer:(id)arg4 inIndexBuffer:(id)arg5 outFacemask:(id)arg6 flag:(int)arg7;
- (void)encodeFaceMaskToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 outputDisparity:(id)arg3 outputFaceMask:(id)arg4 faceModel:(id)arg5 colorWidth:(int)arg6 colorHeight:(int)arg7 focusDisparity:(float)arg8 backgroundDisparity:(float)arg9 colorImage:(struct __CVBuffer { }*)arg10;
- (void)encodeRelightKernelToCommandBuffer:(id)arg1;
- (void)encodeShiftKernelToCommandBuffer:(id)arg1 width:(int)arg2 height:(int)arg3 inDisparity:(id)arg4 inFacemask:(id)arg5 outDisparity:(id)arg6 focusDisparity:(float)arg7 backgroundDisparity:(float)arg8;
- (void)encodeSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeSmoothSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeSmoothVertSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeUpscaleLightKernelToCommandBuffer:(id)arg1;
- (void)encodeVertCountKernelToCommandBuffer:(id)arg1;
- (void)encodeVertEdgeKernelToCommandBuffer:(id)arg1;
- (void)encodeVertEdgeVertCountKernelToCommandBuffer:(id)arg1;
- (void)generateModelNormals;
- (id)getEdgeTexture;
- (id)getSmoothSlideTexture;
- (id)getVertEdgeTexture;
- (double)gpuEndTime;
- (double)gpuStartTime;
- (id)init;
- (void)initKernelFunctions;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4;
- (void)saveComputeTextures:(bool)arg1;
- (void)saveTexture:(id)arg1 toHalf:(id)arg2;
- (void)saveTexture:(id)arg1 toImage:(id)arg2;
- (void)saveTexture:(id)arg1 toRaw:(id)arg2;
- (void)setLights;
- (void)setModelwithDict:(id)arg1 pose:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2 camera:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3;
- (void)setModelwithVertices:(float*)arg1 nVertices:(int)arg2 normals:(float*)arg3 nNormals:(int)arg4 triIndex:(int*)arg5 nTriIndex:(int)arg6 quadIndex:(int*)arg7 nQuadIndex:(int)arg8;
- (id)textureForImage:(id)arg1;
- (void)updateMatrixwithWidth:(int)arg1 height:(int)arg2 camera:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3 pose:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg4;
- (void)updateUniforms;
- (void)updateWithLight:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 dstImage:(struct __CVBuffer { }*)arg3 faceDetected:(bool)arg4 faceModel:(id)arg5 displayMode:(int)arg6 markFaceCenter:(bool)arg7 skipAlpha:(bool)arg8 overlayModel:(bool)arg9 relightingCondition:(int)arg10 callback:(id /* block */)arg11;
- (void)updateWithLight:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 dstImage:(struct __CVBuffer { }*)arg3 light:(id)arg4 faceDetected:(bool)arg5 faceImageCenterX:(float)arg6 faceImageCenterY:(float)arg7 displayMode:(int)arg8 markFaceCenter:(bool)arg9 callback:(id /* block */)arg10;
- (void)updateWithLight:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 dstImage:(struct __CVBuffer { }*)arg3 light:(id)arg4 faceDetected:(bool)arg5 vertices:(float*)arg6 nVertices:(int)arg7 normals:(float*)arg8 nNormals:(int)arg9 triIndex:(int*)arg10 nTriIndex:(int)arg11 quadIndex:(int*)arg12 nQuadIndex:(int)arg13 pose:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg14 camera:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg15 displayMode:(int)arg16 markFaceCenter:(bool)arg17 callback:(id /* block */)arg18;

@end
