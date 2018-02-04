/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFormAutoFillController : NSObject <SFFormMetadataObserver> {
    <SFFormAutoFiller> * _autoFiller;
    <SFFormAutoFillControllerDelegate> * _delegate;
    bool  _isCurrentlyAuthenticating;
    bool  _metadataCorrectionsEnabled;
    NSTimer * _prefillTimer;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    SFFormAutocompleteState * _state;
    NSMutableIndexSet * _uniqueIDsOfFormsThatWereAutoFilled;
    WKWebView<WBUFormAutoFillWebView> * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool metadataCorrectionsEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;

- (void).cxx_destruct;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_prefillTimerFired:(id)arg1;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)authenticateForAutoFillOnPageLoad:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)autoFill;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 andFocusField:(id)arg4;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5;
- (void)dealloc;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)metadataCorrectionsEnabled;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)setMetadataCorrectionsEnabled:(bool)arg1;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (id)webView;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(bool)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(id /* block */)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id /* block */)arg3;

@end
