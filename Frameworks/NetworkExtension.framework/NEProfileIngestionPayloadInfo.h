/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfileIngestionPayloadInfo : NSObject <NEConfigurationLegacySupport, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _applicationCreated;
    bool  _isSetAside;
    NSString * _payloadOrganization;
    NSString * _payloadProtocolType;
    NSString * _payloadUUID;
    NSString * _profileIdentifier;
    NSDate * _profileIngestionDate;
    NSString * _profileOrganization;
    long long  _profileSource;
    NSString * _profileUUID;
    NSString * _systemVersion;
}

@property bool applicationCreated;
@property bool isSetAside;
@property (copy) NSString *payloadOrganization;
@property (copy) NSString *payloadProtocolType;
@property (copy) NSString *payloadUUID;
@property (copy) NSString *profileIdentifier;
@property (copy) NSDate *profileIngestionDate;
@property (copy) NSString *profileOrganization;
@property long long profileSource;
@property (copy) NSString *profileUUID;
@property (copy) NSString *systemVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applicationCreated;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSetAside;
- (id)payloadOrganization;
- (id)payloadProtocolType;
- (id)payloadUUID;
- (id)profileIdentifier;
- (id)profileIngestionDate;
- (id)profileOrganization;
- (long long)profileSource;
- (id)profileUUID;
- (void)setApplicationCreated:(bool)arg1;
- (void)setIsSetAside:(bool)arg1;
- (void)setPayloadOrganization:(id)arg1;
- (void)setPayloadProtocolType:(id)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setProfileIngestionDate:(id)arg1;
- (void)setProfileOrganization:(id)arg1;
- (void)setProfileSource:(long long)arg1;
- (void)setProfileUUID:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemVersion;

@end
