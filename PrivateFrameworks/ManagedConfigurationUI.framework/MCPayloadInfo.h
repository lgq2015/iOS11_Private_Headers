/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCPayloadInfo : NSObject {
    NSDate * _certificateExpirationDate;
    NSArray * _certificateProperties;
    NSString * _friendlyName;
    bool  _hasDetails;
    bool  _isCertificate;
    bool  _isManagedAppPayload;
    bool  _isManagedBookPayload;
    NSString * _localizedPluralForm;
    NSString * _localizedSingularForm;
    NSString * _managedAppID;
    MCBook * _managedBook;
    NSArray * _payloadDescriptionKeyValueSections;
    bool  _showIcon;
    NSString * _subtitle1Description;
    NSString * _subtitle1Label;
    NSString * _subtitle2Description;
    NSString * _subtitle2Label;
    NSString * _title;
    long long  _type;
    NSArray * _typeStrings;
}

@property (nonatomic, retain) NSDate *certificateExpirationDate;
@property (nonatomic, retain) NSArray *certificateProperties;
@property (nonatomic, retain) NSString *friendlyName;
@property (nonatomic) bool hasDetails;
@property (nonatomic) bool isCertificate;
@property (nonatomic) bool isManagedAppPayload;
@property (nonatomic) bool isManagedBookPayload;
@property (nonatomic, retain) NSString *localizedPluralForm;
@property (nonatomic, retain) NSString *localizedSingularForm;
@property (nonatomic, retain) NSString *managedAppID;
@property (nonatomic, retain) MCBook *managedBook;
@property (nonatomic, retain) NSArray *payloadDescriptionKeyValueSections;
@property (nonatomic) bool showIcon;
@property (nonatomic, retain) NSString *subtitle1Description;
@property (nonatomic, retain) NSString *subtitle1Label;
@property (nonatomic, retain) NSString *subtitle2Description;
@property (nonatomic, retain) NSString *subtitle2Label;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSArray *typeStrings;

+ (id)accountPayloadClasses;
+ (id)managedAppClasses;
+ (id)managedBookClasses;
+ (long long)payloadInfoTypeForPayloadClass:(Class)arg1;
+ (id)payloadInfosFromPayload:(id)arg1;
+ (id)removeDuplicatesFromRestrictionPayloadInfos:(id)arg1;
+ (id)restrictionPayloadClasses;

- (void).cxx_destruct;
- (id)certificateExpirationDate;
- (id)certificateProperties;
- (id)friendlyName;
- (bool)hasDetails;
- (id)initWithManagedAppID:(id)arg1;
- (id)initWithManagedBook:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isCertificate;
- (bool)isManagedAppPayload;
- (bool)isManagedBookPayload;
- (id)localizedPluralForm;
- (id)localizedSingularForm;
- (id)managedAppID;
- (id)managedBook;
- (id)payloadDescriptionKeyValueSections;
- (void)setCertificateExpirationDate:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setHasDetails:(bool)arg1;
- (void)setIsCertificate:(bool)arg1;
- (void)setIsManagedAppPayload:(bool)arg1;
- (void)setIsManagedBookPayload:(bool)arg1;
- (void)setLocalizedPluralForm:(id)arg1;
- (void)setLocalizedSingularForm:(id)arg1;
- (void)setManagedAppID:(id)arg1;
- (void)setManagedBook:(id)arg1;
- (void)setPayloadDescriptionKeyValueSections:(id)arg1;
- (void)setShowIcon:(bool)arg1;
- (void)setSubtitle1Description:(id)arg1;
- (void)setSubtitle1Label:(id)arg1;
- (void)setSubtitle2Description:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeStrings:(id)arg1;
- (bool)showIcon;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (long long)type;
- (id)typeStrings;

@end
