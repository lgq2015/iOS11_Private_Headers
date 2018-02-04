/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    bool  _convertsNumeralsToASCII;
    bool  _hidesNextButton;
    unsigned long long  _numberOfPasscodeFields;
    bool  _secureTextEntry;
    PSTableCell * _textEntryCell;
    PSSpecifier * _textEntrySpecifier;
    int  _textEntryType;
    UIView<UIKeyInput> * _textEntryView;
    bool  _textFieldHasRoundBorder;
    NSString * _textValue;
}

@property (nonatomic) bool convertsNumeralsToASCII;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNextButton;
@property (nonatomic) unsigned long long numberOfPasscodeFields;
@property (nonatomic) bool secureTextEntry;
@property (readonly) Class superclass;
@property (nonatomic) int textEntryType;
@property (nonatomic) bool textFieldHasRoundBorder;
@property (nonatomic, retain) NSString *textValue;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)convertsNumeralsToASCII;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)getTextValueForSpecifier:(id)arg1;
- (bool)hidesNextButton;
- (id)init;
- (void)loadView;
- (void)nextPressed;
- (unsigned long long)numberOfPasscodeFields;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (bool)secureTextEntry;
- (void)setConvertsNumeralsToASCII:(bool)arg1;
- (void)setHidesNextButton:(bool)arg1;
- (void)setNumberOfPasscodeFields:(unsigned long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setTextEntryText:(id)arg1;
- (void)setTextEntryType:(int)arg1;
- (void)setTextFieldHasRoundBorder:(bool)arg1;
- (void)setTextValue:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)textEntryText;
- (int)textEntryType;
- (id)textEntryView;
- (void)textEntryViewDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (bool)textFieldHasRoundBorder;
- (id)textValue;
- (void)updateNextButton;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBecomeActive;

@end
