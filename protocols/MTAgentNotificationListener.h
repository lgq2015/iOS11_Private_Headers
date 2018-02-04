/* made by EzioChiu.
 */

@protocol MTAgentNotificationListener <NSObject>

@required

- (void)handleNotification:(MTAgentNotification *)arg1;
- (bool)handlesNotification:(MTAgentNotification *)arg1;

@optional

- (NSArray *)handledLiveDarwinNotifications;

@end
