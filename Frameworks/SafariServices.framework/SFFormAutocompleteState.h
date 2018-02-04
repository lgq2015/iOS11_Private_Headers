/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormAutocompleteState : WBUFormAutoCompleteState {
    _SFFormAutoFillController * _autoFillController;
    UIView * _emptyInputView;
    WBSFormMetadata * _formMetadata;
    SFFormAutoFillFrameHandle * _frame;
    <_WKFormInputSession> * _inputSession;
    WBSFormAutoFillMetadataCorrector * _metadataCorrector;
    NSString * _prefixForSuggestions;
    NSDictionary * _textFieldMetadata;
    NSString * _textFieldValue;
}

- (void).cxx_destruct;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (id)_correctedFormMetadata:(id)arg1;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (void)_updateTextFieldValue;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(bool)arg2 andFocusFieldAfterFilling:(bool)arg3 fieldToFocus:(id)arg4;
- (void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 clearField:(id)arg3;
- (void)setPrefixForSuggestions:(id)arg1;
- (void)setShowingKeyboardInputView:(bool)arg1;
- (bool)shouldOfferActionAutoFillCredentials;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (id)textFieldValue;
- (void)updateSuggestions;
- (id)webView;

@end
