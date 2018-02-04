/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFFormattedText : SFText <NSCopying, NSSecureCoding, SFFormattedText> {
    SFImage * _glyph;
    struct { 
        unsigned int isEmphasized : 1; 
        unsigned int isBold : 1; 
        unsigned int textColor : 1; 
    }  _has;
    bool  _isBold;
    bool  _isEmphasized;
    int  _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFImage *glyph;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBold;
@property (nonatomic) bool isEmphasized;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxLines;
@property (readonly) Class superclass;
@property (copy) NSString *text;
@property (nonatomic) int textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)glyph;
- (bool)hasIsBold;
- (bool)hasIsEmphasized;
- (bool)hasTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isBold;
- (bool)isEmphasized;
- (id)jsonData;
- (void)setGlyph:(id)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setTextColor:(int)arg1;
- (int)textColor;

@end
