/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalMeshElement : NSObject {
    long long  _effectiveIndexCount;
    long long  _effectiveIndexOffset;
    SCNMTLBuffer * _indexBuffer;
    long long  _indexCount;
    unsigned long long  _indexType;
    unsigned long long  _instanceCount;
    unsigned long long  _primitiveType;
    long long  _sharedIndexBufferOffset;
}

@property (nonatomic, readonly) long long effectiveIndexCount;
@property (nonatomic, readonly) long long effectiveIndexOffset;
@property (nonatomic, retain) SCNMTLBuffer *indexBuffer;
@property (nonatomic) long long indexCount;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic, readonly) long long primitiveCount;
@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) long long sharedIndexBufferOffset;

- (void)dealloc;
- (id)description;
- (long long)effectiveIndexCount;
- (long long)effectiveIndexOffset;
- (id)indexBuffer;
- (long long)indexCount;
- (unsigned long long)indexType;
- (unsigned long long)instanceCount;
- (long long)primitiveCount;
- (unsigned long long)primitiveType;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexCount:(long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setPrimitiveRange:(struct { long long x1; long long x2; })arg1;
- (void)setPrimitiveType:(unsigned long long)arg1;
- (void)setSharedIndexBufferOffset:(long long)arg1;
- (void)setupWithElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)arg1;
- (long long)sharedIndexBufferOffset;

@end
