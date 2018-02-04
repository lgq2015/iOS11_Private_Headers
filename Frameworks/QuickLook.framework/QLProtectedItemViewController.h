/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLProtectedItemViewController : QLItemAggregatedViewController {
    QLPasswordItemViewController * _passwordItemViewController;
    QLItem * _previewItem;
    QLWKWebItemViewController * _webViewController;
}

@property (retain) QLPasswordItemViewController *passwordItemViewController;
@property (retain) QLWKWebItemViewController *webViewController;

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)passwordItemViewController;
- (void)setPasswordItemViewController:(id)arg1;
- (void)setWebViewController:(id)arg1;
- (id)webViewController;

@end
