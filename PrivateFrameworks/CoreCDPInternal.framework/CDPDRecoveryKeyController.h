/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate> {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    <CDPDAuthProviderInternal> * _internalAuthProvider;
    CDPDPCSController * _pcsController;
    <CDPAuthProviderInternal> * _recoveryAuthProvider;
    <CDPDSecureBackupProxy> * _sbProxy;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CDPDAuthProviderInternal> *internalAuthProvider;
@property (nonatomic, retain) <CDPAuthProviderInternal> *recoveryAuthProvider;
@property (nonatomic, retain) <CDPDSecureBackupProxy> *sbProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (id)circleProxy;
- (void)dealloc;
- (void)deleteRecoveryKey:(id /* block */)arg1;
- (void)enableBackupWithRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (void)generateNewRecoveryKey:(id /* block */)arg1;
- (void)generateRandomRecoveryKey:(id /* block */)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 pcsProxy:(id)arg6;
- (id)internalAuthProvider;
- (void)recoverAndSynchronizeStateWithServer:(id /* block */)arg1;
- (void)recoverDataUsingMasterKeyWithCompletion:(id /* block */)arg1;
- (void)recoverState:(id /* block */)arg1;
- (id)recoveryAuthProvider;
- (id)sbProxy;
- (void)setCircleProxy:(id)arg1;
- (void)setInternalAuthProvider:(id)arg1;
- (void)setRecoveryAuthProvider:(id)arg1;
- (void)setSbProxy:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;

@end
