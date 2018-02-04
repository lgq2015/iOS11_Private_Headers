/* made by EzioChiu.
 */

@protocol NCNotificationCustomContent <NSObject>

@required

- (bool)allowManualDismiss;
- (unsigned long long)customContentLocation;
- (bool)defaultContentHidden;
- (<NCNotificationCustomContentDelegate> *)delegate;
- (bool)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)setDelegate:(id <NCNotificationCustomContentDelegate>)arg1;
- (NSString *)title;

@optional

- (NSString *)contentExtensionIdentifier;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (void)playAudioMessage;
- (NCNotificationAction *)presentationSourceAction;
- (void)preserveInputViews;
- (bool)restoreInputViews;
- (void)setPresentationSourceAction:(NCNotificationAction *)arg1;

@end
