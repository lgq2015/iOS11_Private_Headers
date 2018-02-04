/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecRichTitleCardSection : WBSParsecCardSection {
    bool  _centered;
    WBSParsecImageRepresentation * _image;
    bool  _includesSeparateLineForRottenTomatoes;
    NSArray * _moreGlyphs;
    NSNumber * _rating;
    NSString * _ratingText;
    WBSParsecImageRepresentation * _rottenTomatoesGlyph;
    NSString * _rottenTomatoesText;
    NSString * _subtitle;
    NSString * _titleText;
}

@property (getter=isCentered, nonatomic, readonly) bool centered;
@property (nonatomic, readonly) WBSParsecImageRepresentation *image;
@property (nonatomic, readonly) bool includesSeparateLineForRottenTomatoes;
@property (nonatomic, readonly) NSArray *moreGlyphs;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly, copy) NSString *ratingText;
@property (nonatomic, readonly) WBSParsecImageRepresentation *rottenTomatoesGlyph;
@property (nonatomic, readonly, copy) NSString *rottenTomatoesText;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *titleText;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)image;
- (bool)includesSeparateLineForRottenTomatoes;
- (bool)isCentered;
- (id)moreGlyphs;
- (id)rating;
- (id)ratingText;
- (id)rottenTomatoesGlyph;
- (id)rottenTomatoesText;
- (id)subtitle;
- (id)titleText;

@end
