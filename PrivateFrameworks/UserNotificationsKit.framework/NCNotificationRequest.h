/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationRequest : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _categoryIdentifier;
    NCNotificationAction * _clearAction;
    NCNotificationAction * _closeAction;
    unsigned long long  _collapsedNotificationsCount;
    NCNotificationContent * _content;
    NSDictionary * _context;
    NCNotificationAction * _defaultAction;
    bool  _isCollapsedNotification;
    NSString * _notificationIdentifier;
    NCNotificationOptions * _options;
    NSString * _parentSectionIdentifier;
    NSArray * _peopleIdentifiers;
    NSSet * _requestDestinations;
    NSString * _sectionIdentifier;
    NSSet * _settingsSections;
    NCNotificationAction * _silenceAction;
    NCNotificationSound * _sound;
    NSDictionary * _sourceInfo;
    NSSet * _subSectionIdentifiers;
    NSDictionary * _supplementaryActions;
    NSString * _threadIdentifier;
    NSDate * _timestamp;
    UNNotification * _userNotification;
}

@property (nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly) NCNotificationAction *clearAction;
@property (nonatomic, readonly) NCNotificationAction *closeAction;
@property (nonatomic, readonly) unsigned long long collapsedNotificationsCount;
@property (nonatomic, readonly) NCNotificationContent *content;
@property (nonatomic, readonly, copy) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NCNotificationAction *defaultAction;
@property (nonatomic, readonly, copy) NSArray *defaultEnvironmentActions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAttachments;
@property (nonatomic, readonly) bool hasOnlySingleMinimalTextInputAction;
@property (nonatomic, readonly) bool hasOnlySingleTextInputAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCollapsedNotification;
@property (nonatomic, readonly, copy) NSArray *minimalEnvironmentActions;
@property (nonatomic, readonly, copy) NSString *notificationIdentifier;
@property (nonatomic, readonly) BBObserver *observer;
@property (nonatomic, readonly) NCNotificationOptions *options;
@property (nonatomic, readonly, copy) NSString *parentSectionIdentifier;
@property (nonatomic, readonly, copy) NSArray *peopleIdentifiers;
@property (nonatomic, readonly, copy) NSSet *requestDestinations;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSSet *settingsSections;
@property (nonatomic, readonly) bool showsTextInputOnAppearance;
@property (nonatomic, readonly) NCNotificationAction *silenceAction;
@property (nonatomic, readonly) NCNotificationSound *sound;
@property (nonatomic, readonly, copy) NSDictionary *sourceInfo;
@property (nonatomic, readonly, copy) NSSet *subSectionIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *supplementaryActions;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) UNNotification *userNotification;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

+ (id)notificationRequest;
+ (id)notificationRequestWithActionWithId:(id)arg1 runner:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2 lockScreenPersistence:(unsigned long long)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 isCritical:(bool)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 lockScreenPersistence:(unsigned long long)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithRequestDestination:(id)arg1;
+ (id)notificationRequestWithRequestDestinations:(id)arg1;
+ (id)notificationRequestWithSectionId:(id)arg1;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 requestDestination:(id)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 subSectionIds:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 subSectionIds:(id)arg4 title:(id)arg5 message:(id)arg6 timestamp:(id)arg7 destinations:(id)arg8 options:(id)arg9;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 timestamp:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destination:(id)arg7;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 subSectionIds:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestination:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithThreadId:(id)arg1;
+ (id)notificationRequestWithThreadId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithTimestamp:(id)arg1;

- (void).cxx_destruct;
- (id)_actionsDescriptionForEnvironment:(id)arg1;
- (id)_actionsLoggingDescription;
- (id)categoryIdentifier;
- (id)clearAction;
- (id)closeAction;
- (unsigned long long)collapsedNotificationsCount;
- (id)content;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)defaultAction;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isCollapsedNotification;
- (bool)isCollapsibleWithNotificationRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)loggingDescription;
- (bool)matchesRequest:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationIdentifier;
- (id)options;
- (id)parentSectionIdentifier;
- (id)peopleIdentifiers;
- (id)requestDestinations;
- (id)sectionIdentifier;
- (id)settingsSections;
- (id)silenceAction;
- (id)sound;
- (id)sourceInfo;
- (id)subSectionIdentifiers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)supplementaryActions;
- (id)threadIdentifier;
- (id)timestamp;
- (id)userNotification;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)_notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(bool)arg5 hasPlayLightsAndSirens:(bool)arg6;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(bool)arg5;

- (id)bulletin;
- (id)defaultEnvironmentActions;
- (bool)hasAttachments;
- (bool)hasOnlySingleMinimalTextInputAction;
- (bool)hasOnlySingleTextInputAction;
- (bool)hasSameContactAsNotificationRequest:(id)arg1;
- (bool)isAudioMessageNotificationRequest;
- (id)minimalEnvironmentActions;
- (id)observer;
- (bool)showsTextInputOnAppearance;

@end
