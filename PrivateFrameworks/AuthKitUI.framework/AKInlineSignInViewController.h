/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate> {
    AKTextField * _appleIDField;
    long long  _blurEffectStyle;
    AKAppleIDAuthenticationInAppContext * _context;
    UIButton * _createAppleIDButton;
    UIButton * _iforgotButton;
    UIView * _loginFieldsContainer;
    AKTextField * _passwordField;
    NSString * _primaryButtonTitle;
    NSString * _secondaryButtonTitle;
    UIButton * _signInButton;
    UIActivityIndicatorView * _spinner;
    NSString * _tertiaryButtonTitle;
    bool  _usesDarkMode;
    bool  _usesVibrancy;
    bool  _wantsAuthenticationProgress;
}

@property (retain) AKTextField *appleIDField;
@property (nonatomic) long long blurEffectStyle;
@property (retain) UIButton *createAppleIDButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIButton *iforgotButton;
@property (retain) UIView *loginFieldsContainer;
@property (retain) AKTextField *passwordField;
@property (readonly) NSString *primaryButtonTitle;
@property (copy) NSString *secondaryButtonTitle;
@property (retain) UIButton *signInButton;
@property (retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (copy) NSString *tertiaryButtonTitle;
@property (nonatomic) bool usesVibrancy;
@property bool wantsAuthenticationProgress;

- (void).cxx_destruct;
- (void)_appleIDTextFieldDidChange:(id)arg1;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1;
- (void)_hidebusyWorkUI;
- (void)_passwordTextFieldDidChange:(id)arg1;
- (void)_prefillAuthFields;
- (void)_startBusyWorkUI;
- (void)_updateFonts:(id)arg1;
- (void)_updatePlaceholderIfNeeded;
- (void)_updateSignInButtonState;
- (void)_updateSignInFieldStatuses;
- (void)_updateVibrancyAndBlurInTextFields;
- (id)appleIDField;
- (long long)blurEffectStyle;
- (id)context;
- (id)createAppleIDButton;
- (void)createAppleIDButtonWasTapped:(id)arg1;
- (void)dealloc;
- (void)iForgotButtonWasTapped:(id)arg1;
- (id)iforgotButton;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)loginFieldsContainer;
- (id)passwordField;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (void)setAppleIDField:(id)arg1;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setCreateAppleIDButton:(id)arg1;
- (void)setIforgotButton:(id)arg1;
- (void)setLoginFieldsContainer:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setSecondaryButtonTitle:(id)arg1;
- (void)setSignInButton:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setTertiaryButtonTitle:(id)arg1;
- (void)setUsesDarkMode:(bool)arg1;
- (void)setUsesVibrancy:(bool)arg1;
- (void)setWantsAuthenticationProgress:(bool)arg1;
- (id)signInButton;
- (void)signInButtonWasTapped:(id)arg1;
- (id)spinner;
- (id)tertiaryButtonTitle;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)usesDarkMode;
- (bool)usesVibrancy;
- (void)viewDidLoad;
- (bool)wantsAuthenticationProgress;

@end
