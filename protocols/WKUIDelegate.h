/* made by EzioChiu.
 */

@protocol WKUIDelegate <NSObject>

@optional

- (void)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
- (UIViewController *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (void)webView:(void *)arg1 runJavaScriptAlertPanelWithMessage:(void *)arg2 initiatedByFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WKWebView *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)webView:(void *)arg1 runJavaScriptConfirmPanelWithMessage:(void *)arg2 initiatedByFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)webView:(void *)arg1 runJavaScriptTextInputPanelWithPrompt:(void *)arg2 defaultText:(void *)arg3 initiatedByFrame:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, NSString *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (bool)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (void)webViewDidClose:(WKWebView *)arg1;

@end