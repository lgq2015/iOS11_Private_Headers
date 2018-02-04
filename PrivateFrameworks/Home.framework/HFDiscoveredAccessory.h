/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {
    HMAccessory * _accessory;
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    NSDate * _discoveryDate;
    NSError * _error;
    SFDevice * _sharingDevice;
    unsigned long long  _status;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *discoveryDate;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFDevice *sharingDevice;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)accessory;
- (id)accessoryName;
- (id)accessoryUUID;
- (id)description;
- (id)discoveryDate;
- (id)error;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithSharingDevice:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (id)sharingDevice;
- (unsigned long long)status;
- (id)uniqueIdentifier;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;

@end
