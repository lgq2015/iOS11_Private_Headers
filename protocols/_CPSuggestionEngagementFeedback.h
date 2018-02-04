/* made by EzioChiu.
 */

@protocol _CPSuggestionEngagementFeedback <NSObject>

@required

- (bool)hasSuggestion;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSuggestion:(_CPSearchSuggestionForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (_CPSearchSuggestionForFeedback *)suggestion;
- (unsigned long long)timestamp;

@end
