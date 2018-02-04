/* made by EzioChiu.
 */

@protocol _CPSearchSuggestionForFeedback <NSObject>

@required

- (NSString *)fbr;
- (bool)hasFbr;
- (bool)hasIdentifier;
- (bool)hasQuery;
- (bool)hasScore;
- (bool)hasSuggestion;
- (bool)hasType;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)query;
- (double)score;
- (void)setFbr:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setQuery:(NSString *)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestion:(NSString *)arg1;
- (void)setType:(int)arg1;
- (NSString *)suggestion;
- (int)type;

@end
