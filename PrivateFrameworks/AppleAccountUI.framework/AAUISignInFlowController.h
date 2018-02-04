/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignInFlowController : NSObject <AAUIAccountRepairRemoteUIDelegate, AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate> {
    AAUIAccountRepairRemoteUI * _accountRepairRemoteUI;
    ACAccountStore * _accountStore;
    unsigned long long  _activationAction;
    ACAccountType * _appleAccountType;
    NSMutableDictionary * _cdpContextsByAccountID;
    NSLock * _cdpContextsByAccountIDLock;
    AAUIGenericTermsRemoteUI * _genericTermsRemoteUI;
    CUMessageSession * _messageSession;
    id /* block */  _pendingCompletion;
    UIViewController * _presentingViewController;
    bool  _shouldAutomaticallySaveSignInResults;
    bool  _shouldStashLoginResponse;
}

@property (nonatomic) unsigned long long activationAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CUMessageSession *messageSession;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) bool shouldAutomaticallySaveSignInResults;
@property (nonatomic) bool shouldHideActivationLockAlert;
@property (nonatomic) bool shouldStashLoginResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleAccountType;
- (bool)_carrierBundleSaysHideFindMyiPhone;
- (void)_hasActivationLockSupportedWatchWithCompletion:(id /* block */)arg1;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)arg2;
- (void)_showGenericTermsUIforAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_showSecondFactorUIForAccount:(id)arg1 loginResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 completion:(id /* block */)arg2;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;
- (void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(bool)arg2 response:(id)arg3 error:(id)arg4 completion:(id /* block */)arg5;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(bool)arg3;
- (unsigned long long)activationAction;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)init;
- (id)messageSession;
- (id)presentingViewController;
- (void)setActivationAction:(unsigned long long)arg1;
- (void)setMessageSession:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setShouldAutomaticallySaveSignInResults:(bool)arg1;
- (void)setShouldHideActivationLockAlert:(bool)arg1;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (bool)shouldAutomaticallySaveSignInResults;
- (bool)shouldHideActivationLockAlert;
- (bool)shouldStashLoginResponse;
- (void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(id /* block */)arg2;

@end
