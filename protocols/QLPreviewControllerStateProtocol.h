/* made by EzioChiu.
 */

@protocol QLPreviewControllerStateProtocol <NSObject>

@required

- (void)beginInteractiveTransition;
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(bool)arg1;
- (void)expandContentOfURL:(NSURL *)arg1;
- (void)openURLIfAllowed:(NSURL *)arg1;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (void)setAccessoryViewVisible:(bool)arg1;
- (void)setCanChangeCurrentPage:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setFullscreenBackgroundColor:(UIColor *)arg1;
- (void)setPrinter:(id <QLPrintingProtocol>)arg1;
- (void)setToolbarCanBeVisible:(bool)arg1;
- (void)showShareSheet;
- (void)updateKeyCommands;
- (void)updateOverlayButtons:(bool)arg1;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePreviewItemAtIndex:(void *)arg1 updatedContentsURL:(void *)arg2 sandboxExtension:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: unsigned long long, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateTitle:(NSString *)arg1;

@end
