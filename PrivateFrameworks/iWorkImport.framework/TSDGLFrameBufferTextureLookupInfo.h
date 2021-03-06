/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLFrameBufferTextureLookupInfo : NSObject {
    unsigned int  _attachment;
    long long  _index;
    unsigned int  _name;
}

@property (nonatomic, readonly) unsigned int attachment;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) unsigned int name;

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;

- (unsigned int)attachment;
- (long long)index;
- (id)initWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;
- (unsigned int)name;

@end
