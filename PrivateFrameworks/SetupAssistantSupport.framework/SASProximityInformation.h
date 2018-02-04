/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityInformation : NSObject <NSSecureCoding> {
    NSNumber * _appAnalyticsOptIn;
    NSString * _appleID;
    bool  _automaticTimeZoneEnabled;
    NSData * _backupMetadata;
    NSString * _backupUUID;
    NSNumber * _deviceAnalyticsOptIn;
    NSString * _deviceClass;
    NSString * _deviceModel;
    NSString * _deviceName;
    NSNumber * _deviceTermsIdentifier;
    NSNumber * _findMyDeviceOptIn;
    NSString * _firstName;
    NSArray * _keyboards;
    NSDictionary * _localePreferences;
    bool  _locationServicesOptIn;
    NSSet * _nearbyNetworks;
    NSObject<OS_dispatch_semaphore> * _nearbyNetworksSemaphore;
    NSArray * _networkPasswords;
    NSArray * _networks;
    bool  _restoring;
    NSNumber * _siriOptIn;
    NSString * _timeZone;
    bool  _usesSameAccountForiTunes;
}

@property (retain) NSNumber *appAnalyticsOptIn;
@property (copy) NSString *appleID;
@property bool automaticTimeZoneEnabled;
@property (retain) NSData *backupMetadata;
@property (copy) NSString *backupUUID;
@property (retain) NSNumber *deviceAnalyticsOptIn;
@property (copy) NSString *deviceClass;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceName;
@property (retain) NSNumber *deviceTermsIdentifier;
@property (retain) NSNumber *findMyDeviceOptIn;
@property (copy) NSString *firstName;
@property (copy) NSArray *keyboards;
@property (copy) NSDictionary *localePreferences;
@property bool locationServicesOptIn;
@property (retain) NSSet *nearbyNetworks;
@property (retain) NSObject<OS_dispatch_semaphore> *nearbyNetworksSemaphore;
@property (copy) NSArray *networkPasswords;
@property (copy) NSArray *networks;
@property (getter=isRestoring) bool restoring;
@property (retain) NSNumber *siriOptIn;
@property (copy) NSString *timeZone;
@property bool usesSameAccountForiTunes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_getFindMyDeviceOptIn;
- (id)appAnalyticsOptIn;
- (id)appleID;
- (bool)automaticTimeZoneEnabled;
- (id)backupMetadata;
- (id)backupUUID;
- (id)deviceAnalyticsOptIn;
- (id)deviceClass;
- (id)deviceModel;
- (id)deviceName;
- (id)deviceTermsIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyDeviceOptIn;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (bool)isNetworkTransferrable:(struct __WiFiNetwork { }*)arg1;
- (bool)isRestoring;
- (id)keyboards;
- (void)loadInformation;
- (id)localePreferences;
- (bool)locationServicesOptIn;
- (id)nearbyNetworks;
- (id)nearbyNetworksSemaphore;
- (id)networkPasswords;
- (id)networks;
- (id)numberFromMCUserBoolSetting:(id)arg1;
- (void)setAppAnalyticsOptIn:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAutomaticTimeZoneEnabled:(bool)arg1;
- (void)setBackupMetadata:(id)arg1;
- (void)setBackupUUID:(id)arg1;
- (void)setDeviceAnalyticsOptIn:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceTermsIdentifier:(id)arg1;
- (void)setFindMyDeviceOptIn:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setKeyboards:(id)arg1;
- (void)setLocalePreferences:(id)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setNearbyNetworks:(id)arg1;
- (void)setNearbyNetworksSemaphore:(id)arg1;
- (void)setNetworkPasswords:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setRestoring:(bool)arg1;
- (void)setSiriOptIn:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSameAccountForiTunes:(bool)arg1;
- (id)siriOptIn;
- (id)timeZone;
- (bool)usesSameAccountForiTunes;
- (void)wirelessScanComplete:(id)arg1 error:(int)arg2;

@end
