/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetViewController : UIViewController <PXChangeObserver, PXMemoriesFeedViewControllerHelperDelegate, PXSectionedDataSourceManagerObserver, PXUserInterfaceFeatureViewController> {
    PHImageRequestOptions * __assetImageRequestOptions;
    PXMemoriesFeedViewControllerHelper * __helper;
    PHCachingImageManager * __imageManager;
    PXMemoriesFeedWidgetLayoutMetrics * __metrics;
    long long  __requestDismissalID;
    PXUIScrollViewController * __scrollViewController;
    PXUITapGestureRecognizer * __tapRecognizer;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXMemoriesUITileSource * __tileSource;
    unsigned long long  _availableNumberOfRows;
    NSMutableSet * _checkedOutTiles;
    <PXMemoriesFeedWidgetViewControllerDelegate> * _delegate;
    bool  _hasAnyMemories;
    bool  _hasAppeared;
    id /* block */  _refreshMemoriesCompletionHandler;
    long long  _waitForDataSourceChangeRequestDismissalID;
}

@property (nonatomic, readonly) PHImageRequestOptions *_assetImageRequestOptions;
@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (nonatomic, readonly) PHCachingImageManager *_imageManager;
@property (setter=_setMetrics:, nonatomic, copy) PXMemoriesFeedWidgetLayoutMetrics *_metrics;
@property (setter=_setRequestDismissalID:, nonatomic) long long _requestDismissalID;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (setter=_setAvailableNumberOfRows:, nonatomic) unsigned long long availableNumberOfRows;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXMemoriesFeedWidgetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceFeature;

- (void).cxx_destruct;
- (id)_assetImageRequestOptions;
- (void)_callRefreshMemoriesCompletionHandlerWithResult:(unsigned long long)arg1;
- (id)_dataSourceManager;
- (void)_handleDataSourceChange;
- (void)_handleNewMemoriesRequestFinishedWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleNewMemoriesRequestTimeoutWithRequestDismissalID:(long long)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleSpecChange;
- (id)_helper;
- (id)_imageManager;
- (long long)_incrementRequestDismissalID;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (id)_metrics;
- (long long)_requestDismissalID;
- (id)_scrollViewController;
- (void)_setAvailableNumberOfRows:(unsigned long long)arg1;
- (void)_setMetrics:(id)arg1;
- (void)_setRequestDismissalID:(long long)arg1;
- (id)_tapRecognizer;
- (id)_tileAnimator;
- (id)_tileSource;
- (void)_updateAvailableNumberOfRows;
- (void)_updatePreferredContentSize;
- (unsigned long long)availableNumberOfRows;
- (id)delegate;
- (bool)hasAnyMemories;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateNumberOfRowsVisible;
- (void)invalidateReferenceSize;
- (void)loadView;
- (void)memoriesFeedViewControllerHelper:(id)arg1 configureMetrics:(id)arg2;
- (bool)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)refreshMemoriesWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasAnyMemories:(bool)arg1;
- (long long)userInterfaceFeature;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
