/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerDelegate> {
    bool  __shouldForceOperation;
    NSDictionary * _authenticationResults;
    <AIDAServiceOwnerProtocol> * _serviceOwnersManager;
    NSString * _serviceType;
}

@property (setter=_setAuthenticationResults:, nonatomic, retain) NSDictionary *_authenticationResults;
@property (setter=_setServiceOwnersManager:, nonatomic, retain) <AIDAServiceOwnerProtocol> *_serviceOwnersManager;
@property (setter=_setShouldForceOperation:, nonatomic) bool _shouldForceOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignInControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowsAccountCreationForService:(id)arg1;
- (void)_attemptSignInForService:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_attemptSignInForServices:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(id /* block */)arg4;
- (id)_authenticationResults;
- (void)_commonInit;
- (id)_continueUsingControllerForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_delegate_signInControllerDidCancel;
- (void)_delegate_signInControllerDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)_isAuthenticatingPrimary:(id)arg1;
- (void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg1 parentViewController:(id)arg2;
- (void)_mainQueue_presentAlertForError:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_mainQueue_presentContinueUsingInViewController:(id)arg1 account:(id)arg2 serviceType:(id)arg3 completion:(id /* block */)arg4;
- (void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_messageStringForService:(id)arg1;
- (void)_performAuthenticationForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_performSilentRenewalWithResults:(id)arg1 completion:(id /* block */)arg2;
- (id)_serviceOwnersManager;
- (void)_setAuthenticationResults:(id)arg1;
- (void)_setServiceOwnersManager:(id)arg1;
- (void)_setShouldForceOperation:(bool)arg1;
- (bool)_shouldForceOperation;
- (bool)_showsServiceIconsForService:(id)arg1;
- (id)_signInViewController;
- (id)_spinnerMessageForService:(id)arg1;
- (id)_spinnerViewController;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareInViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;
- (void)signInViewControllerDidCancel:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
