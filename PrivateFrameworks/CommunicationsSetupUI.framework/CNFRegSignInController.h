/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {
    PSSpecifier * _actionGroupSpecifier;
    PSSpecifier * _createAccountButtonSpecifier;
    bool  _hideLearnMoreButton;
    CNFRegLearnMoreButton * _learnMoreButton;
    PSSpecifier * _passwordSpecifier;
    NSString * _pendingPassword;
    NSString * _pendingUsername;
    PSSpecifier * _signInButtonSpecifier;
    unsigned long long  _signinFailureCount;
    bool  _useSystemAccount;
    PSSpecifier * _usernameSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideLearnMoreButton;
@property (nonatomic, copy) NSString *pendingPassword;
@property (nonatomic, copy) NSString *pendingUsername;
@property (nonatomic) unsigned long long signinFailureCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__userTappedTextField;
- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_finishSignInWithAccount:(id)arg1 animated:(bool)arg2;
- (void)_handleTimeout;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_layoutLearnMoreButton;
- (void)_loadRegionsIfNecessary;
- (void)_resetSigninFailureCount;
- (void)_resignFirstResponders;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)_setupEventHandlers;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showSigninFailureAlert;
- (void)_startTimeout;
- (void)_updateControllerState;
- (void)_updateUI;
- (void)applicationDidResume;
- (id)bundle;
- (void)cancelButtonTapped;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (void)forgotIDButtonTapped;
- (id)getPasswordForSpecifier:(id)arg1;
- (id)getUserNameForSpecifier:(id)arg1;
- (void)handleURL:(id)arg1;
- (bool)hideLearnMoreButton;
- (void)learnMorePressed:(id)arg1;
- (void)loadView;
- (id)logName;
- (void)passwordFieldDidBeginEditing:(id)arg1;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (bool)passwordIsEmpty;
- (id)passwordTextField;
- (id)pendingPassword;
- (id)pendingUsername;
- (void)setCreateAccountButtonEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setHideLearnMoreButton:(bool)arg1;
- (void)setPasswordEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setPasswordText:(id)arg1;
- (void)setPendingPassword:(id)arg1;
- (void)setPendingUsername:(id)arg1;
- (void)setSignInButtonEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setSigninFailureCount:(unsigned long long)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setUsernameEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setUsernameText:(id)arg1;
- (void)showCreateAccountController;
- (void)signInTapped:(id)arg1;
- (void)signInWithUsername:(id)arg1 password:(id)arg2;
- (unsigned long long)signinFailureCount;
- (id)specifierList;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)usernameFieldDidBeginEditing:(id)arg1;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (bool)usernameIsEmpty;
- (id)usernameTextField;
- (id)validationString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
