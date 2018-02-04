/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol> {
    BKDeviceDescriptor * _descriptor;
    BiometricKitXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BKDeviceDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)biometryAvailabilityInfo:(long long*)arg1 fromDeviceInfo:(long long)arg2 error:(id*)arg3;
+ (bool)deviceAvailableWithError:(id*)arg1;
+ (id)deviceWithDescriptor:(id)arg1 error:(id*)arg2;
+ (bool)lockoutState:(long long*)arg1 fromDeviceLockoutState:(int)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)bioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (bool)biometryAvailability:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (id)createEnrollOperationWithError:(id*)arg1;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (void)dealloc;
- (id)descriptor;
- (bool)dropAllUnlockTokensWithError:(id*)arg1;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (bool)forceBioLockoutForAllUsersWithError:(id*)arg1;
- (bool)forceBioLockoutForUser:(unsigned int)arg1 error:(id*)arg2;
- (bool)forceBioLockoutIfLockedForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)freeIdentityCountForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)identitiesDatabaseHashForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesWithError:(id*)arg1;
- (id)identityForUUID:(id)arg1 error:(id*)arg2;
- (bool)isDelegate;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)maxIdentityCountWithError:(id*)arg1;
- (id)protectedConfigurationForUser:(unsigned int)arg1 error:(id*)arg2;
- (bool)removeAllIdentitiesForUser:(unsigned int)arg1 error:(id*)arg2;
- (bool)removeIdentity:(id)arg1 error:(id*)arg2;
- (void)setDescriptor:(id)arg1;
- (bool)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 error:(id*)arg4;
- (bool)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id*)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (id)systemProtectedConfigurationWithError:(id*)arg1;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(bool)arg1 client:(unsigned long long)arg2;
- (bool)updateIdentity:(id)arg1 error:(id*)arg2;

@end
