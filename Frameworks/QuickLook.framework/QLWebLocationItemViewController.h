/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebLocationItemViewController : QLItemViewController {
    NSLayoutConstraint * _leftConstraint;
    id /* block */  _loadingHandler;
    NSLayoutConstraint * _rightConstraint;
    WKWebView * _webView;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_updateConstraintConstants:(bool)arg1;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)canEnterFullScreen;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;

@end
