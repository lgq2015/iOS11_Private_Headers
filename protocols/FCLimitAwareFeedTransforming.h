/* made by EzioChiu.
 */

@protocol FCLimitAwareFeedTransforming <FCFeedTransforming>

@required

- (NSArray *)transformFeedItems:(NSArray *)arg1 withRespectToLimit:(unsigned long long)arg2;

@end
