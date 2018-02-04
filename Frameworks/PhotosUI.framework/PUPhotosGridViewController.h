/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewController : UICollectionViewController <PHAssetCollectionDataSource, PLDismissableViewController, PLNavigableAssetContainerViewController, PUCollectionViewSelectionDelegate, PUDeletePhotosActionControllerDelegate, PUOneUpPresentationHelperDelegate, PUPhotosGlobalFooterViewDelegate, PUPhotosGlobalFooterViewLayoutDelegate, PUPhotosGridBarsHelperDelegate, PUPhotosSharingViewControllerDelegate, PUScrollViewSpeedometerDelegate, PUSessionInfoObserver, PUSlideshowViewControllerDelegate, PUStackedAlbumControllerTransition, PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate, PXAutoScrollerDelegate, PXPhotosDataSourceChangeObserver, PXSettingsKeyObserver, UICollectionViewDragDestination, UICollectionViewDragSource, UIDropInteractionDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    UIAlertController * __actionConfirmationAlert;
    UICollectionViewLayout * __albumListTransitionLayout;
    PUAlbumPickerViewController * __albumPickerViewController;
    PXAssetBadgeManager * __badgeManager;
    PUPhotosGridBarsHelper * __barsHelper;
    long long  __batchPreheatingCount;
    id  __cachedViewSizeTransitionContext;
    struct CGSize { 
        double width; 
        double height; 
    }  __cachedViewSizeTransitionContextSize;
    PHCachingImageManager * __cachingImageManager;
    PUScrollViewSpeedometer * __collectionViewSpeedometer;
    PLDateRangeFormatter * __dateRangeFormatter;
    PUDeletePhotosActionController * __deleteActionController;
    bool  __didForceDataSource;
    PUDuplicateActionController * __duplicateActionController;
    UIView * __emptyPlaceholderView;
    long long  __maximumNumberOfRowsToPreheat;
    NSIndexPath * __menuIndexPath;
    bool  __needsNewEmptyPlaceholderView;
    id  __pendingViewSizeTransitionContext;
    PUPhotoBrowserOneUpPresentationAdaptor * __photoBrowserOneUpPresentationAdaptor;
    NSIndexPath * __previewingIndexPath;
    unsigned long long  __previousCollectionsCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  __previousPrefetchContentOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __previousPrefetchRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  __previousPreheatContentOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __previousPreheatRect;
    UIViewController * __pushedPhotoBrowserController;
    UIViewController * __removeActionSheet;
    UIPopoverPresentationController * __shareAssetsPopoverController;
    UIView * __shareAssetsSender;
    PUPhotosSharingViewController * __sharingViewController;
    PUSlideshowViewController * __slideshowViewController;
    PUSwipeSelectionManager * __swipeSelectionManager;
    UIBarButtonItem * _addToolbarButton;
    PUAlbumListTransitionContext * _albumListTransitionContext;
    unsigned long long  _allowedActions;
    UIView * _alternateContentView;
    bool  _alwaysHideTabBar;
    UIBarButtonItem * _cancelButtonItem;
    PHFetchResult * _collectionListFetchResultBeforeChange;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionViewLayoutReferenceSafeAreaInsets;
    double  _collectionViewLayoutReferenceWidth;
    bool  _contentViewInSyncWithModel;
    UIBarButtonItem * _customDoneButtonItem;
    UIBarButtonItem * _deselectAllBarButtonItem;
    bool  _didScrollToInitialPosition;
    PUPhotosGridViewControllerSpec * _gridSpec;
    bool  _hasKnownNonEmptyContent_toWorkAround31995766;
    bool  _initiallyScrolledToBottom;
    bool  _isMenuIndexPathExact;
    double  _lastTransitionWidth;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UICollectionViewLayout<PUGridLayoutProtocol> * _mainGridLayout;
    PUPhotosGlobalFooterView * _measuringGlobalFooterView;
    id /* block */  _onViewDidAppearCompletion;
    PUOneUpPresentationHelper * _oneUpPresentationHelper;
    id /* block */  _pendingNavigationBlock;
    id /* block */  _pendingProcessDataSourceUpdateBlock;
    PUPhotoPinchGestureRecognizer * _photoOrStackPinchGestureRecognizer;
    PUPhotoSelectionManager * _photoSelectionManager;
    PXPhotosDataSource * _photosDataSource;
    id /* block */  _ppt_dataSourceChangeHandler;
    id /* block */  _ppt_nextDeleteFinishedBlock;
    <UIViewControllerPreviewing> * _previewingItem;
    NSMutableDictionary * _progressInfosByCachedIndexPath;
    NSMutableDictionary * _progressInfosByIdentifier;
    UIBarButtonItem * _removeToolbarButton;
    UIBarButtonItem * _restoreToolbarButton;
    PUSearchButtonItem * _searchButton;
    UIBarButtonItem * _selectAllBarButtonItem;
    UIBarButtonItem * _selectSessionDoneBarButtonItem;
    UINavigationButton * _selectionButton;
    PUSessionInfo * _sessionInfo;
    UIBarButtonItem * _shareToolbarButton;
    bool  _showingMenu;
    bool  _showsCustomDoneButtonItemOnLeft;
    UIBarButtonItem * _slideshowButton;
    UIBarButtonItem * _slideshowButtonSpacer;
    unsigned long long  _suppressesColorSettingsCount;
    UIPanGestureRecognizer * _swipeSelectionGestureRecognizer;
    PHAsset * _visibleReferenceAssetBeforeChange;
    PHAssetCollection * _visibleReferenceAssetContainerBeforeChange;
    NSIndexPath * _visibleReferenceAssetIndexPathBeforeChange;
    double  _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet * _visibleSectionsBeforeChange;
}

