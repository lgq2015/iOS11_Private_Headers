/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    <NCNotificationActionRunner> * _actionRunner;
    unsigned long long  _activationMode;
    unsigned long long  _behavior;
    NSDictionary * _behaviorParameters;
    bool  _destructiveAction;
    NSString * _identifier;
    NSString * _launchBundleID;
    NSURL * _launchURL;
    bool  _requiresAuthentication;
    bool  _shouldDismissNotification;
    NSString * _title;
}

@property (nonatomic, readonly) <NCNotificationActionRunner> *actionRunner;
@property (nonatomic, readonly) unsigned long long activationMode;
@property (nonatomic, readonly) unsigned long long behavior;
@property (nonatomic, readonly, copy) NSDictionary *behaviorParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDestructiveAction, nonatomic, readonly) bool destructiveAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *launchBundleID;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly) bool requiresAuthentication;
@property (nonatomic, readonly) bool shouldDismissNotification;
@property (readonly) Class superclass;
@property (getter=isSystemAction, nonatomic, readonly) bool systemAction;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

- (void).cxx_destruct;
- (id)actionRunner;
- (unsigned long long)activationMode;
- (unsigned long long)behavior;
- (id)behaviorParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithNotificationAction:(id)arg1;
- (bool)isDestructiveAction;
- (bool)isSystemAction;
- (id)launchBundleID;
- (id)launchURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresAuthentication;
- (bool)shouldDismissNotification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)_notificationActionForAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;
+ (id)notificationActionForAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;
+ (id)notificationActionForDefaultAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;
+ (id)notificationActionForDismissAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;
+ (id)notificationActionForSilenceAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;

@end
