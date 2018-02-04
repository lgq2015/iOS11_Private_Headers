/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSWebContainerView : UIView <UIWebViewDelegate> {
    NSData * _content;
    UIWebView * _webView;
}

@property (nonatomic, retain) NSData *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (id)content;
- (double)heightForWidth:(double)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
