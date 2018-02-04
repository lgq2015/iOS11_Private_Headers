/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface FxTexture : FxImage <NSCopying> {
    struct FxTexturePriv { unsigned int x1; unsigned int x2; bool x3; } * _texturePriv;
}

- (bool)_verifyImage;
- (void)bind;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createData:(unsigned int)arg1 withType:(unsigned int)arg2;
- (void)dealloc;
- (void)disable;
- (void)draw;
- (void)enable;
- (void)getTextureCoords:(double*)arg1 right:(double*)arg2 bottom:(double*)arg3 top:(double*)arg4;
- (id)init;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1 textureId:(unsigned int)arg2 andTarget:(unsigned int)arg3;
- (bool)isInputImage;
- (void)setAsActiveTexture;
- (void)setData:(void*)arg1;
- (void)setIsInputImage:(bool)arg1;
- (void)setTarget:(unsigned int)arg1;
- (void)setTextureId:(unsigned int)arg1;
- (unsigned int)target;
- (unsigned int)textureId;

@end
