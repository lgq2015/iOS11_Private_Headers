/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _attachments;
    NSNumber * _badge;
    NSString * _body;
    NSString * _categoryIdentifier;
    NSString * _darwinNotificationName;
    NSString * _darwinSnoozedNotificationName;
    NSString * _defaultActionTitle;
    bool  _fromSnooze;
    bool  _hasDefautAction;
    NSString * _launchImageName;
    NSArray * _peopleIdentifiers;
    bool  _shouldAddToNotificationsList;
    bool  _shouldAlwaysAlertWhileAppIsForeground;
    bool  _shouldLockDevice;
    bool  _shouldPauseMedia;
    bool  _snoozeable;
    UNNotificationSound * _sound;
    NSString * _subtitle;
    NSString * _threadIdentifier;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSNumber *badge;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSString *darwinNotificationName;
@property (nonatomic, readonly, copy) NSString *darwinSnoozedNotificationName;
@property (nonatomic, readonly, copy) NSString *defaultActionTitle;
@property (getter=isFromSnooze, nonatomic, readonly) bool fromSnooze;
@property (nonatomic, readonly) bool hasDefaultAction;
@property (nonatomic, readonly, copy) NSString *launchImageName;
@property (nonatomic, readonly, copy) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) bool shouldAddToNotificationsList;
@property (nonatomic, readonly) bool shouldAlwaysAlertWhileAppIsForeground;
@property (nonatomic, readonly) bool shouldLockDevice;
@property (nonatomic, readonly) bool shouldPauseMedia;
@property (getter=isSnoozeable, nonatomic, readonly) bool snoozeable;
@property (nonatomic, readonly, copy) UNNotificationSound *sound;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 darwinNotificationName:(id)arg5 darwinSnoozedNotificationName:(id)arg6 fromSnooze:(bool)arg7 hasDefaultAction:(bool)arg8 defaultActionTitle:(id)arg9 launchImageName:(id)arg10 peopleIdentifiers:(id)arg11 shouldAddToNotificationsList:(bool)arg12 shouldAlwaysAlertWhileAppIsForeground:(bool)arg13 shouldLockDevice:(bool)arg14 shouldPauseMedia:(bool)arg15 snoozeable:(bool)arg16 sound:(id)arg17 subtitle:(id)arg18 threadIdentifier:(id)arg19 title:(id)arg20 userInfo:(id)arg21;
- (id)attachments;
- (id)badge;
- (id)body;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darwinNotificationName;
- (id)darwinSnoozedNotificationName;
- (id)defaultActionTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDefaultAction;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromSnooze;
- (bool)isSnoozeable;
- (id)launchImageName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peopleIdentifiers;
- (bool)shouldAddToNotificationsList;
- (bool)shouldAlwaysAlertWhileAppIsForeground;
- (bool)shouldLockDevice;
- (bool)shouldPauseMedia;
- (id)sound;
- (id)subtitle;
- (id)threadIdentifier;
- (id)title;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)uns_willAlertUser;
- (bool)uns_willNotifyUser;

@end
