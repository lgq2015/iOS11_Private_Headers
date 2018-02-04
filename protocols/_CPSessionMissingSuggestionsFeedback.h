/* made by EzioChiu.
 */

@protocol _CPSessionMissingSuggestionsFeedback <NSObject>

@required

- (void)addSuggestions:(_CPSearchSuggestionForFeedback *)arg1;
- (void)clearSuggestions;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSuggestions:(NSArray *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (NSArray *)suggestions;
- (_CPSearchSuggestionForFeedback *)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (unsigned long long)timestamp;

@end
