/* made by EzioChiu.
 */

@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>

@required

- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(NCNotificationRequest *)arg2;
- (void)destination:(void *)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(void *)arg2; // needs 2 arg types, found 7: <NCNotificationDestination> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NCNotificationRequest *, void*
- (void)destinationDidBecomeReadyToReceiveNotifications:(id <NCNotificationDestination>)arg1;

@optional

- (void)destination:(id <NCNotificationAlertDestination>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2 suppressAlerts:(bool)arg3;

@end
