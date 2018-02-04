/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpPresentationHelper : NSObject <PUPhotosPreviewPresentationControllerDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, UIGestureRecognizerDelegate> {
    NSSet * __assetReferencesDisplayedInTilingView;
    id /* block */  __browsingSessionCreationBlock;
    PUCameraPreviewTransitionDelegate * __cameraPreviewTransitionDelegate;
    PUTilingView * __disappearingTilingView;
    bool  __isEndingPresentation;
    bool  __isPerformingNonAnimatedPush;
    id  __libraryChangePauseToken;
    bool  __needsUpdateAssetReferencesDisplayedInTilingView;
    PUOneUpViewController * __oneUpViewController;
    PUChangeDirectionValueFilter * __panDirectionValueFilter;
    PUPinchedTileTracker * __pinchedTileTracker;
    long long  __presentationEndTimeoutIdentifier;
    bool  __shouldPauseLibraryChanges;
    long long  __state;
    UITapGestureRecognizer * __tapGestureRecognizer;
    PUTilingView * __tilingView;
    PUTilingView * __transitioningTilingView;
    <PUOneUpPresentationHelperAssetDisplayDelegate> * _assetDisplayDelegate;
    struct { 
        bool respondsToCurrentImageForAssetReference; 
        bool respondsToShouldHideAssetReferences; 
        bool respondsToScrollAssetReferenceToVisible; 
        bool respondsToShouldDisableScroll; 
    }  _assetDisplayDelegateFlags;
    PUBrowsingSession * _browsingSession;
    bool  _cachesScrubberView;
    <PUOneUpPresentationHelperDelegate> * _delegate;
    struct { 
        bool respondsToTransitionTypeWithProposedTransitionType; 
        bool respondsToWillPresentOneUpViewController; 
        bool respondsToDidDismissOneUpViewController; 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToScrollView; 
        bool respondsToPreferredBarStyle; 
        bool respondsToShouldLeaveContentOnSecondScreen; 
        bool respondsToDisableFinalFadeoutAnimation; 
        bool respondsToPreviewScrubberDidBecomeAvailable; 
        bool respondsToShouldAutoPlay; 
        bool respondsToPreventRevealInMomentAction; 
        bool respondsToPreferredPresentationOrientation; 
        bool respondsToEnableFreezeLayoutOnOrientationChange; 
    }  _delegateFlags;
    struct { 
        bool presentationInfo; 
    }  _needsUpdateFlags;
    PXPhotosDataSource * _photosDataSource;
    UIViewController * _presentingViewController;
    long long  _transitionType;
    id /* block */  _unlockDeviceHandler;
    id /* block */  _unlockDeviceStatus;
}

@property (setter=_setAssetReferencesDisplayedInTilingView:, nonatomic, retain) NSSet *_assetReferencesDisplayedInTilingView;
@property (nonatomic, readonly, copy) id /* block */ _browsingSessionCreationBlock;
@property (setter=_setCameraPreviewTransitionDelegate:, nonatomic, retain) PUCameraPreviewTransitionDelegate *_cameraPreviewTransitionDelegate;
@property (setter=_setDisappearingTilingView:, nonatomic) PUTilingView *_disappearingTilingView;
@property (setter=_setEndingPresentation:, nonatomic) bool _isEndingPresentation;
@property (setter=_setIsPerformingNonAnimatedPush:, nonatomic) bool _isPerformingNonAnimatedPush;
@property (setter=_setLibraryChangePauseToken:, nonatomic, retain) id _libraryChangePauseToken;
@property (setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:, nonatomic) bool _needsUpdateAssetReferencesDisplayedInTilingView;
@property (setter=_setOneUpViewController:, nonatomic, retain) PUOneUpViewController *_oneUpViewController;
@property (setter=_setPanDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_panDirectionValueFilter;
@property (setter=_setPinchedTileTracker:, nonatomic, retain) PUPinchedTileTracker *_pinchedTileTracker;
@property (setter=_setPresentationEndTimeoutIdentifier:, nonatomic) long long _presentationEndTimeoutIdentifier;
@property (setter=_setShouldPauseLibraryChanges:, nonatomic) bool _shouldPauseLibraryChanges;
@property (setter=_setState:, nonatomic) long long _state;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTilingView:, nonatomic, retain) PUTilingView *_tilingView;
@property (setter=_setTransitioningTilingView:, nonatomic, retain) PUTilingView *_transitioningTilingView;
@property (nonatomic) <PUOneUpPresentationHelperAssetDisplayDelegate> *assetDisplayDelegate;
@property (setter=_setBrowsingSession:, nonatomic, retain) PUBrowsingSession *browsingSession;
@property (nonatomic) bool cachesScrubberView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpPresentationHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOneUpPresented;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long transitionType;
@property (nonatomic, copy) id /* block */ unlockDeviceHandler;
@property (nonatomic, copy) id /* block */ unlockDeviceStatus;

