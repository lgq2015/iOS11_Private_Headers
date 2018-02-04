/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconInfo : NSObject {
    float  _alpha;
    struct CGColor { } * _fillColor;
    struct CGColor { } * _fullBleedColor;
    struct CGColor { } * _glyphColor;
    struct CGColor { } * _haloColor;
    VKImage * _image;
    float  _strokeWeight;
    unsigned char  _style;
}

@property (nonatomic) float alpha;
@property (nonatomic) struct CGColor { }*fillColor;
@property (nonatomic) struct CGColor { }*fullBleedColor;
@property (nonatomic) struct CGColor { }*glyphColor;
@property (nonatomic) struct CGColor { }*haloColor;
@property (nonatomic, retain) VKImage *image;
@property (nonatomic) float strokeWeight;
@property (nonatomic) unsigned char style;

- (float)alpha;
- (void)dealloc;
- (struct CGColor { }*)fillColor;
- (struct CGColor { }*)fullBleedColor;
- (struct CGColor { }*)glyphColor;
- (struct CGColor { }*)haloColor;
- (id)image;
- (void)setAlpha:(float)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFullBleedColor:(struct CGColor { }*)arg1;
- (void)setGlyphColor:(struct CGColor { }*)arg1;
- (void)setHaloColor:(struct CGColor { }*)arg1;
- (void)setImage:(id)arg1;
- (void)setStrokeWeight:(float)arg1;
- (void)setStyle:(unsigned char)arg1;
- (float)strokeWeight;
- (unsigned char)style;

@end