@property (setter=_setActionConfirmationAlert:, nonatomic) UIAlertController *_actionConfirmationAlert;
@property (setter=setAlbumListTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_albumListTransitionLayout;
@property (setter=_setAlbumPickerViewController:, nonatomic, retain) PUAlbumPickerViewController *_albumPickerViewController;
@property (nonatomic, readonly) PXAssetBadgeManager *_badgeManager;
@property (nonatomic, readonly) PUPhotosGridBarsHelper *_barsHelper;
@property (setter=_setBatchPreheatingCount:, nonatomic) long long _batchPreheatingCount;
@property (setter=_setCachedViewSizeTransitionContext:, nonatomic, retain) id _cachedViewSizeTransitionContext;
@property (setter=_setCachedViewSizeTransitionContextSize:, nonatomic) struct CGSize { double x1; double x2; } _cachedViewSizeTransitionContextSize;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (setter=_setCollectionViewSpeedometer:, nonatomic, retain) PUScrollViewSpeedometer *_collectionViewSpeedometer;
@property (nonatomic, readonly) PLDateRangeFormatter *_dateRangeFormatter;
@property (setter=_setDeleteActionController:, nonatomic, retain) PUDeletePhotosActionController *_deleteActionController;
@property (setter=_setDidForceDataSource:, nonatomic) bool _didForceDataSource;
@property (setter=_setDuplicateActionController:, nonatomic, retain) PUDuplicateActionController *_duplicateActionController;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) UIView *_emptyPlaceholderView;
@property (setter=_setMaximumNumberOfRowsToPreheat:, nonatomic) long long _maximumNumberOfRowsToPreheat;
@property (setter=_setMenuIndexPath:, nonatomic, retain) NSIndexPath *_menuIndexPath;
@property (setter=_setNeedsNewEmptyPlaceholderView:, nonatomic) bool _needsNewEmptyPlaceholderView;
@property (setter=_setPendingViewSizeTransitionContext:, nonatomic, retain) id _pendingViewSizeTransitionContext;
@property (setter=_setPhotoBrowserOneUpPresentationAdaptor:, nonatomic, retain) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor;
@property (setter=_setPreviewingIndexPath:, nonatomic, retain) NSIndexPath *_previewingIndexPath;
@property (setter=_setPreviousCollectionsCount:, nonatomic) unsigned long long _previousCollectionsCount;
@property (setter=_setPreviousPrefetchContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _previousPrefetchContentOffset;
@property (setter=_setPreviousPrefetchRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPrefetchRect;
@property (setter=_setPreviousPreheatContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _previousPreheatContentOffset;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPreheatRect;
@property (setter=_setPushedPhotoBrowserController:, nonatomic, retain) UIViewController *_pushedPhotoBrowserController;
@property (setter=_setRemoveActionSheet:, nonatomic) UIViewController *_removeActionSheet;
@property (setter=_setShareAssetsPopoverController:, nonatomic) UIPopoverPresentationController *_shareAssetsPopoverController;
@property (setter=_setShareAssetsSender:, nonatomic) UIView *_shareAssetsSender;
@property (setter=_setSharingViewController:, nonatomic, retain) PUPhotosSharingViewController *_sharingViewController;
@property (setter=_setSlideshowViewController:, nonatomic, retain) PUSlideshowViewController *_slideshowViewController;
@property (setter=_setSwipeSelectionManager:, nonatomic, retain) PUSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, retain) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic) unsigned long long allowedActions;
@property (nonatomic) bool alwaysHideTabBar;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewLayoutReferenceSafeAreaInsets;
@property (nonatomic) double collectionViewLayoutReferenceWidth;
@property (nonatomic, retain) UIBarButtonItem *customDoneButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic) bool hasKnownNonEmptyContent_toWorkAround31995766;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initiallyScrolledToBottom;
@property (nonatomic, retain) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout;
@property (nonatomic, copy) id /* block */ onViewDidAppearCompletion;
@property (setter=_setOneUpPresentationHelper:, nonatomic, retain) PUOneUpPresentationHelper *oneUpPresentationHelper;
@property (nonatomic, copy) id /* block */ pendingProcessDataSourceUpdateBlock;
@property (setter=_setPhotoOrStackPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer;
@property (setter=_setPhotoSelectionManager:, nonatomic, retain) PUPhotoSelectionManager *photoSelectionManager;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (setter=ppt_setDataSourceChangeHandler:, nonatomic, copy) id /* block */ ppt_dataSourceChangeHandler;
@property (setter=ppt_setNextDeleteFinishedBlock:, nonatomic, copy) id /* block */ ppt_nextDeleteFinishedBlock;
@property (setter=_setPreviewingItem:, nonatomic, retain) <UIViewControllerPreviewing> *previewingItem;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic) bool showsCustomDoneButtonItemOnLeft;
@property (readonly) Class superclass;
@property (setter=_setSwipeSelectionGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *swipeSelectionGestureRecognizer;

+ (id)_localizedSelectionTitleWithPhotoSelectionManager:(id)arg1;
+ (void)transferPhotoBrowserFromGridViewController:(id)arg1 toGridViewController:(id)arg2;

- (void).cxx_destruct;
- (id)_actionConfirmationAlert;
- (void)_addButtonPressed:(id)arg1;
- (double)_adjustedTransitionWidth;
- (id)_albumListTransitionLayout;
- (id)_albumPickerViewController;
- (id)_allAssetsInCollections;
- (bool)_allowsActions:(unsigned long long)arg1;
- (id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (bool)_areAllAssetsSelected;
- (id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2;
- (id)_assetsAllowingRemove:(bool)arg1 orDelete:(bool)arg2 fromAssets:(id)arg3;
- (id)_badgeManager;
- (id)_barButtonSpacerWithWidth:(double)arg1;
- (id)_barsHelper;
- (long long)_batchPreheatingCount;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (id)_bestReferenceItemIndexPathWithTopBias:(bool)arg1;
- (id)_cachedViewSizeTransitionContext;
- (struct CGSize { double x1; double x2; })_cachedViewSizeTransitionContextSize;
- (id)_cachingImageManager;
- (bool)_canAddContent;
- (bool)_canAllContainersPerformEditOperation:(long long)arg1;
- (bool)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (bool)_canRemoveContent;
- (bool)_canShareAsset:(id)arg1;
- (bool)_canShareContent;
- (id)_cancelButtonItem;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_cleanUpAfterSharingDismissal;
- (void)_clearAutomaticContentOffsetSnapshot;
- (bool)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_collectionViewSpeedometer;
- (bool)_confidentialityWarningRequiredForAsset:(id)arg1;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(bool)arg2;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(bool)arg4 assetMayHaveChanged:(bool)arg5;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_dateRangeFormatter;
- (id)_deleteActionController;
- (long long)_deleteActionForBarButtonItem:(id)arg1;
- (id)_deselectAllBarButtonItem;
- (bool)_didForceDataSource;
- (id)_dragItemsForIndexPath:(id)arg1;
- (id)_duplicateActionController;
- (id)_emptyPlaceholderView;
- (void)_ensureOneUpPresentationHelper;
- (void)_getFirstAsset:(id*)arg1 collection:(id*)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDuplicateActionCompletionWithSuccess:(bool)arg1;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleSwipeSelectionFromLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (bool)_hasAccessibilityLargeText;
- (bool)_hasAtLeastOneContainer;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)_indexesWithoutPlaceholdersFromIndexes:(id)arg1 inSection:(long long)arg2;
- (void)_invalidateAllAssetIndexes;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)_invalidateCachedViewSizeTransitionContext;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(bool*)arg2;
- (long long)_maximumNumberOfRowsToPreheat;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (id)_menuIndexPath;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (bool)_needsNewEmptyPlaceholderView;
- (id)_newEditActionItemsWithWideSpacing:(bool)arg1;
- (id)_pendingViewSizeTransitionContext;
- (void)_performAutomaticContentOffsetAdjustment;
- (id)_performDuplicateActivityWithAssets:(id)arg1;
- (id)_performHideActivityWithAssets:(id)arg1;
- (id)_photoBrowserOneUpPresentationAdaptor;
- (id)_pickerBannerView;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_presentConfidentialityWarning;
- (void)_presentSearchViewController:(id)arg1 animated:(bool)arg2;
- (void)_presentSearchViewControllerAnimated:(bool)arg1;
- (void)_presentSharingViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)_previewParametersForItemAtIndexPath:(id)arg1;
- (id)_previewingIndexPath;
- (unsigned long long)_previousCollectionsCount;
- (struct CGPoint { double x1; double x2; })_previousPrefetchContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPrefetchRect;
- (struct CGPoint { double x1; double x2; })_previousPreheatContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPreheatRect;
- (id)_pushedPhotoBrowserController;
- (id)_referenceBarButtonItemForDeleteAction:(long long)arg1;
- (id)_removeActionSheet;
- (void)_removeButtonPressed:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(id /* block */)arg1;
- (void)_saveAnchorForAutomaticContentOffsetAdjustment;
- (void)_searchButtonPressed:(id)arg1;
- (id)_selectAllBarButtonItem;
- (id)_selectSessionDoneBarButtonItem;
- (id)_selectionButton;
- (id)_selectionManagerWithSelectedSharableAssets;
- (id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2;
- (void)_setActionConfirmationAlert:(id)arg1;
- (void)_setAlbumPickerViewController:(id)arg1;
- (void)_setBatchPreheatingCount:(long long)arg1;
- (void)_setCachedViewSizeTransitionContext:(id)arg1;
- (void)_setCachedViewSizeTransitionContextSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setDeleteActionController:(id)arg1;
- (void)_setDidForceDataSource:(bool)arg1;
- (void)_setDuplicateActionController:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setMaximumNumberOfRowsToPreheat:(long long)arg1;
- (void)_setMenuIndexPath:(id)arg1;
- (void)_setNeedsNewEmptyPlaceholderView:(bool)arg1;
- (void)_setOneUpPresentationHelper:(id)arg1;
- (void)_setPendingViewSizeTransitionContext:(id)arg1;
- (void)_setPhotoBrowserOneUpPresentationAdaptor:(id)arg1;
- (void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_setPreviewingIndexPath:(id)arg1;
- (void)_setPreviewingItem:(id)arg1;
- (void)_setPreviousCollectionsCount:(unsigned long long)arg1;
- (void)_setPreviousPrefetchContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPreviousPrefetchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPreviousPreheatContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPushedPhotoBrowserController:(id)arg1;
- (void)_setRemoveActionSheet:(id)arg1;
- (void)_setShareAssetsPopoverController:(id)arg1;
- (void)_setShareAssetsSender:(id)arg1;
- (void)_setSharingViewController:(id)arg1;
- (void)_setSlideshowViewController:(id)arg1;
- (void)_setSwipeSelectionGestureRecognizer:(id)arg1;
- (void)_setSwipeSelectionManager:(id)arg1;
- (unsigned long long)_sharableAssetsTypeInFetchResult:(id)arg1;
- (id)_shareAssetsPopoverController;
- (id)_shareAssetsSender;
- (void)_shareButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (id)_sharingViewController;
- (id)_sharingViewControllerWithSelectionManager:(id)arg1;
- (bool)_shouldUpdateCollectionView;
- (void)_slideshowButtonPressed:(id)arg1;
- (id)_slideshowNavigationControllerForFetchResult:(id)arg1 assetCollection:(id)arg2;
- (id)_slideshowViewController;
- (id)_swipeSelectionManager;
- (bool)_transitionWidthHasChanged;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateBackButtonTitle;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateLayoutReferenceValues;
- (void)_updateNavigationBannerAnimated:(bool)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(bool)arg2;
- (void)_updatePhotoSelectionManager;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_updateSelectionFromSelectionManager:(id)arg1;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateToolbarContentsAnimated:(bool)arg1;
- (bool)_updateTransitionWidthOnAppearance;
- (id)albumListTransitionContext;
- (bool)allowSelectAllButton;
- (bool)allowSlideshowButton;
- (unsigned long long)allowedActions;
- (bool)allowsPeeking;
- (id)alternateContentView;
- (bool)alwaysHideTabBar;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetCollectionForSectionHeaderAtIndex:(unsigned long long)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)beginBatchPreheating;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)beginSuppressingColorSettingsUpdate;
- (id)bestReferenceItemIndexPath;
- (bool)canAddToOtherAlbumContent;
- (bool)canBecomeFirstResponder;
- (bool)canBeginStackCollapseTransition;
- (bool)canDeleteContent;
- (bool)canDisplayEditButton;
- (bool)canDragIn;
- (bool)canDragOut;
- (bool)canHandleDropSession:(id)arg1;
- (bool)canNavigateToPhotoInteractively:(bool)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (id)collectionListFetchResult;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewLayoutReferenceSafeAreaInsets;
- (double)collectionViewLayoutReferenceWidth;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(bool)arg3;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetForPreheating;
- (id)contentScrollView;
- (struct CGSize { double x1; double x2; })contentSizeForPreheating;
- (void)copy:(id)arg1;
- (id)customDoneButtonItem;
- (unsigned long long)dateRangeFormatterPreset;
- (void)dealloc;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 preferredAttributesPromise:(id /* block */)arg3;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)endBatchPreheating;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (void)forceDataSourceIfNeeded;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (double)globalHeaderHeight;
- (id)gridLayout;
- (void)gridSettings:(id)arg1 changedValueForKey:(id)arg2;
- (id)gridSpec;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)handleDrop:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (bool)hasKnownNonEmptyContent_toWorkAround31995766;
- (bool)hasScrollableContent;
- (long long)imageDeliveryMode;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(bool*)arg2;
- (struct CGSize { double x1; double x2; })imageRequestItemSize;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize { double x1; double x2; }*)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexPathsForSelectedItemsInCollectionView:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (bool)initiallyScrolledToBottom;
- (void)installGestureRecognizers;
- (void)invalidateEmptyPlaceholderView;
- (void)invalidateGridLayoutIfNecessary;
- (bool)isAddPlaceholderAtIndexPath:(id)arg1;
- (bool)isAnyAssetSelected;
- (bool)isCameraRoll;
- (bool)isContentViewInSyncWithModel;
- (bool)isCurrentCollectionViewDataSource;
- (bool)isEmpty;
- (bool)isPreheatingEnabled;
- (bool)isTrashBinViewController;
- (id)itemIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1 outClosestMatch:(id*)arg2;
- (id)itemIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1 outClosestMatch:(id*)arg2 outLeftClosestMatch:(id*)arg3 outAboveClosestMatch:(id*)arg4;
- (void)loadView;
- (id)localizedSelectionTitle;
- (id)localizedTitleForAssetCollection:(id)arg1;
- (id)localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long*)arg2;
- (id)localizedTitleForAssets:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)mainGridLayout;
- (void)navigateToBottomAnimated:(bool)arg1;
- (void)navigateToLastYearPhotosAnimated:(bool)arg1;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 refetchIfNeeded:(bool)arg3 animated:(bool)arg4;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1 animated:(bool)arg2;
- (void)navigateToPhotosSearchAnimated:(bool)arg1;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)newToolbarItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id /* block */)onViewDidAppearCompletion;
- (id)oneUpPresentationHelper;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (bool)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)paste:(id)arg1;
- (id /* block */)pendingProcessDataSourceUpdateBlock;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (id)photoOrStackPinchGestureRecognizer;
- (id)photoSelectionManager;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGridBarsHelper:(id)arg1 didChange:(unsigned long long)arg2;
- (void)photosGridBarsHelper:(id)arg1 getTitle:(out id*)arg2 prompt:(out id*)arg3 shouldHideBackButton:(out bool*)arg4 leftBarButtonItems:(out id*)arg5 rightBarButtonItems:(out id*)arg6 forPhotoSelectionManager:(id)arg7;
- (id)photosGridBarsHelper:(id)arg1 titleForPhotoSelectionManager:(id)arg2;
- (id)photosGridBarsHelperPhotoSelectionManager:(id)arg1;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(bool)arg3 withAsset:(id)arg4;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id /* block */)ppt_dataSourceChangeHandler;
- (id /* block */)ppt_nextDeleteFinishedBlock;
- (void)ppt_setDataSourceChangeHandler:(id /* block */)arg1;
- (void)ppt_setNextDeleteFinishedBlock:(id /* block */)arg1;
- (long long)preferredStatusBarStyle;
- (void)preheatAssets;
- (void)preheatAssetsWithPrefetchingDisabled:(bool)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewActionController:(id)arg1 didDismissWithIdentifiedAction:(id)arg2;
- (bool)previewActionControllerPreventRevealInMomentAction:(id)arg1;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)previewingItem;
- (void)processDataSourceChange:(id)arg1;
- (id)pu_debugRows;
- (bool)pu_handleSecondTabTap;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)resetPreheating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (id)searchButtonItem;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(bool)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (void)selectAssets:(id)arg1 fromAssetCollection:(id)arg2;
- (id)selectedAssets;
- (id)selectedIndexPaths;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 forAssetCollection:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)sender:(id)arg1 shareSelectedAssetsWithCompletion:(id /* block */)arg2;
- (id)sessionInfo;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)setAllowedActions:(unsigned long long)arg1;
- (void)setAlternateContentView:(id)arg1;
- (void)setAlwaysHideTabBar:(bool)arg1;
- (void)setCollectionViewLayoutReferenceSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCollectionViewLayoutReferenceWidth:(double)arg1;
- (void)setContentViewInSyncWithModel:(bool)arg1;
- (void)setCustomDoneButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGridSpec:(id)arg1;
- (void)setHasKnownNonEmptyContent_toWorkAround31995766:(bool)arg1;
- (void)setInitiallyScrolledToBottom:(bool)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMainGridLayout:(id)arg1;
- (void)setOnViewDidAppearCompletion:(id /* block */)arg1;
- (void)setPendingProcessDataSourceUpdateBlock:(id /* block */)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4;
- (void)setSessionInfo:(id)arg1;
- (void)setShowsCustomDoneButtonItemOnLeft:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPerformAutomaticContentOffsetAdjustment;
- (bool)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (bool)shouldPreventRevealInMomentAction;
- (bool)shouldShowMenu;
- (bool)shouldShowTabBar;
- (bool)shouldShowToolbar;
- (bool)showsCustomDoneButtonItemOnLeft;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (struct CGPoint { double x1; double x2; })stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)swipeSelectionGestureRecognizer;
- (long long)swipeSelectionManager:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)swipeSelectionManager:(id)arg1 photoCollectionAtIndex:(unsigned long long)arg2;
- (void)swipeSelectionManager:(id)arg1 updatePhotoSelectionWithIndexes:(id)arg2 inSection:(long long)arg3 selectionMode:(long long)arg4;
- (double)topMarginForPhotosGlobalFooterView:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)updateEmptyPlaceholderViewAnimated:(bool)arg1;
- (void)updateGlobalFooter;
- (void)updateGlobalFooterUsingFooterView:(id)arg1;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(bool)arg1;
- (void)updateLayoutMetrics;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)updatePeripheralInterfaceAnimated:(bool)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (bool)updateSpec;
- (void)updateTitle;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(bool)arg2;
- (unsigned long long)userEventSourceType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsAddContentInToolbar;
- (bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (bool)wantsGlobalFooter;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (bool)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 contentMode:(long long*)arg3 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 shouldHidePhotoTokens:(id)arg2;
- (bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id /* block */)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;

@end
