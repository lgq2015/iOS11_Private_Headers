/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLOAuthWebViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSURL * _authURL;
    bool  _authenticating;
    id /* block */  _completionBlock;
    NSURL * _interceptedRedirectURL;
    NSURL * _redirectURL;
    WKWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly, copy) NSURL *authURL;
@property (getter=isAuthenticating, nonatomic) bool authenticating;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *interceptedRedirectURL;
@property (nonatomic, readonly, copy) NSURL *redirectURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_endAuthenticationWithError:(id)arg1;
- (id)activityIndicator;
- (id)authURL;
- (void)cancelAuthentication;
- (id /* block */)completionBlock;
- (id)initWithAuthURL:(id)arg1 redirectURL:(id)arg2;
- (id)interceptedRedirectURL;
- (bool)isAuthenticating;
- (id)redirectURL;
- (void)setActivityIndicator:(id)arg1;
- (void)setAuthenticating:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInterceptedRedirectURL:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)startAuthentication;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end
