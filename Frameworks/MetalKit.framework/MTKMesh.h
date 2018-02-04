/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKMesh : NSObject {
    NSString * _name;
    NSMutableArray * _submeshes;
    NSMutableArray * _vertexBuffers;
    unsigned long long  _vertexCount;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *submeshes;
@property (nonatomic, readonly) NSArray *vertexBuffers;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) MDLVertexDescriptor *vertexDescriptor;

+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id*)arg5;
+ (id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (id)submeshes;
- (id)vertexBuffers;
- (unsigned long long)vertexCount;
- (id)vertexDescriptor;

@end
