/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer> {
    GLKMeshBufferAllocator * _allocator;
    unsigned int  _glBufferName;
    unsigned long long  _length;
    unsigned int  _mapCount;
    void * _mapPtr;
    unsigned long long  _offset;
    unsigned int  _target;
    unsigned long long  _type;
    GLKMeshBufferZone * _zone;
}

@property (nonatomic, readonly) GLKMeshBufferAllocator *allocator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long offset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) <MDLMeshBufferZone> *zone;

- (void).cxx_destruct;
- (id)_initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;
- (id)allocator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned int)glBufferName;
- (unsigned long long)length;
- (id)map;
- (unsigned long long)offset;
- (unsigned long long)type;
- (id)zone;

@end
