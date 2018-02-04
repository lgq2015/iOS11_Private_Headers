/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureTXR : NSObject {
    unsigned long long  _API;
    unsigned int  _GLTextureName;
    unsigned int  _arrayLength;
    unsigned int  _depth;
    bool  _hasAlpha;
    unsigned int  _height;
    NSString * _label;
    unsigned int  _loadTarget;
    bool  _lossyCompressedSource;
    unsigned int  _mipmapLevelCount;
    unsigned int  _target;
    TXRTexture * _texture;
    unsigned int  _width;
}

@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) unsigned int depth;
@property (nonatomic) bool hasAlpha;
@property (nonatomic) unsigned int height;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool lossyCompressedSource;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int width;

- (unsigned int)GLTextureName;
- (unsigned int)arrayLength;
- (void)dealloc;
- (unsigned int)depth;
- (bool)hasAlpha;
- (unsigned int)height;
- (id)initWithTexture:(id)arg1 API:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)label;
- (bool)lossyCompressedSource;
- (unsigned int)mipmapLevelCount;
- (void)setArrayLength:(unsigned int)arg1;
- (void)setDepth:(unsigned int)arg1;
- (void)setGLTextureName:(unsigned int)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLossyCompressedSource:(bool)arg1;
- (void)setMipmapLevelCount:(unsigned int)arg1;
- (void)setTarget:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)target;
- (bool)uploadToGLTexture:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)width;

@end
