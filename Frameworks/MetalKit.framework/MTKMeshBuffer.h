/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer, MDLNamed> {
    MTKMeshBufferAllocator * _allocator;
    <MTLBuffer> * _buffer;
    unsigned long long  _length;
    unsigned long long  _offset;
    unsigned long long  _type;
    MTKMeshBufferZone * _zone;
}

@property (nonatomic, readonly) MTKMeshBufferAllocator *allocator;
@property (nonatomic, readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long offset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) <MDLMeshBufferZone> *zone;

- (id)_initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;
- (id)_newMap;
- (id)allocator;
- (id)buffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)length;
- (id)map;
- (id)name;
- (unsigned long long)offset;
- (void)setName:(id)arg1;
- (unsigned long long)type;
- (id)zone;

@end
