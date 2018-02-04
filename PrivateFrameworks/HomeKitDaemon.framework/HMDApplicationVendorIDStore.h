/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding> {
    NSMutableDictionary * _applicationMachUUIDMapping;
    NSMutableDictionary * _applicationVendorIdMapping;
    NSObject<OS_dispatch_queue> * _clientQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *applicationMachUUIDMapping;
@property (nonatomic, readonly) NSMutableDictionary *applicationVendorIdMapping;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;

+ (id)sharedStore;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(bool)arg4;
- (void)_extractVendorIDForApplication:(id)arg1;
- (id)_machUUIDsForApplication:(id)arg1;
- (void)_save;
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(bool)arg4;
- (id)_vendorIDForApplication:(id)arg1;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(bool)arg3;
- (void)addVendorIDData:(id)arg1 applicationBundleId:(id)arg2;
- (id)applicationMachUUIDMapping;
- (id)applicationVendorIdMapping;
- (void)checkCorrectness;
- (id)clientQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)machUUIDsForApplication:(id)arg1;
- (void)removeVendorIDForApplicationBundleId:(id)arg1;
- (id)vendorIDForApplication:(id)arg1;

@end
