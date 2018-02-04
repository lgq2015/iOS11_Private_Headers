/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLVertexAttribute : NSObject <NSCopying> {
    unsigned long long  _bufferIndex;
    unsigned long long  _format;
    void _initializationValue;
    NSString * _name;
    unsigned long long  _offset;
    double  _time;
}

@property (nonatomic) unsigned long long bufferIndex;
@property (nonatomic) unsigned long long format;
@property (nonatomic) void initializationValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (unsigned long long)bufferIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)format;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4;
- (void)initializationValue;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setInitializationValue;
- (void)setName:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
