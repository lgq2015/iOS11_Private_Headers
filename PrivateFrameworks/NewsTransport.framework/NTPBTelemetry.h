/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetry : PBCodable <NSCopying> {
    long long  _appBuild;
    NSString * _appVersion;
    NSString * _carrier;
    int  _contentEnvironment;
    NSString * _countryCode;
    NSString * _deviceModel;
    NSString * _devicePlatform;
    struct { 
        unsigned int appBuild : 1; 
        unsigned int contentEnvironment : 1; 
        unsigned int osInstallVariant : 1; 
    }  _has;
    NSString * _languageCode;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
    NSMutableArray * _networkEventGroups;
    NSString * _osCountryCode;
    int  _osInstallVariant;
    NSString * _osVersion;
    NSString * _userId;
    NSString * _userStorefrontId;
}

@property (nonatomic) long long appBuild;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSString *carrier;
@property (nonatomic) int contentEnvironment;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *devicePlatform;
@property (nonatomic) bool hasAppBuild;
@property (nonatomic, readonly) bool hasAppVersion;
@property (nonatomic, readonly) bool hasCarrier;
@property (nonatomic) bool hasContentEnvironment;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasDevicePlatform;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasMobileCountryCode;
@property (nonatomic, readonly) bool hasMobileNetworkCode;
@property (nonatomic, readonly) bool hasOsCountryCode;
@property (nonatomic) bool hasOsInstallVariant;
@property (nonatomic, readonly) bool hasOsVersion;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *mobileCountryCode;
@property (nonatomic, retain) NSString *mobileNetworkCode;
@property (nonatomic, retain) NSMutableArray *networkEventGroups;
@property (nonatomic, retain) NSString *osCountryCode;
@property (nonatomic) int osInstallVariant;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSString *userId;
@property (nonatomic, retain) NSString *userStorefrontId;

+ (Class)networkEventGroupsType;

- (void).cxx_destruct;
- (int)StringAsOsInstallVariant:(id)arg1;
- (void)addNetworkEventGroups:(id)arg1;
- (long long)appBuild;
- (id)appVersion;
- (id)carrier;
- (void)clearNetworkEventGroups;
- (int)contentEnvironment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)deviceModel;
- (id)devicePlatform;
- (id)dictionaryRepresentation;
- (bool)hasAppBuild;
- (bool)hasAppVersion;
- (bool)hasCarrier;
- (bool)hasContentEnvironment;
- (bool)hasCountryCode;
- (bool)hasDeviceModel;
- (bool)hasDevicePlatform;
- (bool)hasLanguageCode;
- (bool)hasMobileCountryCode;
- (bool)hasMobileNetworkCode;
- (bool)hasOsCountryCode;
- (bool)hasOsInstallVariant;
- (bool)hasOsVersion;
- (bool)hasUserId;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)networkEventGroups;
- (id)networkEventGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventGroupsCount;
- (id)osCountryCode;
- (int)osInstallVariant;
- (id)osInstallVariantAsString:(int)arg1;
- (id)osVersion;
- (bool)readFrom:(id)arg1;
- (void)setAppBuild:(long long)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setCarrier:(id)arg1;
- (void)setContentEnvironment:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDevicePlatform:(id)arg1;
- (void)setHasAppBuild:(bool)arg1;
- (void)setHasContentEnvironment:(bool)arg1;
- (void)setHasOsInstallVariant:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setNetworkEventGroups:(id)arg1;
- (void)setOsCountryCode:(id)arg1;
- (void)setOsInstallVariant:(int)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userId;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
