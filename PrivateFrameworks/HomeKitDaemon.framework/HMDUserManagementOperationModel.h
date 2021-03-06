/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (nonatomic, retain) HAPPairingIdentity *accessoryPairingIdentity;
@property (nonatomic, retain) NSArray *dependencies;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSNumber *operationType;
@property (nonatomic, retain) HAPPairingIdentity *ownerPairingIdentity;
@property (nonatomic, retain) HAPPairingIdentity *userPairingIdentity;

+ (id)properties;

- (id)dependentUUIDs;

@end
