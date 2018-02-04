/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {
    <MDLMeshBufferAllocator> * _allocator;
    NSMutableData * _data;
    unsigned long long  _length;
    NSString * _name;
    unsigned long long  _type;
    MDLMeshBufferZoneDefault * _zone;
    MDLMeshBufferZoneDefault * _zoneDefault;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, retain) <MDLMeshBufferZone> *zone;

- (void).cxx_destruct;
- (id)allocator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;
- (id)map;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)type;
- (id)zone;

@end
