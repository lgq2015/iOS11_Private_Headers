/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {
    UIColor * _customBackgroundColor;
    <SBUIPasscodeEntryFieldDelegate> * _delegate;
    bool  _ignoreCallbacks;
    NSMutableCharacterSet * _numericTrimmingSet;
    bool  _resigningFirstResponder;
    SBUIPasscodeTextField * _textField;
}

@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPasscodeEntryFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (getter=_textField, nonatomic, readonly) UITextField *textField;

+ (bool)_usesTextFieldForFirstResponder;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)arg1;
- (void)_deleteLastCharacter;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (bool)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(bool)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (id)_textField;
- (struct CGSize { double x1; double x2; })_viewSize;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)customBackgroundColor;
- (id)delegate;
- (void)deleteLastCharacter;
- (id)font;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (bool)isFirstResponder;
- (void)notePasscodeFieldDidAcceptEntry;
- (void)notePasscodeFieldTextDidChange;
- (void)reset;
- (bool)resignFirstResponder;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setStringValue:(id)arg1;
- (bool)shouldInsertPasscodeText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stringValue;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
