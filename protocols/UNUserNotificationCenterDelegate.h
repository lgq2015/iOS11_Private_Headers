/* made by EzioChiu.
 */

@protocol UNUserNotificationCenterDelegate <NSObject>

@optional

- (void)userNotificationCenter:(void *)arg1 didReceiveNotificationResponse:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: UNUserNotificationCenter *, UNNotificationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)userNotificationCenter:(void *)arg1 willPresentNotification:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UNUserNotificationCenter *, UNNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
