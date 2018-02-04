/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDevice : NSObject <HFHomeKitObject, NSSecureCoding> {
    bool  _autoUnlockEnabled;
    bool  _autoUnlockWatch;
    NSArray * _batteryInfo;
    SFBLEDevice * _bleDevice;
    NSString * _contactIdentifier;
    unsigned char  _deviceActionType;
    unsigned char  _deviceClassCode;
    unsigned char  _deviceModelCode;
    long long  _deviceType;
    long long  _distance;
    bool  _hasProblem;
    NSUUID * _identifier;
    NSString * _idsIdentifier;
    NSString * _model;
    NSString * _name;
    bool  _needsKeyboard;
    bool  _needsSetup;
    unsigned char  _osVersion;
    bool  _paired;
    NSString * _requestSSID;
    SFProximityEstimator * _setupProximityEstimator;
    unsigned int  _systemPairState;
    bool  _wakeDevice;
    bool  _watchLocked;
}

@property (nonatomic) bool autoUnlockEnabled;
@property (nonatomic) bool autoUnlockWatch;
@property (nonatomic, copy) NSArray *batteryInfo;
@property (nonatomic, retain) SFBLEDevice *bleDevice;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic, readonly) unsigned char deviceModelCode;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic) long long distance;
@property (nonatomic) bool hasProblem;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool needsKeyboard;
@property (nonatomic) bool needsSetup;
@property (nonatomic) unsigned char osVersion;
@property (nonatomic) bool paired;
@property (nonatomic, copy) NSString *requestSSID;
@property (nonatomic, retain) SFProximityEstimator *setupProximityEstimator;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic) bool wakeDevice;
@property (nonatomic) bool watchLocked;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)autoUnlockEnabled;
- (bool)autoUnlockWatch;
- (id)batteryInfo;
- (id)bleDevice;
- (id)contactIdentifier;
- (id)description;
- (unsigned char)deviceActionType;
- (unsigned char)deviceClassCode;
- (unsigned char)deviceModelCode;
- (long long)deviceType;
- (long long)distance;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasProblem;
- (id)identifier;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (bool)needsKeyboard;
- (bool)needsSetup;
- (unsigned char)osVersion;
- (bool)paired;
- (id)requestSSID;
- (void)setAutoUnlockEnabled:(bool)arg1;
- (void)setAutoUnlockWatch:(bool)arg1;
- (void)setBatteryInfo:(id)arg1;
- (void)setBleDevice:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDeviceClassCode:(unsigned char)arg1;
- (void)setDistance:(long long)arg1;
- (void)setHasProblem:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsSetup:(bool)arg1;
- (void)setOsVersion:(unsigned char)arg1;
- (void)setPaired:(bool)arg1;
- (void)setRequestSSID:(id)arg1;
- (void)setSetupProximityEstimator:(id)arg1;
- (void)setSystemPairState:(unsigned int)arg1;
- (void)setWakeDevice:(bool)arg1;
- (void)setWatchLocked:(bool)arg1;
- (id)setupProximityEstimator;
- (unsigned int)systemPairState;
- (void)updateWithBLEDevice:(id)arg1;
- (void)updateWithPairedPeer:(id)arg1;
- (bool)wakeDevice;
- (bool)watchLocked;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)uniqueIdentifier;

@end
