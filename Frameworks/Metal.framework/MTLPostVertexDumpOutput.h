/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLPostVertexDumpOutput : NSObject {
    NSString * _airMDType;
    unsigned long long  _aluType;
    unsigned long long  _dataType;
    NSString * _name;
    unsigned long long  _offset;
    unsigned long long  _pixelFormat;
}

@property (readonly) NSString *airMDType;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long dataType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long pixelFormat;

- (id)airMDType;
- (unsigned long long)aluType;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6;
- (id)name;
- (unsigned long long)offset;
- (unsigned long long)pixelFormat;

@end