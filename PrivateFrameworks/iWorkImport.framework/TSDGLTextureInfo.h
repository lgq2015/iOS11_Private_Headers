/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLTextureInfo : NSObject {
    bool  _containsMipmaps;
    unsigned int  _height;
    unsigned int  _name;
    unsigned int  _target;
    unsigned int  _width;
}

@property (nonatomic, readonly) bool containsMipmaps;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) unsigned int name;
@property (nonatomic, readonly) unsigned int target;
@property (nonatomic, readonly) unsigned int width;

- (bool)containsMipmaps;
- (unsigned int)height;
- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(bool)arg5;
- (unsigned int)name;
- (unsigned int)target;
- (void)teardown;
- (unsigned int)width;

@end
