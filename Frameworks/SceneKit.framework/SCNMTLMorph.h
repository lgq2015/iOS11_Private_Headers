/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLMorph : NSObject {
    <MTLBuffer> * _baseBuffer;
    unsigned int  _baseBufferStride;
    short  _baseBufferTypes;
    unsigned int  _baseBufferTypesCount;
    unsigned int  _baseVertexCount;
    <MTLComputePipelineState> * _blendCPS;
    <MTLComputePipelineState> * _blendSparseCPS;
    <MTLComputePipelineState> * _copyCPS;
    unsigned char  _dataKindForMorphing;
    unsigned int  _dstSemanticUsageMask;
    NSArray * _originalTargets;
    struct { 
        <MTLBuffer> *perVertexTrianglesOffsets; 
        <MTLBuffer> *perVertexTrianglesIndices; 
        bool sharedTriangleIs16Bits; 
    }  _postUnifyInfo;
    bool  _shouldMorphNormals;
    <MTLComputePipelineState> * _splatCPS;
    <MTLBuffer> * _splatProvokingVertices;
    unsigned int  _srcSemanticUsageMask;
    unsigned int  _targetBufferStride;
    short  _targetBufferTypes;
    unsigned int  _targetBufferTypesCount;
    unsigned long long  _targetCount;
    struct Target { id x1; float x2; struct __C3DMeshSource {} *x3[3]; id x4; } * _targets;
    bool  _unifyPostMorphNormals;
}

- (void)_prepareTargetDataForIndex:(long long)arg1 morph:(struct __C3DMorph { }*)arg2 baseMesh:(struct __C3DMesh { }*)arg3;
- (void)_writeSources:(const struct __C3DMeshSource {}**)arg1 dstTypes:(short*)arg2 sourcesCount:(unsigned int)arg3 inBuffer:(void*)arg4 stride:(unsigned int)arg5 length:(unsigned long long)arg6 sparse:(bool)arg7 positionScale:(float)arg8;
- (void)dealloc;
- (id)initWithMorph:(struct __C3DMorph { }*)arg1 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2 resourceManager:(id)arg3;
- (bool)isCompatibleWithMorph:(struct __C3DMorph { }*)arg1;
- (void)morphIncrementalMesh:(id)arg1 morpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; }*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4;
- (void)morphMesh:(id)arg1 morph:(struct __C3DMorph { }*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4;
- (void)morphOptimizedMesh:(id)arg1 morph:(struct __C3DMorph { }*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4;
- (void)morphSparseMesh:(id)arg1 morpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; }*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4;
- (unsigned int)sparseIndexSize;
- (void)unifyMesh:(id)arg1 computeEncoder:(id)arg2 resourceManager:(id)arg3;

@end
