/* made by EzioChiu.
 */

@protocol SFRichText <SFText>

@required

- (NSString *)contentAdvisory;
- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)formattedTextPieces;
- (NSArray *)icons;
- (NSData *)jsonData;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setFormattedTextPieces:(NSArray *)arg1;
- (void)setIcons:(NSArray *)arg1;
- (void)setStarRating:(double)arg1;
- (double)starRating;

@end
