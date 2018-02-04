/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSharingLinkExtractor : NSObject {
    <_SFWebProcessSharingLinkExtractor> * _remoteObjectProxy;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)arg1;
- (id)initWithWebView:(id)arg1;

@end
