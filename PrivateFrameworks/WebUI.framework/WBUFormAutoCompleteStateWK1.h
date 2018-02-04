/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoCompleteStateWK1 : WBUFormAutoCompleteState {
    DOMHTMLInputElement * _textField;
    WebFrame * _webFrame;
}

@property (nonatomic, readonly) WebFrame *webFrame;

- (void).cxx_destruct;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(bool)arg2 andFocusFieldAfterFilling:(bool)arg3 fieldToFocus:(id)arg4;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (id)initWithTextField:(id)arg1 webFrame:(id)arg2;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 clearField:(id)arg3;
- (void)setShowingKeyboardInputView:(bool)arg1;
- (bool)shouldOfferActionAutoFillCredentials;
- (id)textFieldValue;
- (id)webFrame;
- (id)webView;

@end
