/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface _SBUIBiometricKitInterface : NSObject <BKMatchOperationDelegate, BKOperationDelegate> {
    NSSet * _biometricDevices;
    <_SBUIBiometricKitInterfaceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned long long  _enrolledIdentitiesCount;
    int  _enrollmentChangedNotifyToken;
    bool  _isFingerDetected;
    BKDeviceTouchID * _mesaDevice;
    BKDevicePearl * _pearlDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SBUIBiometricKitInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPearlIDCapable, nonatomic, readonly) bool pearlIDCapable;
@property (readonly) Class superclass;
@property (getter=isTouchIDCapable, nonatomic, readonly) bool touchIDCapable;

- (void).cxx_destruct;
- (id)_createPresenceDetectOperationsForDeviceTypes:(id)arg1 error:(id*)arg2;
- (unsigned long long)_eventForLockoutState:(long long)arg1;
- (void)_sendDelegateEvent:(unsigned long long)arg1;
- (void)_setTracker:(id)arg1 forOperation:(id)arg2;
- (id)_trackerForOperation:(id)arg1;
- (id)createFingerDetectOperationsWithError:(id*)arg1;
- (id)createMatchOperationsWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 error:(id*)arg3;
- (id)createPearlDevice;
- (id)createPresenceDetectOperationsWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)enableBackgroundFingerDetection:(bool)arg1 error:(id*)arg2;
- (bool)hasEnrolledIdentities;
- (id)init;
- (bool)isFingerOn;
- (bool)isPearlIDCapable;
- (bool)isTouchIDCapable;
- (unsigned long long)lockoutState;
- (void)matchOperation:(id)arg1 matchedWithResult:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(bool)arg2;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (void)setDelegate:(id)arg1;

@end
