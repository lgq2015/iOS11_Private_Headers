/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFRichText : SFText <NSCopying, NSSecureCoding, SFRichText> {
    NSString * _contentAdvisory;
    NSArray * _formattedTextPieces;
    struct { 
        unsigned int starRating : 1; 
    }  _has;
    NSArray * _icons;
    double  _starRating;
}

@property (nonatomic, copy) NSString *contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *formattedTextPieces;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic) double starRating;
@property (readonly) Class superclass;
@property (copy) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)textWithString:(id)arg1;

- (void).cxx_destruct;
- (id)contentAdvisory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedTextPieces;
- (bool)hasStarRating;
- (id)icons;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)loadRichTextWithCompletionHandler:(id /* block */)arg1;
- (void)setContentAdvisory:(id)arg1;
- (void)setFormattedTextPieces:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setStarRating:(double)arg1;
- (double)starRating;

@end
