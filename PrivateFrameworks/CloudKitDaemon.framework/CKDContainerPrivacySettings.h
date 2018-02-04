/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerPrivacySettings : NSObject {
    NSSet * _applicationBundleIDs;
    CKContainerID * _containerID;
    long long  _discoverable;
}

@property (nonatomic, copy) NSSet *applicationBundleIDs;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic) long long discoverable;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationBundleIDs;
- (id)containerID;
- (id)description;
- (long long)discoverable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setApplicationBundleIDs:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setDiscoverable:(long long)arg1;

@end
