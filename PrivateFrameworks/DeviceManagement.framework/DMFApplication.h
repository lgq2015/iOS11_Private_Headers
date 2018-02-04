/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _adamID;
    NSString * _applicationIdentifier;
    NSString * _applicationType;
    NSDictionary * _attributes;
    NSNumber * _betaExternalVersionIdentifier;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSDictionary * _configuration;
    NSNumber * _dynamicUsage;
    NSNumber * _externalVersionIdentifier;
    NSDictionary * _feedback;
    bool  _fileSharingEnabled;
    NSData * _iconData;
    bool  _isAppUpdate;
    bool  _isBetaApp;
    bool  _isInstalled;
    bool  _isManaged;
    bool  _isPlaceholder;
    bool  _isRemoveable;
    bool  _isValidated;
    unsigned long long  _managementFlags;
    NSString * _name;
    NSNumber * _onDemandResourcesUsage;
    DMFApplicationInstallProgress * _progress;
    NSString * _shortVersionString;
    unsigned long long  _state;
    NSNumber * _staticUsage;
    NSString * _unusedRedemptionCode;
}

@property (nonatomic, readonly, copy) NSNumber *adamID;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *applicationType;
@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly, copy) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleVersion;
@property (nonatomic, readonly, copy) NSDictionary *configuration;
@property (nonatomic, readonly, copy) NSNumber *dynamicUsage;
@property (nonatomic, readonly, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *feedback;
@property (nonatomic, readonly) bool fileSharingEnabled;
@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, readonly) bool isAppUpdate;
@property (nonatomic, readonly) bool isBetaApp;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isRemoveable;
@property (nonatomic, readonly) bool isValidated;
@property (nonatomic, readonly) unsigned long long managementFlags;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *onDemandResourcesUsage;
@property (nonatomic, readonly) DMFApplicationInstallProgress *progress;
@property (nonatomic, readonly, copy) NSString *shortVersionString;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, copy) NSNumber *staticUsage;
@property (nonatomic, readonly, copy) NSString *unusedRedemptionCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)attributes;
- (id)betaExternalVersionIdentifier;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (Class)classForCoder;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)feedback;
- (bool)fileSharingEnabled;
- (unsigned long long)hash;
- (id)iconData;
- (id)initWithApplicationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 iconData:(id)arg4 bundleVersion:(id)arg5 shortVersionString:(id)arg6 applicationType:(id)arg7 adamID:(id)arg8 externalVersionIdentifier:(id)arg9 betaExternalVersionIdentifier:(id)arg10 staticUsage:(id)arg11 dynamicUsage:(id)arg12 onDemandResourcesUsage:(id)arg13 unusedRedemptionCode:(id)arg14 attributes:(id)arg15 configuration:(id)arg16 feedback:(id)arg17 state:(unsigned long long)arg18 managementFlags:(unsigned long long)arg19 isManaged:(bool)arg20 isValidated:(bool)arg21 isInstalled:(bool)arg22 isPlaceholder:(bool)arg23 isAppUpdate:(bool)arg24 isBetaApp:(bool)arg25 isRemoveable:(bool)arg26 fileSharingEnabled:(bool)arg27 progress:(id)arg28;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 applicationType:(id)arg4 adamID:(id)arg5 externalVersionNumber:(id)arg6 betaExternalVersionIdentifier:(id)arg7 isInstalled:(bool)arg8 isPlaceholder:(bool)arg9 isAppUpdate:(bool)arg10 isBetaApp:(bool)arg11 isRemoveable:(bool)arg12 fileSharingEnabled:(bool)arg13 progress:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (bool)isAppUpdate;
- (bool)isBetaApp;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isManaged;
- (bool)isPlaceholder;
- (bool)isRemoveable;
- (bool)isValidated;
- (unsigned long long)managementFlags;
- (id)name;
- (id)onDemandResourcesUsage;
- (id)progress;
- (id)shortVersionString;
- (unsigned long long)state;
- (id)staticUsage;
- (id)unusedRedemptionCode;

@end
