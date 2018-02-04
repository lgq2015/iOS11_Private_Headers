/* made by EzioChiu.
 */

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional

- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1 sourceIsManaged:(bool*)arg2;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (UIViewController *)_presentingViewControllerForWebView:(WKWebView *)arg1;
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProviders:(NSArray *)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProvidersForItemProvider:(id)arg2 representingObjects:(NSArray *)arg3 additionalData:(NSDictionary *)arg4;
- (void)_webView:(WKWebView *)arg1 alternateActionForURL:(NSURL *)arg2;
- (NSURL *)_webView:(WKWebView *)arg1 alternateURLFromImage:(UIImage *)arg2 userInfo:(id*)arg3;
- (void)_webView:(void *)arg1 checkUserMediaPermissionForURL:(void *)arg2 mainFrameURL:(void *)arg3 frameIdentifier:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebView *, NSURL *, NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (void)_webView:(void *)arg1 createWebViewWithConfiguration:(void *)arg2 forNavigationAction:(void *)arg3 windowFeatures:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, WKWebViewConfiguration *, WKNavigationAction *, WKWindowFeatures *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(WKWebView *)arg1 dataInteractionOperationWasHandled:(bool)arg2 forSession:(id)arg3 itemProviders:(NSArray *)arg4;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDropSession:(id <UIDropSession>)arg2;
- (void)_webView:(void *)arg1 decideDatabaseQuotaForSecurityOrigin:(void *)arg2 currentQuota:(void *)arg3 currentOriginUsage:(void *)arg4 currentDatabaseUsage:(void *)arg5 expectedUsage:(void *)arg6 decisionHandler:(void *)arg7; // needs 7 arg types, found 12: WKWebView *, WKSecurityOrigin *, unsigned long long, unsigned long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_webView:(void *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(void *)arg2 currentQuota:(void *)arg3 totalBytesNeeded:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, WKSecurityOrigin *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_webView:(WKWebView *)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(bool)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(bool)arg3;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)_webView:(WKWebView *)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (void)_webView:(void *)arg1 getAlternateURLFromImage:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WKWebView *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, void*
- (void)_webView:(WKWebView *)arg1 hasVideoInPictureInPictureDidChange:(bool)arg2;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)_webView:(WKWebView *)arg1 indexIntoAttachmentListForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 mediaCaptureStateDidChange:(long long)arg2;
- (bool)_webView:(WKWebView *)arg1 performDataInteractionOperationWithItemProviders:(NSArray *)arg2;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(struct CGSize { double x1; double x2; })arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForImage:(UIImage *)arg2 alternateURL:(NSURL *)arg3 defaultActions:(NSArray *)arg4 elementInfo:(_WKActivatedElementInfo *)arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)_webView:(void *)arg1 requestGeolocationAuthorizationForURL:(void *)arg2 frame:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, NSURL *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_webView:(void *)arg1 requestUserMediaAuthorizationForDevices:(void *)arg2 url:(void *)arg3 mainFrameURL:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, unsigned long long, NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_webView:(void *)arg1 runBeforeUnloadConfirmPanelWithMessage:(void *)arg2 initiatedByFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (bool)_webView:(WKWebView *)arg1 shouldRequestGeolocationAuthorizationForURL:(NSURL *)arg2 isMainFrame:(bool)arg3 mainFrameURL:(NSURL *)arg4;
- (bool)_webView:(WKWebView *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 willPerformDropWithSession:(id <UIDropSession>)arg2;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (unsigned long long)_webView:(WKWebView *)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewDidLosePointerLock:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
- (void)_webViewRequestPointerLock:(WKWebView *)arg1;

@end
