/* made by EzioChiu.
 */

@protocol PDPushNotificationConsumer <NSObject>

@required

- (void)applyPushNotificationToken:(NSString *)arg1;
- (void)handlePushNotificationForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSSet *)pushNotificationTopics;

@end
