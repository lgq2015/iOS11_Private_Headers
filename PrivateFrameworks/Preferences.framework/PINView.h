/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PINView : UIView <PINEntryView> {
    <PSPINEntryViewDelegate> * _delegate;
    bool  _error;
    UILabel * _errorTitleLabel;
    FailureBarView * _failureView;
    UIButton * _optionsButton;
    id /* block */  _passcodeOptionsHandler;
    UILabel * _pinPolicyLabel;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPINEntryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passcodeOptionsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layoutBottomSubview:(id)arg1 withMinY:(double)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (id)delegate;
- (void)deleteLastCharacter;
- (double)getCurrentTitleFontSize;
- (void)hideError;
- (void)hideFailedAttempts;
- (void)hidePasscodeField:(bool)arg1;
- (void)layoutBottomSubview:(id)arg1 withLabel:(id)arg2 withMinY:(double)arg3;
- (void)layoutSubviews;
- (void)layoutTopLabel:(id)arg1 withMaxY:(double)arg2;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (id)optionsButton;
- (void)optionsButtonTapped;
- (id /* block */)passcodeOptionsHandler;
- (void)setBlocked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(bool)arg2;
- (void)setPasscodeOptionsHandler:(id /* block */)arg1;
- (void)setShowsOptionsButton:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)showError:(id)arg1 animate:(bool)arg2;
- (void)showFailedAttempts:(long long)arg1;
- (id)stringValue;

@end
