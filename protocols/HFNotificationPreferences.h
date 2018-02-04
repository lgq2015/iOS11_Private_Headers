/* made by EzioChiu.
 */

@protocol HFNotificationPreferences <NSObject>

@required

- (bool)hf_isShowNotificationsStatus;
- (NSPredicate *)hf_notificationsCondition;
- (bool)hf_supportsNotifications;
- (NAFuture *)hf_updateNotificationsCondition:(NSPredicate *)arg1;
- (NAFuture *)hf_updateShowNotificationsStatus:(bool)arg1;

@end
