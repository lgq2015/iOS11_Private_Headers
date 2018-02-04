/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDevice : NSObject {
    _IDSDevice * _internal;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (nonatomic, readonly) HMDDeviceCapabilities *hmd_capabilities;
@property (nonatomic, readonly) HMFProductInfo *hmd_productInfo;
@property (nonatomic, readonly) HMDHomeKitVersion *hmd_version;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCloudConnected;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly) bool isHSATrusted;
@property (nonatomic, readonly) bool isLocallyPaired;
@property (nonatomic, readonly) NSDate *lastActivityDate;
@property (nonatomic, readonly) NSArray *linkedUserURIs;
@property (nonatomic, readonly) bool locallyPresent;
@property (nonatomic, readonly) unsigned long long maxCompatibilityVersion;
@property (nonatomic, readonly) unsigned long long minCompatibilityVersion;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (getter=isNearby, nonatomic, readonly) bool nearby;
@property (setter=setNSUUID:, nonatomic, retain) NSUUID *nsuuid;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly) unsigned long long pairingProtocolVersion;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) unsigned long long serviceMinCompatibilityVersion;
@property (nonatomic, readonly) bool supportsApplePay;
@property (nonatomic, readonly) bool supportsHandoff;
@property (nonatomic, readonly) bool supportsMMSRelay;
@property (nonatomic, readonly) bool supportsPhoneCalls;
@property (nonatomic, readonly) bool supportsSMSRelay;
@property (nonatomic, readonly) bool supportsTethering;
@property (nonatomic, readonly) bool supportsiCloudPairing;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *uniqueIDOverride;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

- (void).cxx_destruct;
- (void)_addIdentity:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)_internal;
- (void)_setAccount:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (id)fullDescription;
- (id)identities;
- (id)initWithDictionary:(id)arg1;
- (bool)isActive;
- (bool)isCloudConnected;
- (bool)isConnected;
- (bool)isDefaultPairedDevice;
- (bool)isHSATrusted;
- (bool)isLocallyPaired;
- (bool)isNearby;
- (id)lastActivityDate;
- (id)linkedUserURIs;
- (bool)locallyPresent;
- (unsigned long long)maxCompatibilityVersion;
- (unsigned long long)minCompatibilityVersion;
- (id)modelIdentifier;
- (id)name;
- (id)nsuuid;
- (int)openSocketForDomain:(id)arg1;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (unsigned long long)pairingProtocolVersion;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)pushToken;
- (id)service;
- (unsigned long long)serviceMinCompatibilityVersion;
- (void)setNSUUID:(id)arg1;
- (int)socketForDomain:(id)arg1;
- (bool)supportsApplePay;
- (bool)supportsHandoff;
- (bool)supportsMMSRelay;
- (bool)supportsPhoneCalls;
- (bool)supportsSMSRelay;
- (bool)supportsTethering;
- (bool)supportsiCloudPairing;
- (id)uniqueID;
- (id)uniqueIDOverride;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (bool)isWatch;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_destinationIdentifier;
- (id)hd_deviceIdentifier;
- (bool)hd_isEquivalentToDevice:(id)arg1;
- (id)hd_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_capabilities;
- (id)hmd_productInfo;
- (id)hmd_version;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_idsDestination;
- (bool)pk_isApplePayCapable;

@end
