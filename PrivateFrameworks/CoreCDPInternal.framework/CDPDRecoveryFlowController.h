/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryFlowController : NSObject <CDPDDeviceSecretValidatorDelegate> {
    CDPDCircleController * _circleController;
    CDPDRecoveryFlowContext * _recoveryContext;
    NSObject<OS_os_activity> * _recoveryFlow;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
    <CDPRemoteDeviceSecretValidatorProtocol> * _validator;
}

@property (nonatomic, retain) CDPDCircleController *circleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CDPDRecoveryFlowContext *recoveryContext;
@property (nonatomic, retain) CDPDSecureBackupController *secureBackupController;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;
@property (nonatomic, retain) <CDPRemoteDeviceSecretValidatorProtocol> *validator;

- (void).cxx_destruct;
- (void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(bool)arg2 usingValidator:(id)arg3;
- (void)beginRecovery:(id /* block */)arg1;
- (id)circleController;
- (void)dealloc;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 secureBackupController:(id)arg3 circleProxy:(id)arg4;
- (id)recoveryContext;
- (id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)retrieveInflatedDevices:(id /* block */)arg1;
- (void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (id)secureBackupController;
- (void)setCircleController:(id)arg1;
- (void)setRecoveryContext:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (void)setValidator:(id)arg1;
- (id)uiProvider;
- (id)validator;

@end
