/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate> {
    id /* block */  _ak_authenticateAction;
    NSString * _ak_authenticateButtonTitle;
    id /* block */  _ak_cancelAction;
    id /* block */  _ak_codeEnteredAction;
    id /* block */  _ak_createIDAction;
    id /* block */  _ak_forgotIDAction;
    id /* block */  _ak_forgotPasswordAction;
    NSString * _ak_password;
    NSString * _ak_reason;
    id /* block */  _ak_regenerateCodeAction;
    NSString * _ak_title;
    id /* block */  _ak_useIDAction;
    NSString * _ak_username;
    long long  _alertStyle;
    id  _codeEntryObserver;
    <AKBasicLoginAlertControllerDelegate> * _delegate;
    NSString * _generatedCode;
}

@property (nonatomic, copy) id /* block */ ak_cancelAction;
@property (nonatomic) long long alertStyle;
@property (nonatomic, copy) id /* block */ authenticateAction;
@property (nonatomic, copy) NSString *authenticateButtonTitle;
@property (nonatomic, copy) NSString *authenticateTitle;
@property (nonatomic, copy) id /* block */ codeEnteredAction;
@property (nonatomic, copy) id /* block */ createIDAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKBasicLoginAlertControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ forgotIDAction;
@property (nonatomic, copy) id /* block */ forgotPasswordAction;
@property (nonatomic, copy) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) id /* block */ regenerateCodeAction;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ useIDAction;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)_interpolatedReasonString;
- (void)_jiggleTheAlert;
- (void)_setupAuthenticateAndCancelButtons;
- (void)_setupViewControllerForAlertStyle;
- (void)_setupViewControllerForDefaultStyle;
- (void)_setupViewControllerForIForgotStyle;
- (void)_setupViewControllerForNonEditableUsernameFieldStyle;
- (void)_setupViewControllerForSecondFactorEntryStyle;
- (void)_setupViewControllerForUserOrCreateAppleIDStyle;
- (void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
- (id)_wrappedCancelAction;
- (id /* block */)ak_cancelAction;
- (long long)alertStyle;
- (id /* block */)authenticateAction;
- (id)authenticateButtonTitle;
- (id)authenticateTitle;
- (void)clearSecondFactorEntry;
- (id /* block */)codeEnteredAction;
- (id /* block */)createIDAction;
- (void)dealloc;
- (id)delegate;
- (bool)disablesAutomaticKeyboardDismissal;
- (void)dismissAndShowiForgot;
- (id /* block */)forgotIDAction;
- (id /* block */)forgotPasswordAction;
- (id)generatedCode;
- (id)initWithAlertStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)password;
- (id)reason;
- (id /* block */)regenerateCodeAction;
- (void)setAk_cancelAction:(id /* block */)arg1;
- (void)setAlertStyle:(long long)arg1;
- (void)setAuthenticateAction:(id /* block */)arg1;
- (void)setAuthenticateButtonTitle:(id)arg1;
- (void)setAuthenticateTitle:(id)arg1;
- (void)setCodeEnteredAction:(id /* block */)arg1;
- (void)setCreateIDAction:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForgotIDAction:(id /* block */)arg1;
- (void)setForgotPasswordAction:(id /* block */)arg1;
- (void)setGeneratedCode:(id)arg1;
- (void)setPasscodeFieldDisabled:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRegenerateCodeAction:(id /* block */)arg1;
- (void)setUseIDAction:(id /* block */)arg1;
- (void)setUsername:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (bool)textFieldShouldReturn:(id)arg1;
- (id /* block */)useIDAction;
- (id)username;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
