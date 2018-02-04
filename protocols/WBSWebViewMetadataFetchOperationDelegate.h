/* made by EzioChiu.
 */

@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>

@required

- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (WKWebView *)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 webViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(WKWebViewConfiguration *)arg3;

@end