- (void).cxx_destruct;
- (id)_assetReferencesDisplayedInTilingView;
- (id /* block */)_browsingSessionCreationBlock;
- (id)_cameraPreviewTransitionDelegate;
- (void)_cleanUpAfterTilingViewTransitionAnimated:(bool)arg1;
- (void)_cleanupOneUpViewControllerForDismissalIfNeeded;
- (void)_configureNavigationController:(id)arg1;
- (id)_createOneUpViewControllerWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (long long)_currentNavigationControllerOperation;
- (id)_currentTilingViewControllerTransition;
- (void)_didFinishTransitioningToOneUp;
- (id)_disappearingTilingView;
- (void)_disappearingTilingView:(id)arg1 animationCompleted:(bool)arg2;
- (void)_ensureRegistrationWithPresentingViewController;
- (bool)_handleInteractivePresentationWithBlock:(id /* block */)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleTileControllerAnimationEnd;
- (void)_invalidateAssetReferencesDisplayedInTilingView;
- (void)_invalidatePresentationInfo;
- (bool)_isEndingPresentation;
- (bool)_isPerformingNonAnimatedPush;
- (id)_libraryChangePauseToken;
- (bool)_needsUpdateAssetReferencesDisplayedInTilingView;
- (id)_newCollapsedLayout;
- (id)_oneUpViewController;
- (id)_panDirectionValueFilter;
- (id)_pinchedTileTracker;
- (bool)_prepareDismissalForced:(bool)arg1;
- (void)_presentOneUpViewController:(id)arg1 animated:(bool)arg2 interactiveMode:(long long)arg3 completion:(id /* block */)arg4;
- (void)_presentationEndDidTimeOut:(long long)arg1;
- (long long)_presentationEndTimeoutIdentifier;
- (id)_scrollViewForPreviewing;
- (void)_setAssetReferencesDisplayedInTilingView:(id)arg1;
- (void)_setBrowsingSession:(id)arg1;
- (void)_setCameraPreviewTransitionDelegate:(id)arg1;
- (void)_setDisappearingTilingView:(id)arg1;
- (void)_setEndingPresentation:(bool)arg1;
- (void)_setIsPerformingNonAnimatedPush:(bool)arg1;
- (void)_setLibraryChangePauseToken:(id)arg1;
- (void)_setNeedsUpdateAssetReferencesDisplayedInTilingView:(bool)arg1;
- (void)_setOneUpViewController:(id)arg1;
- (void)_setPanDirectionValueFilter:(id)arg1;
- (void)_setPinchedTileTracker:(id)arg1;
- (void)_setPresentationEndTimeoutIdentifier:(long long)arg1;
- (void)_setShouldPauseLibraryChanges:(bool)arg1;
- (void)_setState:(long long)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTilingView:(id)arg1;
- (void)_setTransitioningTilingView:(id)arg1;
- (bool)_shouldAutoplayOnNavigation;
- (bool)_shouldPauseLibraryChanges;
- (long long)_state;
- (id)_tapGestureRecognizer;
- (id)_tilingView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_tilingViewTransitionTransform;
- (id)_transitionHostingView;
- (id)_transitioningTilingView;
- (void)_updateAssetReferencesDisplayedInTilingView;
- (void)_updateLayout;
- (void)_updateLayout:(id)arg1;
- (void)_updatePresentationInfoIfNeeded;
- (void)_updatePreviewingScrubber;
- (void)_updateTapGestureRecognizer;
- (id)assetDisplayDelegate;
- (void)beginUsingBlackTheme;
- (id)browsingSession;
- (id)browsingSessionCreateIfNeeded:(bool)arg1;
- (bool)cachesScrubberView;
- (id)cameraPreviewTransitionDelegateWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sourceImage:(id)arg2;
- (bool)canDismissOneUpViewController;
- (bool)canPresentOneUpViewControllerAnimated:(bool)arg1;
- (void)cancelCommitTransitionForPreviewViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (bool)dismissOneUpViewControllerForced:(bool)arg1 animated:(bool)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)handlePresentingPanGestureRecognizer:(id)arg1;
- (bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithBrowsingSessionCreationBlock:(id /* block */)arg1;
- (id)initWithPhotosDataSource:(id)arg1;
- (void)interactiveTileTracker:(id)arg1 didStopTrackingTileController:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 willStartTrackingTileController:(id)arg2;
- (bool)isOneUpPresented;
- (void)navigateToAssetAtIndexPath:(id)arg1;
- (id)photosDataSource;
- (void)photosPreviewPresentationController:(id)arg1 willPresentPreviewViewController:(id)arg2;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForTileWithLayoutInfo:(id)arg2;
- (double)pinchedTiledTracker:(id)arg1 initialAspectRatioForTileWithLayoutInfo:(id)arg2;
- (void)presentOneUpViewControllerAnimated:(bool)arg1 interactiveMode:(long long)arg2;
- (void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg1 animated:(bool)arg2 interactiveMode:(long long)arg3;
- (id)presentingViewController;
- (void)presentingViewControllerScrollViewDidScroll:(id)arg1;
- (void)presentingViewControllerViewDidAppear:(bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(bool)arg1;
- (void)presentingViewControllerViewWillAppear:(bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(bool)arg1;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1 allowingActions:(bool)arg2;
- (void)setAssetDisplayDelegate:(id)arg1;
- (void)setCachesScrubberView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setUnlockDeviceHandler:(id /* block */)arg1;
- (void)setUnlockDeviceStatus:(id /* block */)arg1;
- (bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (void)tilingView:(id)arg1 didStopUsingTileController:(id)arg2;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForUpdateWithItems:(id)arg2;
- (void)tilingView:(id)arg1 willStartUsingTileController:(id)arg2;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(bool)arg4 animationSetupCompletionHandler:(id /* block */)arg5;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (bool)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1;
- (void)tilingViewDidEndAnimatingTileControllers:(id)arg1;
- (void)tilingViewDidUpdateTileControllers:(id)arg1;
- (long long)transitionType;
- (id /* block */)unlockDeviceHandler;
- (id /* block */)unlockDeviceStatus;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end
