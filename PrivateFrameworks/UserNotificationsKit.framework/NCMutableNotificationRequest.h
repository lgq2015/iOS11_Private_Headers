/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, retain) NCNotificationAction *clearAction;
@property (nonatomic, retain) NCNotificationAction *closeAction;
@property (nonatomic) unsigned long long collapsedNotificationsCount;
@property (nonatomic, retain) NCNotificationContent *content;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, retain) NCNotificationAction *defaultAction;
@property (nonatomic) bool isCollapsedNotification;
@property (nonatomic, copy) NSString *notificationIdentifier;
@property (nonatomic, retain) NCNotificationOptions *options;
@property (nonatomic, copy) NSString *parentSectionIdentifier;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic, copy) NSSet *requestDestinations;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSSet *settingsSections;
@property (nonatomic, retain) NCNotificationAction *silenceAction;
@property (nonatomic, retain) NCNotificationSound *sound;
@property (nonatomic, copy) NSDictionary *sourceInfo;
@property (nonatomic, copy) NSSet *subSectionIdentifiers;
@property (nonatomic, copy) NSDictionary *supplementaryActions;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) UNNotification *userNotification;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setClearAction:(id)arg1;
- (void)setCloseAction:(id)arg1;
- (void)setCollapsedNotificationsCount:(unsigned long long)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setIsCollapsedNotification:(bool)arg1;
- (void)setNotificationIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setParentSectionIdentifier:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setRequestDestinations:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSettingsSections:(id)arg1;
- (void)setSilenceAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setSubSectionIdentifiers:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUserNotification:(id)arg1;

@end
