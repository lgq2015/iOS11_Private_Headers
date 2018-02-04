/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _sectionIdentifier;
    NSDictionary * _settings;
    NSString * _subSectionIdentifier;
    NSSet * _subSectionSettings;
}

@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *settings;
@property (nonatomic, readonly) bool showsInLockScreen;
@property (nonatomic, readonly) bool showsInNotificationCenter;
@property (nonatomic, readonly, copy) NSString *subSectionIdentifier;
@property (nonatomic, readonly) long long subSectionPriority;
@property (nonatomic, readonly, copy) NSSet *subSectionSettings;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationSectionSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIdentifier;
- (id)settings;
- (id)subSectionIdentifier;
- (id)subSectionSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;

- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;
- (unsigned long long)contentPreviewSetting;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;
- (bool)notificationsEnabled;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (long long)subSectionPriority;

@end
