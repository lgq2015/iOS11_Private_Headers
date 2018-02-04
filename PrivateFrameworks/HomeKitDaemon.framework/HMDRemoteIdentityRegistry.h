/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteIdentityRegistry : HMFObject <HMFDumpState, HMFLogging> {
    NSMapTable * _accountIdentities;
    NSMapTable * _deviceIdentities;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) NSMapTable *accountIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *deviceIdentities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accountIdentities;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceIdentities;
- (id)dumpState;
- (id)init;
- (id)pairingIdentityForAccount:(id)arg1;
- (id)pairingIdentityForDevice:(id)arg1;
- (id)pairingIdentityForIdentifier:(id)arg1;
- (id)propertyQueue;
- (void)registerPairingIdentity:(id)arg1 forAccount:(id)arg2;
- (void)registerPairingIdentity:(id)arg1 forDevice:(id)arg2;
- (void)reset;
- (id)shortDescription;

@end
