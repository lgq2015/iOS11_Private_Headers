/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {
    id /* block */  _completionHandler;
    QLDownloadingItemViewController * _downloadingController;
    QLErrorItemViewController * _errorViewController;
    bool  _failedToShowPreview;
    bool  _isPeekingSession;
    bool  _isReadyForDisplay;
    QLLoadingItemViewController * _loadingViewController;
    QLItem * _previewItem;
    QLItemViewController * _previewProvider;
    id /* block */  _readyBlock;
    bool  _shouldDeferAppearanceUpdates;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) QLDownloadingItemViewController *downloadingController;
@property (nonatomic, retain) QLErrorItemViewController *errorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;
@property (nonatomic, retain) QLLoadingItemViewController *loadingViewController;
@property (nonatomic, retain) QLItemViewController *previewProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllDeferredApperanceUpdates;
- (void)_performReadyBlockIfNedded;
- (void)_showLoadingViewControllerDeferred;
- (void)_startLoadingPreviewWithContents:(id)arg1;
- (id /* block */)completionHandler;
- (id)downloadingController;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2;
- (id)errorViewController;
- (id)init;
- (bool)isLoaded;
- (bool)isLoading;
- (bool)isPresentingPreviewItemViewController:(id)arg1;
- (void)isReadyForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)itemPresenterViewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)loadingFailed;
- (id)loadingViewController;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)previewItem;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (id)previewProvider;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDownloadingController:(id)arg1;
- (void)setErrorViewController:(id)arg1;
- (void)setLoadingViewController:(id)arg1;
- (void)setPreviewProvider:(id)arg1;
- (void)showErrorViewController;
- (void)showPreviewViewController:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;

@end
