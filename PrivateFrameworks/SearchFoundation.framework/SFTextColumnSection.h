/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTextColumnSection : NSObject <NSCopying, NSSecureCoding, SFTextColumnSection> {
    struct { 
        unsigned int textNoWrap : 1; 
        unsigned int textWeight : 1; 
    }  _has;
    NSArray * _textLines;
    bool  _textNoWrap;
    unsigned long long  _textWeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *textLines;
@property (nonatomic) bool textNoWrap;
@property (nonatomic) unsigned long long textWeight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTextNoWrap;
- (bool)hasTextWeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setTextLines:(id)arg1;
- (void)setTextNoWrap:(bool)arg1;
- (void)setTextWeight:(unsigned long long)arg1;
- (id)textLines;
- (bool)textNoWrap;
- (unsigned long long)textWeight;

@end
