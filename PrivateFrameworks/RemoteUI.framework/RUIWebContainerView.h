/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {
    <RUIWebContainerViewDelegate> * _delegate;
    bool  _highlighted;
    bool  _reallyHighlighted;
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIWebContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (void)_setHighlightedNow;
- (id)delegate;
- (double)heightForWidth:(double)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
