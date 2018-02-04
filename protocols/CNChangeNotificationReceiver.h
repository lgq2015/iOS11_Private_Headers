/* made by EzioChiu.
 */

@protocol CNChangeNotificationReceiver <NSObject>

@required

- (double)externalNotificationCoalescingDelay;
- (bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)receiveExternalNotificationName:(NSString *)arg1;
- (void)receiveNotificationName:(NSString *)arg1 fromSender:(id <NSObject>)arg2 saveIdentifier:(NSString *)arg3 userInfo:(NSDictionary *)arg4 isFromExternalProcess:(bool)arg5;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(bool)arg1;

@end
