/* made by EzioChiu.
 */

@protocol _CPResultSectionForFeedback <NSObject>

@required

- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (NSString *)bundleIdentifier;
- (void)clearResults;
- (NSData *)fallbackResultSection;
- (bool)hasBundleIdentifier;
- (bool)hasFallbackResultSection;
- (bool)hasIdentifier;
- (bool)hasRankingScore;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)rankingScore;
- (NSArray *)results;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setFallbackResultSection:(NSData *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(NSArray *)arg1;

@end
