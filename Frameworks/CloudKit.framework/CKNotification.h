/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotification : NSObject <NSSecureCoding> {
    NSString * _alertActionLocalizationKey;
    NSString * _alertBody;
    NSString * _alertLaunchImage;
    NSArray * _alertLocalizationArgs;
    NSString * _alertLocalizationKey;
    NSNumber * _badge;
    NSString * _category;
    NSString * _containerIdentifier;
    bool  _isPruned;
    CKNotificationID * _notificationID;
    long long  _notificationType;
    NSString * _soundName;
    NSString * _subscriptionID;
    NSString * _subtitle;
    NSArray * _subtitleLocalizationArgs;
    NSString * _subtitleLocalizationKey;
    NSString * _title;
    NSArray * _titleLocalizationArgs;
    NSString * _titleLocalizationKey;
}

@property (nonatomic, copy) NSString *alertActionLocalizationKey;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSArray *alertLocalizationArgs;
@property (nonatomic, copy) NSString *alertLocalizationKey;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic) bool isPruned;
@property (nonatomic, copy) CKNotificationID *notificationID;
@property (nonatomic) long long notificationType;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) NSString *subscriptionID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *subtitleLocalizationArgs;
@property (nonatomic, copy) NSString *subtitleLocalizationKey;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleLocalizationArgs;
@property (nonatomic, copy) NSString *titleLocalizationKey;

+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)alertActionLocalizationKey;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (id)badge;
- (id)category;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (bool)isPruned;
- (bool)isRead;
- (id)notificationID;
- (long long)notificationType;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setIsPruned:(bool)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setNotificationType:(long long)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLocalizationArgs:(id)arg1;
- (void)setSubtitleLocalizationKey:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationArgs:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (id)soundName;
- (id)subscriptionID;
- (id)subtitle;
- (id)subtitleLocalizationArgs;
- (id)subtitleLocalizationKey;
- (id)title;
- (id)titleLocalizationArgs;
- (id)titleLocalizationKey;

@end
