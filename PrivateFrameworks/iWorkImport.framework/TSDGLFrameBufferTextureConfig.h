/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLFrameBufferTextureConfig : NSObject {
    unsigned int  _GLFormat;
    int  _GLInternalFormat;
    unsigned int  _GLType;
    unsigned int  _attachment;
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
@property (nonatomic) unsigned int attachment;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSArray *textureParameters;

+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 name:(id)arg6;
+ (id)textureConfigWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2;

- (unsigned int)GLFormat;
- (int)GLInternalFormat;
- (unsigned int)GLType;
- (unsigned int)attachment;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 name:(id)arg6;
- (id)name;
- (void)setAttachment:(unsigned int)arg1;
- (void)setTextureParameters:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)textureParameters;

@end
