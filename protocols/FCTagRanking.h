/* made by EzioChiu.
 */

@protocol FCTagRanking <NSObject>

@required

- (NSArray *)rankTagIDsDescending:(NSArray *)arg1;
- (NSDictionary *)scoresForTagIDs:(NSArray *)arg1;

@end
