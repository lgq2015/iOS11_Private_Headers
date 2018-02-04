/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedUIViewController : UIViewController <PXActionPerformerDelegate, PXChangeObserver, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXReusableObjectPoolDelegate, PXScrollViewControllerObserver, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUIViewControllerZoomTransitionEndPoint, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate> {
    _UIContentUnavailableView * __contentUnavailableView;
    PXPhotoAnalysisStatusController * __graphStatusController;
    PXMemoriesFeedViewControllerHelper * __helper;
    UILongPressGestureRecognizer * __longPressRecognizer;
    PXMemoriesOnboardingUIViewController * __onboardingViewController;
    <UIViewControllerPreviewing> * __previewingContext;
    UIBarButtonItem * __refreshBarButtonItem;
    PXUIScrollViewController * __scrollViewController;
    UIBarButtonItem * __searchBarButtonItem;
    PXUITapGestureRecognizer * __tapRecognizer;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXMemoriesUITileSource * __tileSource;
    PXTouchingUIGestureRecognizer * __touchRecognizer;
    bool  _hasAppeared;
    bool  _isInitialized;
    struct { 
        bool navigationItem; 
        bool contentUnavailablePlaceholder; 
    }  _needsUpdateFlags;
    NSString * _scrollTargetMemoryUUID;
}

@property (setter=_setContentUnavailableView:, nonatomic, retain) _UIContentUnavailableView *_contentUnavailableView;
@property (nonatomic, readonly) PXPhotoAnalysisStatusController *_graphStatusController;
@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (setter=_setLongPressRecognizer:, nonatomic, retain) UILongPressGestureRecognizer *_longPressRecognizer;
@property (setter=_setOnboardingViewController:, nonatomic, retain) PXMemoriesOnboardingUIViewController *_onboardingViewController;
@property (setter=_setPreviewingContext:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingContext;
@property (nonatomic, readonly) UIBarButtonItem *_refreshBarButtonItem;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) UIBarButtonItem *_searchBarButtonItem;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) PXSectionedDataSource *ppt_memoriesDataSource;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (setter=setScrollTargetMemoryUUID:, nonatomic, retain) NSString *scrollTargetMemoryUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceFeature;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)_setCurrentFeedViewController:(id)arg1;

- (void).cxx_destruct;
- (bool)_appAllowsSupressionOfAlerts;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_contentUnavailableView;
- (id)_graphStatusController;
- (void)_handleScrollViewLongPress:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleSpecChange;
- (void)_handleTouch:(id)arg1;
- (id)_helper;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_invalidateNavigationItem;
- (id)_longPressRecognizer;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (void)_navigateToMemoryAtSectionObjectReference:(id)arg1;
- (bool)_needsUpdate;
- (id)_onboardingViewController;
- (id)_photosDetailsContextForMemoryObjectReference:(id)arg1;
- (void)_preloadFontSpecs;
- (void)_presentActionsForMemoryReference:(id)arg1;
- (id)_previewingContext;
- (id)_refreshBarButtonItem;
- (void)_refreshBarButtonItemAction:(id)arg1;
- (id)_scrollViewController;
- (id)_searchBarButtonItem;
- (void)_searchBarButtonItemAction:(id)arg1;
- (void)_setContentUnavailableView:(id)arg1;
- (void)_setLongPressRecognizer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setOnboardingViewController:(id)arg1;
- (void)_setPreviewingContext:(id)arg1;
- (id)_showMemoryDetailsForContext:(id)arg1 animated:(bool)arg2;
- (id)_sourceViewForMemoryActionsController;
- (void)_startRefreshWithCompletion:(id /* block */)arg1;
- (id)_suppressionContexts;
- (id)_tapRecognizer;
- (id)_tileAnimator;
- (id)_tileSource;
- (id)_touchRecognizer;
- (void)_updateBarAppearance;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLongPressGestureRecognizer;
- (void)_updateNavigationItemIfNeeded;
- (void)_updatePreviewing;
- (void)_updateScrollViewControllerContentInset;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)playMiroMovieWithMemoryUUID:(id)arg1;
- (id)ppt_memoriesDataSource;
- (void)ppt_navigateToLatestMemoryAnimated:(bool)arg1;
- (void)ppt_navigateToMemoryWithReference:(id)arg1 animated:(bool)arg2;
- (void)ppt_revealMemoryWithReference:(id)arg1 animated:(bool)arg2;
- (id)ppt_scrollView;
- (id)preferredFocusEnvironments;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)pu_handleSecondTabTap;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)revealMostRecentMemoryAnimated:(bool)arg1;
- (id)scrollTargetMemoryUUID;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)setScrollTargetMemoryUUID:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (long long)userInterfaceFeature;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_searchPresentation;

@end
