/* made by EzioChiu.
 */

@protocol VCAggregatorDelegate <NSObject>

@required

- (void)report:(NSDictionary *)arg1;
- (void)reportQR:(NSDictionary *)arg1;

@end
