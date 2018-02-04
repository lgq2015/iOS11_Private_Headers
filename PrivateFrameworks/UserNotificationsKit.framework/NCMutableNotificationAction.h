/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationAction : NCNotificationAction

@property (nonatomic, retain) <NCNotificationActionRunner> *actionRunner;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic, copy) NSDictionary *behaviorParameters;
@property (getter=isDestructiveAction, nonatomic) bool destructiveAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *launchBundleID;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool shouldDismissNotification;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActionRunner:(id)arg1;
- (void)setActivationMode:(unsigned long long)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setBehaviorParameters:(id)arg1;
- (void)setDestructiveAction:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setShouldDismissNotification:(bool)arg1;
- (void)setTitle:(id)arg1;

@end
