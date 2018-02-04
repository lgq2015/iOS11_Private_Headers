/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLFrameBufferTextureConfig : NSObject {
    unsigned int  _GLFormat;
    int  _GLInternalFormat;
    unsigned int  _GLType;
    unsigned int  _attachment;
    bool  _isTextureNameGenerated;
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _textureParameters;
}

@property (nonatomic, readonly) unsigned int GLFormat;
@property (nonatomic, readonly) int GLInternalFormat;
@property (nonatomic, readonly) unsigned int GLType;
@property (nonatomic, readonly) unsigned int attachment;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSArray *textureParameters;

+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 attachment:(unsigned int)arg2 textureParameters:(id)arg3 name:(id)arg4;
+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;
+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2;
+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 textureParameters:(id)arg2 name:(id)arg3;

- (unsigned int)GLFormat;
- (int)GLInternalFormat;
- (unsigned int)GLType;
- (unsigned int)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;
- (id)name;
- (struct CGSize { double x1; double x2; })size;
- (id)textureParameters;

@end
