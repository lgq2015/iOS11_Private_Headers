/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitXPCClient : NSObject {
    unsigned long long  _clientID;
    long long  _clientType;
    BiometricKitXPCClientConnection * _connection;
    bool  _connectionInitialized;
    bool  _connectionInvalidated;
    <BiometricKitDelegateXpcProtocol> * _delegate;
}

@property (nonatomic, readonly) unsigned long long clientID;
@property (nonatomic, readonly) unsigned long long connectionId;
@property (nonatomic) <BiometricKitDelegateXpcProtocol> *delegate;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)clientID;
- (int)completeEnrollment;
- (int)connect;
- (unsigned long long)connectionId;
- (void)dealloc;
- (id)delegate;
- (void)detectPresenceWithOptions:(id)arg1 async:(bool)arg2 withReply:(id /* block */)arg3;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4;
- (void)disconnect;
- (int)dropUnlockToken;
- (int)enableBackgroundFdet:(bool)arg1;
- (void)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 async:(bool)arg4 withReply:(id /* block */)arg5;
- (int)enrollContinue;
- (int)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 outData:(id*)arg3;
- (bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)getAugmentationEligibility:(bool*)arg1 forIdentity:(id)arg2;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned int)arg2;
- (id)getCalibrationDataInfo;
- (int)getCountersignedStoreToken:(id*)arg1;
- (long long)getDeviceState;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(bool)arg1 withDetails:(id*)arg2;
- (long long)getMaxIdentityCount:(int)arg1;
- (id)getNodeTopologyForIdentity:(id)arg1;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getSensorInfo;
- (id)getSystemProtectedConfiguration;
- (id)identities:(id)arg1;
- (id)init;
- (id)initWithDeviceType:(long long)arg1 clientType:(long long)arg2;
- (int)initializeConnection;
- (void)interruptConnection;
- (void)invalidateConnection;
- (bool)isAriadneSignpostsEnabled;
- (bool)isFingerOn;
- (bool)isXARTAvailable;
- (void)match:(id)arg1 withOptions:(id)arg2 async:(bool)arg3 withReply:(id /* block */)arg4;
- (void)notifyAppIsBackground:(bool)arg1;
- (void)notifyAppIsInactive:(bool)arg1;
- (id)pullAlignmentData;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 imageWidth:(unsigned int*)arg3 imageHeight:(unsigned int*)arg4;
- (id)pullMatchPolicyInfoData;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)registerDelegate:(bool)arg1;
- (void)registerDelegateCall:(bool)arg1;
- (int)registerStoreToken:(id)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)resetAppleConnectCounter;
- (void)setDebugImages:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)startNewMatchAttempt;
- (int)suspendEnrollment:(bool)arg1;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;

@end
