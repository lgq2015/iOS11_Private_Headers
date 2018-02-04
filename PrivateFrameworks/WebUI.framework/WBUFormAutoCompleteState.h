/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoCompleteState : NSObject <CNContactPickerDelegate, WBUContactAutoFillViewControllerFiller, WBUCreditCardCaptureViewControllerDelegate> {
    bool  _URLIsAllowedByWhiteList;
    long long  _action;
    bool  _canAutoComplete;
    NSArray * _credentialMatches;
    id /* block */  _creditCardCaptureCompletionHandler;
    id /* block */  _customAutoFillContactCompletionHandler;
    WBUFormDataController * _dataController;
    id /* block */  _displayOtherContactsCompletionHandler;
    NSDictionary * _formAnnotations;
    WBSFormMetadata * _formMetadata;
    unsigned long long  _formType;
    NSDictionary * _formValues;
    bool  _gatheringFormValues;
    bool  _hasDeterminedIfURLIsAllowedByWhiteList;
    NSMutableDictionary * _matchesByCompletion;
    WBSMultiRoundAutoFillManager * _multiRoundAutoFillManager;
    NSArray * _relatedCredentialMatches;
    NSDictionary * _textFieldMetadata;
}

@property (nonatomic, readonly) bool canAutoFillCreditCardData;
@property (nonatomic) WBUFormDataController *dataController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBUFormAutoFillFrameHandle> *frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldOfferActionAutoFillCredentials;
@property (nonatomic, readonly) bool shouldOfferToAutoFillCreditCardData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textFieldLooksLikeCreditCardNumericFormField;
@property (nonatomic, readonly) NSString *textFieldValue;
@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;

+ (bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
+ (void)getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(bool)arg8;

- (void).cxx_destruct;
- (long long)_action;
- (long long)_actionForLoginForm;
- (void)_autoFillCreditCardData;
- (void)_autoFillValues:(id)arg1 setAutoFilled:(bool)arg2;
- (void)_autoFillWithSet:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_ensureFormMetadata;
- (void)_gatherFormValuesWithCompletionHandler:(id /* block */)arg1;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(id /* block */)arg1;
- (void)_getShouldOfferForgetPassword:(bool*)arg1 savePassword:(bool*)arg2;
- (bool)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (id)_matchesForPartialString:(id)arg1;
- (void)_offerToAutoFillContact;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)_passwordGenerationAssistanceAction;
- (bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (void)_performAutoFill;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_setUserAndPasswordFieldsAutoFilled:(bool)arg1 clearPasswordField:(bool)arg2;
- (bool)_shouldAllowGeneratedPassword;
- (bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (bool)_textFieldIsEmptyPasswordField;
- (bool)_textFieldLooksLikeCreditCardFormField;
- (void)_updateAutoFillButton;
- (id)_viewControllerToPresentFrom;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFill;
- (void)autoFillDisplayData:(id)arg1 setAutoFilled:(bool)arg2;
- (void)autoFillFormWithCreditCardData:(id)arg1;
- (void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(bool)arg2 andFocusField:(id)arg3;
- (void)autoFillValues:(id)arg1 setAutoFilled:(bool)arg2 andFocusFieldAfterFilling:(bool)arg3 fieldToFocus:(id)arg4;
- (void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1;
- (bool)canAutoFillCreditCardData;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (id)dataController;
- (void)dealloc;
- (void)dismissCustomAutoFill;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillCredential:(id)arg1 setAutoFilled:(bool)arg2;
- (void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getLoginFormUser:(id*)arg1 password:(id*)arg2 userIsAutoFilled:(bool*)arg3 passwordIsAutoFilled:(bool*)arg4;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (bool)hasCurrentSuggestions;
- (bool)hasPotentialLoginCredentialsForLoginForm;
- (id)initWithFormDataController:(id)arg1;
- (void)invalidate;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (id)potentialCredentialMatches;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setDataController:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 clearField:(id)arg3;
- (void)setShowingKeyboardInputView:(bool)arg1;
- (bool)shouldOfferActionAutoFillCredentials;
- (bool)shouldOfferToAutoFillCreditCardData;
- (void)showOtherContactOptions;
- (id)suggestionsForString:(id)arg1;
- (void)switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (void)textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (bool)textFieldLooksLikeCreditCardNumericFormField;
- (id)textFieldValue;
- (id)titleOfAutoFillButton;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;
- (id)webView;

@end
