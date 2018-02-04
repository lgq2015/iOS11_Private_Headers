/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    bool  _addAndSetupAccessories;
    NSString * _appIdentifier;
    HMAccessoryCategory * _category;
    NSString * _homeName;
    NSUUID * _homeUUID;
    bool  _legacyAPI;
    bool  _paired;
    HMSetupAccessoryPayload * _setupAccessoryPayload;
    NSString * _setupCode;
    NSString * _setupID;
    bool  _supportsBTLE;
    bool  _supportsIP;
    bool  _supportsWAC;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSUUID *accessoryUUID;
@property (nonatomic) bool addAndSetupAccessories;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic) bool legacyAPI;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, retain) HMSetupAccessoryPayload *setupAccessoryPayload;
@property (nonatomic, readonly) NSString *setupCode;
@property (nonatomic, readonly) NSString *setupID;
@property (nonatomic, readonly) bool supportsBTLE;
@property (nonatomic, readonly) bool supportsIP;
@property (nonatomic, readonly) bool supportsWAC;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)setupAccessoryProgressAsString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)accessoryUUID;
- (bool)addAndSetupAccessories;
- (id)appIdentifier;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeName;
- (id)homeUUID;
- (id)initToSetupAccessories:(id)arg1 legacyAPI:(bool)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)legacyAPI;
- (void)setAccessoryName:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setAddAndSetupAccessories:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setLegacyAPI:(bool)arg1;
- (void)setSetupAccessoryPayload:(id)arg1;
- (id)setupAccessoryPayload;
- (id)setupCode;
- (id)setupID;
- (bool)supportsBTLE;
- (bool)supportsIP;
- (bool)supportsWAC;
- (void)updateAppIdentifier:(id)arg1;
- (void)updateWithAccessory:(id)arg1;
- (void)updateWithSetupAccessoryPayload:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)debugDescription;

@end
