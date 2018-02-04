/* made by EzioChiu.
 */

@protocol ProxyAnalyticsDelegate <NSObject>

@optional

- (void)performPersistentStoreHealthCheckComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)proxyAnalyticsTrainAndScoreComplete:(NSDictionary *)arg1 error:(NSError *)arg2;

@end
