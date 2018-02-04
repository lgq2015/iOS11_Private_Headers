/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying> {
    NSString * _bundleIdentifier;
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasUserPrivacySettings;
@property (nonatomic, retain) CKDPUserPrivacySettings *userPrivacySettings;

+ (id)options;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasUserPrivacySettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBundleIdentifier:(id)arg1;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;
- (void)writeTo:(id)arg1;

@end
