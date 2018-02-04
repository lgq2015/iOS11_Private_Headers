/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, _SFDialogControllerDelegate, _SFDialogPresenting, _SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate> {
    _SFAutoFillAuthenticationCache * _autoFillAuthenticationCache;
    _SFFormAutoFillController * _autoFillController;
    _SFAuthenticationContext * _autoFillPearlAuthenticationContext;
    <SFWebViewControllerDelegate> * _delegate;
    _SFDialogController * _dialogController;
    bool  _didFinishDocumentLoad;
    bool  _didFirstLayout;
    bool  _didFirstVisuallyNonEmptyLayout;
    bool  _loading;
    bool  _shouldSuppressDialogsThatBlockWebProcess;
    WKWebViewConfiguration * _webViewConfiguration;
}

@property (nonatomic, readonly) _SFAuthenticationContext *autoFillPearlAuthenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _SFDialogController *dialogController;
@property (nonatomic, readonly) bool didFirstVisuallyNonEmptyLayout;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) WKWebViewConfiguration *webViewConfiguration;

- (void).cxx_destruct;
- (id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 isPreviewing:(bool)arg3;
- (int)_analyticsClient;
- (void)_authenticationContextInvalidated:(id)arg1;
- (id)_presentingViewControllerForWebView:(id)arg1;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_webView:(id)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(bool)arg2;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)_webView:(id)arg1 printFrame:(id)arg2;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 requestGeolocationAuthorizationForURL:(id)arg2 frame:(id)arg3 decisionHandler:(id /* block */)arg4;
- (bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(id /* block */)arg4;
- (void)_webViewDidCancelClientRedirect:(id)arg1;
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (bool)authenticationEnabledForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)autoFillPearlAuthenticationContext;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dialogController;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;
- (bool)didFirstVisuallyNonEmptyLayout;
- (bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 onPageLoad:(bool)arg2 completion:(id /* block */)arg3;
- (void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(id)arg1 completion:(id /* block */)arg2;
- (bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (id)initWithWebViewConfiguration:(id)arg1;
- (bool)isLoading;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentDialog:(id)arg1 sender:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)sfWebViewDidChangeSafeAreaInsets:(id)arg1;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)webViewConfiguration;
- (void)webViewDidClose:(id)arg1;
- (void)willActivateWebViewController;
- (void)willBeginUserInitiatedNavigation;

@end
