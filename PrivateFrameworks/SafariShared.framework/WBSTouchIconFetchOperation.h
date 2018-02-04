/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {
    id /* block */  _completionHandler;
    NSTimer * _loadingTimeoutTimer;
    NSArray * _pendingTouchIconURLs;
    long long  _state;
    _WKRemoteObjectInterface * _touchIconObserverInterface;
    NSSet * _touchIconURLs;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(id /* block */)arg2;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)_setUpRemoteObjectProxies;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (id /* block */)completionHandler;
- (id)description;
- (void)didCompleteWithResult:(id)arg1;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (void)startOffscreenFetching;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)webViewConfiguration;
- (void)willClearWebView;

@end
