/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {
    unsigned int  _backgroundColor;
    unsigned int  _borderColor;
    struct { 
        unsigned int backgroundColor : 1; 
        unsigned int borderColor : 1; 
        unsigned int style : 1; 
        unsigned int textColor : 1; 
        unsigned int textDropShadowColor : 1; 
        unsigned int textDropShadowSize : 1; 
        unsigned int textStrokeColor : 1; 
        unsigned int textStrokeSize : 1; 
    }  _has;
    int  _style;
    unsigned int  _textColor;
    unsigned int  _textDropShadowColor;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _textDropShadowOffsets;
    float  _textDropShadowSize;
    unsigned int  _textStrokeColor;
    float  _textStrokeSize;
}

@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) bool hasBackgroundColor;
@property (nonatomic) bool hasBorderColor;
@property (nonatomic) bool hasStyle;
@property (nonatomic) bool hasTextColor;
@property (nonatomic) bool hasTextDropShadowColor;
@property (nonatomic) bool hasTextDropShadowSize;
@property (nonatomic) bool hasTextStrokeColor;
@property (nonatomic) bool hasTextStrokeSize;
@property (nonatomic) int style;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) unsigned int textDropShadowColor;
@property (nonatomic, readonly) float*textDropShadowOffsets;
@property (nonatomic, readonly) unsigned long long textDropShadowOffsetsCount;
@property (nonatomic) float textDropShadowSize;
@property (nonatomic) unsigned int textStrokeColor;
@property (nonatomic) float textStrokeSize;

- (void)addTextDropShadowOffset:(float)arg1;
- (unsigned int)backgroundColor;
- (unsigned int)borderColor;
- (void)clearTextDropShadowOffsets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundColor;
- (bool)hasBorderColor;
- (bool)hasStyle;
- (bool)hasTextColor;
- (bool)hasTextDropShadowColor;
- (bool)hasTextDropShadowSize;
- (bool)hasTextStrokeColor;
- (bool)hasTextStrokeSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setBorderColor:(unsigned int)arg1;
- (void)setHasBackgroundColor:(bool)arg1;
- (void)setHasBorderColor:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasTextColor:(bool)arg1;
- (void)setHasTextDropShadowColor:(bool)arg1;
- (void)setHasTextDropShadowSize:(bool)arg1;
- (void)setHasTextStrokeColor:(bool)arg1;
- (void)setHasTextStrokeSize:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setTextColor:(unsigned int)arg1;
- (void)setTextDropShadowColor:(unsigned int)arg1;
- (void)setTextDropShadowOffsets:(float*)arg1 count:(unsigned long long)arg2;
- (void)setTextDropShadowSize:(float)arg1;
- (void)setTextStrokeColor:(unsigned int)arg1;
- (void)setTextStrokeSize:(float)arg1;
- (int)style;
- (unsigned int)textColor;
- (unsigned int)textDropShadowColor;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)arg1;
- (float*)textDropShadowOffsets;
- (unsigned long long)textDropShadowOffsetsCount;
- (float)textDropShadowSize;
- (unsigned int)textStrokeColor;
- (float)textStrokeSize;
- (void)writeTo:(id)arg1;

@end