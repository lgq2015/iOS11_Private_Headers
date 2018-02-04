/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricKitXPCExportedObject : NSObject <BiometricKitXpcProtocol> {
    NSMutableDictionary * _clients;
    NSXPCConnection * _connection;
    BiometricKitXPCServer * _server;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BiometricKitXPCServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (id)client:(unsigned long long)arg1;
- (id)clients;
- (void)completeEnrollment:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)connect:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (id)connection;
- (void)dealloc;
- (void)detectPresenceWithOptions:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)diagnostics:(int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)disconnect:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)dropUnlockToken:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)enableBackgroundFdet:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)enroll:(int)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(id /* block */)arg5;
- (void)enrollContinue:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)fileRadarWithLogs:(id)arg1 description:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)forceBioLockoutForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)getAugmentationEligibilityForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getBioLockoutStateForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getBiometryAvailabilityForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getCalibrationDataInfo:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getCountersignedStoreToken:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getDeviceState:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getFreeIdentityCount:(int)arg1 user:(unsigned int)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getIdentityFromUUID:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getLogs:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getMaxIdentityCount:(int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getNodeTopologyForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getProtectedConfigurationForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getProvisioningState:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSensorCalibrationStatus:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSensorInfo:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSystemProtectedConfiguration:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)identities:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (id)init;
- (void)isAriadneSignpostsEnabled:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)isFingerOn:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)isXARTAvailable:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)match:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)notifyAppIsBackground:(bool)arg1 client:(unsigned long long)arg2;
- (void)notifyAppIsInactive:(bool)arg1 client:(unsigned long long)arg2;
- (void)pullAlignmentData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullCalibrationData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullCaptureBuffer:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)pullMatchPolicyInfoData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)registerDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)registerDelegate:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)registerStoreToken:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)removeIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)resetAppleConnectCounter:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (id)server;
- (void)setConnection:(id)arg1;
- (void)setDebugImages:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)setProtectedConfiguration:(id)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(id /* block */)arg5;
- (void)setServer:(id)arg1;
- (void)setSystemProtectedConfiguration:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)setTemplate:(id)arg1 forIdentity:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)setUserDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)startNewMatchAttempt:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)suspendEnrollment:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)terminate;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)updateIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;

@end
