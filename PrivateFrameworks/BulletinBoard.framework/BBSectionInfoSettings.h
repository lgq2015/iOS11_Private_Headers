/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _alertType;
    bool  _allowsNotifications;
    long long  _carPlaySetting;
    long long  _contentPreviewSetting;
    unsigned long long  _pushSettings;
    bool  _showsInLockScreen;
    bool  _showsInNotificationCenter;
    bool  _showsOnExternalDevices;
}

@property (nonatomic) unsigned long long alertType;
@property (nonatomic) bool allowsNotifications;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) bool showsInLockScreen;
@property (nonatomic) bool showsInNotificationCenter;
@property (nonatomic) bool showsMessagePreview;
@property (nonatomic) bool showsOnExternalDevices;

+ (id)sectionInfoSettingsForManagedBundleID:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_alertTypeDescription;
- (id)_contentPreviewSettingDescription;
- (unsigned long long)alertType;
- (bool)allowsNotifications;
- (long long)carPlaySetting;
- (long long)contentPreviewSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pushSettings;
- (void)setAlertType:(unsigned long long)arg1;
- (void)setAllowsNotifications:(bool)arg1;
- (void)setCarPlaySetting:(long long)arg1;
- (void)setContentPreviewSetting:(long long)arg1;
- (void)setPushSettings:(unsigned long long)arg1;
- (void)setShowsInLockScreen:(bool)arg1;
- (void)setShowsInNotificationCenter:(bool)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setShowsOnExternalDevices:(bool)arg1;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (bool)showsMessagePreview;
- (bool)showsOnExternalDevices;

@end
