/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate, WebPolicyDelegate> {
    UIWebViewInternal * _internal;
}

@property (nonatomic) bool allowsInlineMediaPlayback;
@property (nonatomic) bool allowsLinkPreview;
@property (nonatomic) bool allowsPictureInPictureMediaPlayback;
@property (getter=canGoBack, nonatomic, readonly) bool canGoBack;
@property (getter=canGoForward, nonatomic, readonly) bool canGoForward;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIWebViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool detectsPhoneNumbers;
@property (nonatomic) double gapBetweenPages;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardDisplayRequiresUserAction;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) bool mediaPlaybackAllowsAirPlay;
@property (nonatomic) bool mediaPlaybackRequiresUserAction;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic) double pageLength;
@property (nonatomic) long long paginationBreakingMode;
@property (nonatomic) long long paginationMode;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic) bool scalesPageToFit;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesIncrementalRendering;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_fixPathsForSandboxDirectoryChange;
+ (id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2;
+ (void)_updatePersistentStoragePaths;
+ (void)initialize;

- (void)_addShortcut:(id)arg1;
- (bool)_allowsPictureInPictureVideo;
- (bool)_alwaysConstrainsScale;
- (bool)_alwaysDispatchesScrollEvents;
- (bool)_appliesExclusiveTouchToSubviewTree;
- (unsigned long long)_audioSessionCategoryOverride;
- (void)_beginRotation;
- (id)_browserView;
- (void)_define:(id)arg1;
- (void)_didCompleteScrolling;
- (void)_didRotate:(id)arg1;
- (id)_documentView;
- (void)_finishRotation;
- (void)_frameOrBoundsChanged;
- (double)_gapBetweenPages;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enableReachability:(bool)arg2;
- (id)_initWithWebView:(id)arg1;
- (id)_makeAlertView;
- (id)_networkInterfaceName;
- (unsigned long long)_pageCount;
- (double)_pageLength;
- (bool)_paginationBehavesLikeColumns;
- (long long)_paginationMode;
- (id)_pdfViewHandler;
- (void)_populateArchivedSubviews:(id)arg1;
- (Class)_printFormatterClass;
- (void)_reportError:(id)arg1;
- (void)_rescaleDocument;
- (id)_scrollView;
- (void)_setAllowsPictureInPictureVideo:(bool)arg1;
- (void)_setAlwaysConstrainsScale:(bool)arg1;
- (void)_setAlwaysDispatchesScrollEvents:(bool)arg1;
- (void)_setAudioSessionCategoryOverride:(unsigned long long)arg1;
- (void)_setDrawInWebThread:(bool)arg1;
- (void)_setDrawsCheckeredPattern:(bool)arg1;
- (void)_setGapBetweenPages:(double)arg1;
- (void)_setIsBlankBeforeFirstNonEmptyLayout:(bool)arg1;
- (void)_setNetworkInterfaceName:(id)arg1;
- (void)_setOverridesOrientationChangeEventHandling:(bool)arg1;
- (void)_setPageLength:(double)arg1;
- (void)_setPaginationBehavesLikeColumns:(bool)arg1;
- (void)_setPaginationMode:(long long)arg1;
- (void)_setRichTextReaderViewportSettings;
- (void)_setScalesPageToFitViewportSettings;
- (void)_setWebSelectionEnabled:(bool)arg1;
- (void)_share:(id)arg1;
- (void)_updateBrowserViewExposedScrollViewRect;
- (void)_updateCheckeredPattern;
- (void)_updateOpaqueAndBackgroundColor;
- (void)_updateRequest;
- (void)_updateScrollViewInsetAdjustmentBehavior;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_updateViewSettings;
- (void)_webView:(id)arg1 commitPreview:(id)arg2;
- (void)_webView:(id)arg1 didChangeAvoidsUnsafeArea:(bool)arg2;
- (void)_webView:(id)arg1 didDismissPreview:(id)arg2 committing:(bool)arg3;
- (id)_webView:(id)arg1 presentationRectsForPreview:(id)arg2;
- (id)_webView:(id)arg1 presentationSnapshotForPreview:(id)arg2;
- (bool)_webView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2;
- (void)_webView:(id)arg1 willPresentPreview:(id)arg2;
- (void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(bool)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)allowsInlineMediaPlayback;
- (bool)allowsLinkPreview;
- (bool)allowsPictureInPictureMediaPlayback;
- (bool)canGoBack;
- (bool)canGoForward;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (bool)detectsPhoneNumbers;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)gapBetweenPages;
- (void)goBack;
- (void)goForward;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isLoading;
- (bool)keyboardDisplayRequiresUserAction;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackRequiresUserAction;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)pageCount;
- (double)pageLength;
- (long long)paginationBreakingMode;
- (long long)paginationMode;
- (void)reload;
- (id)request;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (bool)scalesPageToFit;
- (id)scrollView;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWasRemoved:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setAllowsLinkPreview:(bool)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectsPhoneNumbers:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGapBetweenPages:(double)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPageLength:(double)arg1;
- (void)setPaginationBreakingMode:(long long)arg1;
- (void)setPaginationMode:(long long)arg1;
- (void)setScalesPageToFit:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stopLoading;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (bool)suppressesIncrementalRendering;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webViewClose:(id)arg1;
- (void)webViewMainFrameDidCommitLoad:(id)arg1;
- (void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2;
- (void)webViewMainFrameDidFinishLoad:(id)arg1;
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (bool)isLayoutSizeDependentOnPerpendicularAxis;

// Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit

- (long long)highlightAllOccurencesOfTokens:(id)arg1;
- (void)removeAllHighlights;

@end
