/* made by EzioChiu.
 */

@protocol UNSRemoteNotificationServerObserver <NSObject>

@required

- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
