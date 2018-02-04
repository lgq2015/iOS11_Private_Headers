/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLFrameBufferTextureLookupInfo : NSObject {
    unsigned int  _attachment;
    struct __CVBuffer { } * _cachedTexture;
    long long  _indexOnAttachment;
    NSString * _name;
    struct __CVBuffer { } * _pixelBuffer;
    unsigned int  _textureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
}

@property (nonatomic) unsigned int attachment;
@property (nonatomic) struct __CVBuffer { }*cachedTexture;
@property (nonatomic) long long indexOnAttachment;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) unsigned int textureName;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } textureSize;

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 name:(id)arg5;

- (unsigned int)attachment;
- (struct __CVBuffer { }*)cachedTexture;
- (void)dealloc;
- (long long)indexOnAttachment;
- (id)initWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 name:(id)arg5;
- (id)name;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setAttachment:(unsigned int)arg1;
- (void)setCachedTexture:(struct __CVBuffer { }*)arg1;
- (void)setIndexOnAttachment:(long long)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (unsigned int)textureName;
- (struct CGSize { double x1; double x2; })textureSize;

@end
