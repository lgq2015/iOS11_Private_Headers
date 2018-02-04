/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSubmesh : NSObject <MDLNamed> {
    NSArray * _faceIndexing;
    long long  _geometryType;
    <MDLMeshBuffer> * _indexBuffer;
    unsigned long long  _indexCount;
    unsigned long long  _indexType;
    MDLMaterial * _material;
    NSString * _name;
    MDLSubmeshTopology * _topology;
}

@property (nonatomic, retain) NSArray *faceIndexing;
@property (nonatomic, readonly) long long geometryType;
@property (nonatomic, readonly, retain) <MDLMeshBuffer> *indexBuffer;
@property (nonatomic, readonly) unsigned long long indexCount;
@property (nonatomic, readonly) unsigned long long indexType;
@property (nonatomic, retain) MDLMaterial *material;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) MDLSubmeshTopology *topology;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (struct MDLAABB { })boundingBoxForMesh:(id)arg1;
- (void)debugPrintToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)faceIndexing;
- (long long)geometryType;
- (id)indexBuffer;
- (id)indexBufferAsIndexType:(unsigned long long)arg1;
- (unsigned long long)indexCount;
- (unsigned long long)indexType;
- (id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 geometryType:(long long)arg4 material:(id)arg5;
- (id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned long long)arg2 geometryType:(long long)arg3;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 faceIndexing:(id)arg5 geometryType:(long long)arg6 material:(id)arg7 topology:(id)arg8;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 topology:(id)arg7;
- (id)material;
- (id)name;
- (void)setFaceIndexing:(id)arg1;
- (void)setMaterial:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTopology:(id)arg1;
- (id)topology;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)newSubmeshWithGeometryData:(id)arg1 indexBufferLength:(unsigned long long)arg2 interleaved:(bool)arg3 channelCount:(unsigned long long)arg4 channelIdx:(unsigned long long)arg5 bytesPerIndex:(unsigned long long)arg6 indexType:(unsigned long long)arg7 geometryType:(long long)arg8 allocator:(id)arg9 indexCount:(unsigned long long)arg10 topology:(id)arg11;
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;
+ (id)submeshWithSCNGeometryElement:(id)arg1;
+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;
+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;

@end