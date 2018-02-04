/* made by EzioChiu.
 */

@protocol _WKInputDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
- (bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (void)_webView:(void *)arg1 willSubmitFormValues:(void *)arg2 userObject:(void *)arg3 submissionHandler:(void *)arg4; // needs 4 arg types, found 8: WKWebView *, NSDictionary *, NSObject<NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
