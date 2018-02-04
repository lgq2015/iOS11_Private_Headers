/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPostProcessPass : NSObject {
    <MTLComputePipelineState> * _adaptativeLuminancePipelineState;
    <MTLBuffer> * _autoExposureParametersBuffer;
    <MTLTexture> * _averageLumTexture;
    <MTLRenderPipelineState> * _bloomBlurPipelineState;
    <MTLTexture> * _bloomTextureA;
    <MTLTexture> * _bloomTextureB;
    <MTLTexture> * _dofBlurTexture;
    <MTLTexture> * _dofCoCTextureA;
    <MTLTexture> * _dofCoCTextureB;
    <MTLTexture> * _dofColorCoCTexture;
    <MTLBuffer> * _dofKernel;
    <MTLComputePipelineState> * _dofPipelineState;
    int  _dofSampleCount;
    <MTLComputePipelineState> * _downSampleBloomDOFPipelineState;
    <MTLComputePipelineState> * _fixedLuminancePipelineState;
    unsigned long long  _frameBufferFormat;
    unsigned long long  _frameBufferHeight;
    unsigned long long  _frameBufferWidth;
    unsigned int  _frameIndex;
    <MTLTexture> * _frameLumTexture;
    <MTLComputePipelineState> * _frameLuminanceCS;
    <MTLRenderPipelineState> * _frameLuminancePipelineState;
    <MTLBuffer> * _framebufferHistogramBuffer;
    <MTLComputePipelineState> * _histogramAdaptativeLuminancePipelineState;
    <MTLComputePipelineState> * _histogramAnalyserPipelineState;
    <MTLBuffer> * _histogramAnalysisBuffer;
    MPSImageHistogram * _histogramBuilder;
    <MTLComputePipelineState> * _histogramImmediateLuminancePipelineState;
    <MTLBuffer> * _luminanceHistogramBuffer;
    <MTLRenderPipelineState> * _mbBlurPipelineState;
    <MTLTexture> * _mbColor;
    <MTLTexture> * _mbNeighborMax;
    <MTLTexture> * _mbTexture;
    <MTLTexture> * _mbTileMax;
    <MTLComputePipelineState> * _mbVelocityPipelineState;
    unsigned long long  _postProcessConstants;
    <MTLRenderPipelineState> * _postProcessPipelineState;
    float  _scaleFactor;
    <MTLComputePipelineState> * _slidingLuminancePipelineState;
}

- (unsigned int)_computeBloomBlurUniforms:(void *)arg1 textureSize:(void *)arg2 radius:(void *)arg3 horizontal:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[16]; }*, float, bool
- (void)_computeDofUniforms:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; unsigned int x20; unsigned int x21; float x22; int x23; float x24; float x25; }*)arg1 camera:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)arg2;
- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 postProcessConstants:(unsigned long long)arg3;
- (void)dealloc;
- (void)executeWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;
- (void)setupWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;

@end
