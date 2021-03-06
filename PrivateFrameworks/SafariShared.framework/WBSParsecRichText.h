/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecRichText : WBSParsecModel {
    WBSParsecImageRepresentation * _contentAdvisoryImage;
    NSString * _contentAdvisoryString;
    NSString * _formattedTextDelimiter;
    NSArray * _formattedTextList;
    bool  _hasStarRating;
    NSNumber * _maximumLines;
    NSArray * _moreGlyphRepresentations;
    double  _starRating;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *contentAdvisoryString;
@property (nonatomic, readonly) NSString *formattedTextDelimiter;
@property (nonatomic, readonly) NSArray *formattedTextList;
@property (nonatomic, readonly) bool hasStarRating;
@property (nonatomic, readonly) NSNumber *maximumLines;
@property (nonatomic, readonly) NSArray *moreGlyphRepresentations;
@property (nonatomic, readonly) double starRating;
@property (nonatomic, readonly) NSString *text;

+ (id)schema;

- (void).cxx_destruct;
- (id)contentAdvisoryImageWithSession:(id)arg1;
- (id)contentAdvisoryString;
- (id)formattedTextDelimiter;
- (id)formattedTextList;
- (bool)hasStarRating;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumLines;
- (id)moreGlyphRepresentations;
- (id)moreGlyphsWithSession:(id)arg1;
- (double)starRating;
- (id)text;

@end
