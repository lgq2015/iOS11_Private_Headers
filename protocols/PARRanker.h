/* made by EzioChiu.
 */

@protocol PARRanker <NSObject>

@required

- (PARRankerParameters *)parameters;
- (void)rank:(PARResponse *)arg1;
- (void)rank:(PARResponse *)arg1 enableSectionRanking:(bool)arg2;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2 enableSectionRanking:(bool)arg3;

@end
