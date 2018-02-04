/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSSAOPass : NSObject {
    <MTLRenderPipelineState> * _aoPipelineState;
    SCNRenderTarget * _aoRenderTarget;
    <MTLTexture> * _aoTexture;
    <MTLComputePipelineState> * _blurXPipelineState;
    <MTLComputePipelineState> * _blurYPipelineState;
    <MTLTexture> * _depthMinMaxOffsetTexture;
    unsigned long long  _downsample;
    <MTLComputePipelineState> * _downsamplePipelineState;
    unsigned long long  _frameBufferFormat;
    unsigned long long  _frameBufferHeight;
    unsigned long long  _frameBufferWidth;
    unsigned long long  _sampleCount;
    struct { 
        float projScale; 
        float radius; 
        float radius2; 
        float bias; 
        float intensity; 
        float depthThreshold; 
        float normalThreshold; 
        float zMax; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*projectionInfo; 
    }  _uniforms;
    <MTLComputePipelineState> * _upsamplingPipelineState;
}

- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 camera:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)arg3;
- (void)dealloc;
- (void)executeWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;
- (void)setupWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;

@end
