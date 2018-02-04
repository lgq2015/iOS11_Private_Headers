/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, UITextFieldDelegate> {
    UILabel * _bodyLabel;
    UIView * _containerView;
    UIControl * _firstResponder;
    UITextField * _passwordField;
    UIButton * _passwordRecoveryButton;
    PKContinuousButton * _signInButton;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *passwordField;
@property (nonatomic, retain) UIButton *passwordRecoveryButton;
@property (nonatomic, retain) PKContinuousButton *signInButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createViews;
- (void)_hidebusyWorkUI;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (void)_setupConstraints;
- (void)_setupViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_signInButtonEdgeInsets;
- (void)_signInButtonTapped:(id)arg1;
- (void)_startBusyWorkUI;
- (void)_updateViewConstraints;
- (bool)becomeFirstResponder;
- (id)bodyLabel;
- (bool)canBecomeFirstResponder;
- (id)containerView;
- (void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)passwordField;
- (id)passwordRecoveryButton;
- (bool)resignFirstResponder;
- (void)setBodyLabel:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setPasswordRecoveryButton:(id)arg1;
- (void)setSignInButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)signInButton;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
