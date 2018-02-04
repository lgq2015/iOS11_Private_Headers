/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLFrameBuffer : NSObject {
    long long  _currentBindingOption;
    int  _currentDrawBufferCount;
    unsigned int  _currentDrawBuffers;
    unsigned int  _currentReadBuffer;
    NSMutableArray * _currentTextureLookupInfoByAttachment;
    NSMutableArray * _desiredTextureLookupInfoByAttachment;
    unsigned int  _framebuffer;
    bool  _isBound;
    bool  _isUsingNonDefaultAttachments;
    NSString * _name;
    NSDictionary * _namesToTextureDict;
    bool  _shouldDeleteTexturesOnTeardown;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct __CVOpenGLESTextureCache { } * _textureCache;
    NSArray * _textureConfigs;
    NSArray * _textureConfigsByAttachment;
    NSArray * _textureLookupInfosByAttachment;
}

@property (nonatomic, readonly) bool isBound;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool shouldDeleteTexturesOnTeardown;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (int)currentGLFramebuffer;
+ (int)currentGLFramebufferWithBindingOption:(long long)arg1;
+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;

- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (unsigned int)GLTextureNamed:(id)arg1;
- (void)bindFramebuffer;
- (void)bindFramebufferWithBindingOption:(long long)arg1;
- (struct __CVBuffer { }*)createTextureCacheTextureWithSize:(struct CGSize { double x1; double x2; })arg1 pixelBufferOut:(struct __CVBuffer {}**)arg2;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (long long)currentTextureIndexAtAttachment:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (int)glFramebuffer;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 textureConfigs:(id)arg2 textureCache:(struct __CVOpenGLESTextureCache { }*)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 textureCount:(unsigned long long)arg2;
- (bool)isBound;
- (id)name;
- (bool)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int*)arg1 count:(long long)arg2;
- (void)p_setDrawBuffersAndReadBuffer;
- (void)p_setFramebufferTextureAtAttachmentIndex:(long long)arg1 bindingOption:(long long)arg2;
- (struct __CVBuffer { }*)pixelBufferAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTexturesToNext;
- (void)setName:(id)arg1;
- (void)setShouldDeleteTexturesOnTeardown:(bool)arg1;
- (void)setupFramebufferIfNecessary;
- (bool)shouldDeleteTexturesOnTeardown;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeOfGLTextureNamed:(id)arg1;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;

@end
