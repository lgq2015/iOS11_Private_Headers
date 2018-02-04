/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _activeAirPlayRoute;
    NSArray * _allOpenApplications;
    bool  _appLocked;
    NSArray * _availableAirPlayRoutes;
    unsigned long long  _availableBytes;
    float  _batteryLevel;
    NSString * _buildVersion;
    unsigned long long  _chargingState;
    unsigned long long  _deviceOrientation;
    bool  _ephemeralMultiUser;
    NSString * _identifier;
    NSArray * _installedApplications;
    NSString * _instructorImageIdentifier;
    unsigned long long  _interfaceOrientation;
    unsigned long long  _lockState;
    unsigned long long  _loginState;
    NSString * _managementLockPasscode;
    NSString * _model;
    NSString * _name;
    bool  _orientationLocked;
    bool  _passcodeEnabled;
    NSString * _pipOpenApplication;
    unsigned long long  _platform;
    NSString * _primaryOpenApplication;
    unsigned long long  _screenState;
    NSString * _secondaryOpenApplication;
    NSString * _serialNumber;
    NSString * _stagedAdHocIdentityCertificateFingerprint;
    NSString * _studentImageIdentifier;
    bool  _supervised;
    NSString * _systemName;
    NSString * _systemVersion;
    NSArray * _trustedAnchorCertificateFingerprints;
    NSString * _userDisplayName;
    NSString * _userFamilyName;
    NSString * _userGivenName;
    NSString * _userIdentifier;
    NSString * _userImageURL;
    NSString * _userPhoneticFamilyName;
    NSString * _userPhoneticGivenName;
    float  _volume;
}

@property (nonatomic, copy) NSDictionary *activeAirPlayRoute;
@property (nonatomic, copy) NSArray *allOpenApplications;
@property (getter=isAppLocked, nonatomic) bool appLocked;
@property (nonatomic, copy) NSArray *availableAirPlayRoutes;
@property (nonatomic) unsigned long long availableBytes;
@property (nonatomic) float batteryLevel;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic) unsigned long long chargingState;
@property (nonatomic) unsigned long long deviceOrientation;
@property (getter=isEphemeralMultiUser, nonatomic) bool ephemeralMultiUser;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *installedApplications;
@property (nonatomic, copy) NSString *instructorImageIdentifier;
@property (nonatomic) unsigned long long interfaceOrientation;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) unsigned long long loginState;
@property (nonatomic, copy) NSString *managementLockPasscode;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isOrientationLocked, nonatomic) bool orientationLocked;
@property (getter=isPasscodeEnabled, nonatomic) bool passcodeEnabled;
@property (nonatomic, copy) NSString *pipOpenApplication;
@property (nonatomic) unsigned long long platform;
@property (nonatomic, copy) NSString *primaryOpenApplication;
@property (nonatomic) unsigned long long screenState;
@property (nonatomic, copy) NSString *secondaryOpenApplication;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *stagedAdHocIdentityCertificateFingerprint;
@property (nonatomic, copy) NSString *studentImageIdentifier;
@property (getter=isSupervised, nonatomic) bool supervised;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic, copy) NSArray *trustedAnchorCertificateFingerprints;
@property (nonatomic, copy) NSString *userDisplayName;
@property (nonatomic, copy) NSString *userFamilyName;
@property (nonatomic, copy) NSString *userGivenName;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *userImageURL;
@property (nonatomic, copy) NSString *userPhoneticFamilyName;
@property (nonatomic, copy) NSString *userPhoneticGivenName;
@property (nonatomic) float volume;

+ (id)CRKKeyForDMFKey:(id)arg1;
+ (id)allPropertyKeys;
+ (id)keyTranslations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeAirPlayRoute;
- (id)allOpenApplications;
- (id)availableAirPlayRoutes;
- (unsigned long long)availableBytes;
- (float)batteryLevel;
- (id)buildVersion;
- (unsigned long long)chargingState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceOrientation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)installedApplications;
- (id)instructorImageIdentifier;
- (unsigned long long)interfaceOrientation;
- (bool)isAppLocked;
- (bool)isApplicationOpen:(id)arg1;
- (bool)isEphemeralMultiUser;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isOrientationLocked;
- (bool)isPasscodeEnabled;
- (bool)isSupervised;
- (unsigned long long)lockState;
- (unsigned long long)loginState;
- (id)managementLockPasscode;
- (id)model;
- (id)name;
- (id)pipOpenApplication;
- (unsigned long long)platform;
- (id)primaryOpenApplication;
- (unsigned long long)screenState;
- (id)secondaryOpenApplication;
- (id)serialNumber;
- (void)setActiveAirPlayRoute:(id)arg1;
- (void)setAllOpenApplications:(id)arg1;
- (void)setAppLocked:(bool)arg1;
- (void)setAvailableAirPlayRoutes:(id)arg1;
- (void)setAvailableBytes:(unsigned long long)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setChargingState:(unsigned long long)arg1;
- (void)setDeviceOrientation:(unsigned long long)arg1;
- (void)setEphemeralMultiUser:(bool)arg1;
- (void)setInstalledApplications:(id)arg1;
- (void)setInstructorImageIdentifier:(id)arg1;
- (void)setInterfaceOrientation:(unsigned long long)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setLoginState:(unsigned long long)arg1;
- (void)setManagementLockPasscode:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrientationLocked:(bool)arg1;
- (void)setPasscodeEnabled:(bool)arg1;
- (void)setPipOpenApplication:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setPrimaryOpenApplication:(id)arg1;
- (void)setScreenState:(unsigned long long)arg1;
- (void)setSecondaryOpenApplication:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStagedAdHocIdentityCertificateFingerprint:(id)arg1;
- (void)setStudentImageIdentifier:(id)arg1;
- (void)setSupervised:(bool)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setTrustedAnchorCertificateFingerprints:(id)arg1;
- (void)setUserDisplayName:(id)arg1;
- (void)setUserFamilyName:(id)arg1;
- (void)setUserGivenName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserImageURL:(id)arg1;
- (void)setUserPhoneticFamilyName:(id)arg1;
- (void)setUserPhoneticGivenName:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVolume:(float)arg1;
- (id)stagedAdHocIdentityCertificateFingerprint;
- (id)studentImageIdentifier;
- (id)systemName;
- (id)systemVersion;
- (id)trustedAnchorCertificateFingerprints;
- (id)userDisplayName;
- (id)userFamilyName;
- (id)userGivenName;
- (id)userIdentifier;
- (id)userImageURL;
- (id)userPhoneticFamilyName;
- (id)userPhoneticGivenName;
- (id)valueForUndefinedKey:(id)arg1;
- (float)volume;

@end
