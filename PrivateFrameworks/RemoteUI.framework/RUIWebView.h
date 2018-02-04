/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIWebView : RUIElement <UIWebViewDelegate> {
    NSURL * _baseURL;
    id  _delegate;
    NSString * _html;
    UIWebView * _webView;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *html;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (void)dealloc;
- (id)delegate;
- (id)html;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHtml:(id)arg1;
- (id)sourceURL;
- (id)userStyleSheet;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
