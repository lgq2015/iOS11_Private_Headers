/* made by EzioChiu.
 */

@protocol _WKFindDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 didCountMatches:(unsigned long long)arg2 forString:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didFailToFindString:(NSString *)arg2;
- (void)_webView:(WKWebView *)arg1 didFindMatches:(unsigned long long)arg2 forString:(NSString *)arg3 withMatchIndex:(long long)arg4;

@end
