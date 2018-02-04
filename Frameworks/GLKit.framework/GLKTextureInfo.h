/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureInfo : NSObject <NSCopying> {
    int  alphaState;
    unsigned int  arrayLength;
    bool  containsMipmaps;
    unsigned int  depth;
    unsigned int  height;
    bool  lossyCompressedSource;
    unsigned int  mimapLevelCount;
    unsigned int  name;
    unsigned int  target;
    int  textureOrigin;
    unsigned int  width;
}

@property (readonly) int alphaState;
@property (readonly) unsigned int arrayLength;
@property (readonly) bool containsMipmaps;
@property (readonly) unsigned int depth;
@property (readonly) unsigned int height;
@property (readonly) unsigned int mimapLevelCount;
@property (readonly) unsigned int name;
@property (readonly) unsigned int target;
@property (readonly) int textureOrigin;
@property (readonly) unsigned int width;

- (int)alphaState;
- (unsigned int)arrayLength;
- (bool)containsMipmaps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depth;
- (id)description;
- (unsigned int)height;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (id)initWithTextureTXR:(id)arg1 textureName:(unsigned int)arg2;
- (bool)lossyCompressedSource;
- (unsigned int)mimapLevelCount;
- (unsigned int)name;
- (unsigned int)target;
- (int)textureOrigin;
- (unsigned int)width;

@end
