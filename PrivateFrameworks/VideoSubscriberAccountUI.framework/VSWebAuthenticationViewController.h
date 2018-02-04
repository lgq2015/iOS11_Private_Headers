/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSWebAuthenticationViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController> {
    UIActivityIndicatorView * _activityIndicator;
    bool  _cancellationAllowed;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    VSWebAuthenticationViewModel * _viewModel;
    UIWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_canonicalRequestForRequest:(id)arg1;
- (void)_didBeginActivity;
- (void)_didEndActivity;
- (void)_retrieveMessages;
- (void)_sendMessage:(id)arg1;
- (void)_sendMessages:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)activityIndicator;
- (void)dealloc;
- (id)delegate;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (bool)isCancellationAllowed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
