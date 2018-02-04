/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReaderController : NSObject <SFReaderContext, SFReaderEventsListener, WKNavigationDelegate, WKUIDelegatePrivate> {
    NSString * _articleText;
    NSMutableDictionary * _bookmarkIdentifierToReadingListItemInfoCompletionMap;
    <_SFReaderControllerDelegate> * _delegate;
    _WKRemoteObjectInterface * _eventsListenerInterface;
    WBSReaderFontManager * _fontManager;
    bool  _readerAvailable;
    <SFReaderWebProcessControllerProtocol> * _readerControllerProxy;
    id /* block */  _readerMailContentCompletionHandler;
    id /* block */  _readerPrintContentCompletionHandler;
    WKWebView * _readerWebView;
    WKWebView * _webView;
    <WKUIDelegatePrivate> * _webViewUIDelegate;
}

@property (nonatomic, readonly) NSString *articleText;
@property (readonly, copy) NSString *debugDescription;
@property <_SFReaderControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReaderAvailable) bool readerAvailable;
@property (readonly) WKWebView *readerWebView;
@property (readonly) Class superclass;
@property (readonly) WKWebView *webView;
@property (nonatomic) <WKUIDelegatePrivate> *webViewUIDelegate;

+ (id)_defaultInitialConfiguration;

- (void).cxx_destruct;
- (void)_setUpReaderActivityListener;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(id)arg1 dataInteractionOperationWasHandled:(bool)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)activateReader;
- (id)articleText;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (void)collectReaderContentForMailWithCompletion:(id /* block */)arg1;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(id /* block */)arg2;
- (id)configuration;
- (void)createArticleFinder;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)dealloc;
- (void)decreaseReaderTextSize;
- (id)delegate;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didCreateReaderWebView:(id)arg1;
- (void)didDetermineReaderAvailability:(bool)arg1 dueToSameDocumentNavigation:(bool)arg2;
- (void)didPrepareReaderContentForDisplay:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (id)fontManager;
- (void)increaseReaderTextSize;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (bool)isLoadingNextPage;
- (bool)isReaderAvailable;
- (void)loadNewArticle;
- (void)owningWebViewDidCommitNavigation;
- (void)prepareReaderPrintingIFrameWithCompletion:(id /* block */)arg1;
- (id)readerControllerProxy;
- (void)readerTextWasExtracted:(id)arg1;
- (id)readerURL;
- (id)readerWebView;
- (id)scrollPositionInformation;
- (void)setDelegate:(id)arg1;
- (void)setReaderAvailable:(bool)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(bool)arg3;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(bool)arg3 scrollOffsetDictionary:(id)arg4;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (void)setWebViewUIDelegate:(id)arg1;
- (bool)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)webViewUIDelegate;

@end
