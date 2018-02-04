/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricKitXPCServer : NSObject <CMWakeGestureDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _cmdDispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cmdDispatchQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2;
+ (bool)isCayman;
+ (bool)isEVTorNewer;
+ (bool)isPreferenceKeySet:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;

- (int)cancelWithClient:(id)arg1;
- (id)cmdDispatchQueue;
- (int)completeEnrollmentWithClient:(id)arg1;
- (int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4 withClient:(id)arg5;
- (int)dropUnlockTokenWithClient:(id)arg1;
- (int)enableBackgroundFdet:(bool)arg1 withClient:(id)arg2;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (int)enrollContinue;
- (void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (int)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 outData:(id*)arg3 withClient:(id)arg4;
- (bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)getAugmentationEligibility:(bool*)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getBioLog;
- (int)getBiometrickitdInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; }*)arg1;
- (int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (long long)getCalBlobVersion;
- (id)getCalibrationDataInfoWithClient:(id)arg1;
- (long long)getCalibrationDataState;
- (int)getCountersignedStoreToken:(id*)arg1 withClient:(id)arg2;
- (long long)getDeviceStateWithClient:(id)arg1;
- (bool)getEnabledForUnlock;
- (long long)getEnrollmentCount;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2;
- (unsigned long long)getLoggingType;
- (id)getLogs:(bool)arg1 withDetails:(id*)arg2;
- (long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2;
- (float)getModulationRatio;
- (id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1 withClient:(id)arg2;
- (long long)getProvisioningStateWithClient:(id)arg1;
- (unsigned long long)getSKSLockStateForUser:(unsigned int)arg1;
- (long long)getSensorCalibrationStatusWithClient:(id)arg1;
- (id)getSensorInfoWithClient:(id)arg1;
- (id)getSerialisedTemplatesForUser:(unsigned int)arg1;
- (id)getSystemProtectedConfigurationWithClient:(id)arg1;
- (unsigned int)getTemplateListCRCForUser:(unsigned int)arg1;
- (int)getTimestampCollection:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned char x8; }*)arg1;
- (id)identities:(id)arg1 withClient:(id)arg2;
- (id)identitiesOfUser:(unsigned int)arg1;
- (id)init;
- (bool)isAriadneSignpostsEnabled;
- (bool)isClassCFileAccessible;
- (bool)isDisplayOn;
- (bool)isEphemeralMultiUser;
- (bool)isFingerOnWithClient:(id)arg1;
- (bool)isInternalBuild;
- (bool)isXARTAvailableWithClient:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)notifyAppIsInactive:(bool)arg1 withClient:(id)arg2;
- (id)pullAlignmentData;
- (id)pullCalibrationDataWithClient:(id)arg1;
- (id)pullCaptureBufferWithClient:(id)arg1;
- (id)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 hasWidth:(unsigned int*)arg3 hasHeight:(unsigned int*)arg4 withClient:(id)arg5;
- (id)pullMatchPolicyInfoData;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)registerDelegate:(bool)arg1 withClient:(id)arg2;
- (int)registerStoreToken:(id)arg1 withClient:(id)arg2;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)resetAppleConnectCounterWithClient:(id)arg1;
- (void)sbStatus;
- (int)setAppleMesaSEPLoggingLevel;
- (int)setDebugImages:(bool)arg1 withClient:(id)arg2;
- (int)setIORegistryProperty:(id)arg1 toValue:(id)arg2 onService:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)startNewMatchAttemptWithClient:(id)arg1;
- (void)statusMessage:(unsigned int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;
- (int)suspendEnrollment:(bool)arg1 withClient:(id)arg2;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end
