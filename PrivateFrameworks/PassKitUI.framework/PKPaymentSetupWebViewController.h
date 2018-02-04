/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupWebViewController : UIViewController <UIWebViewDelegate> {
    NSURL * _URL;
    long long  _context;
    UIWebView * _webView;
}

@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_webViewDidLoad:(bool)arg1 withError:(id)arg2;
- (long long)context;
- (void)handleDone:(id)arg1;
- (id)initWithURL:(id)arg1 context:(long long)arg2;
- (void)setContext:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
