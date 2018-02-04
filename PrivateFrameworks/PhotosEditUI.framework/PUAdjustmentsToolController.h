/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsToolController : PUPhotoEditToolController <PUAdjustmentsModeBarDataSource, PUAdjustmentsModeBarDelegate, PUPhotoEditVisualLevelSliderDataSource, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSArray * __allAvailableModes;
    PXUISnappingController * __snappingController;
    UIScrollView * _adjustmentScrollView;
    NSArray * _adjustmentScrollViewConstraints;
    PUAdjustmentsModeBar * _adjustmentsModeBar;
    NSArray * _adjustmentsModeBarConstraints;
    NSMutableSet * _cleanSliderThumbnailsModes;
    double  _currentModeLevelSliderOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionInitialScrollOffset;
    long long  _interactionMode;
    double  _interactiveModeTransitionStartOffset;
    PUAdjustmentsMode * _lastUsedMode;
    NSMapTable * _levelSlidersByMode;
    bool  _ppt_EverAdjusted;
    double  _ppt_scrollDelta;
    double  _scrollViewModeSwitchSideOriginOffset;
    NSMapTable * _sliderThumbnailsByModeAndIntensity;
}

@property (setter=_setSnappingController:, nonatomic, retain) PXUISnappingController *_snappingController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUAdjustmentsToolControllerSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_adjustmentScrollViewOffsetForLevel:(double)arg1 inMode:(id)arg2;
- (id)_allAvailableModes;
- (void)_copyAdjustmentValuesFromModel:(id)arg1;
- (id)_existingLevelSliderForMode:(id)arg1;
- (void)_finishCurentInteraction;
- (void)_generateThumbnailsIfNeededForSlider:(id)arg1 mode:(id)arg2;
- (void)_handleModePickerCancelButton:(id)arg1;
- (void)_invalidateVisualSliderThumbnailsForAllModes;
- (void)_invalidateVisualSliderThumbnailsForMode:(id)arg1;
- (double)_levelForAdjustmentScrollViewOffset:(double)arg1 inMode:(id)arg2;
- (id)_levelSliderForMode:(id)arg1;
- (void)_ppt_scrollAfterDelay:(id /* block */)arg1;
- (void)_reloadLayoutDependentUIFromOrientation:(long long)arg1 toOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)_resyncAdjustmentScrollViewOffset;
- (void)_saveVisualSliderImage:(id)arg1 forMode:(id)arg2 intensityIndex:(long long)arg3;
- (void)_setCurrentModeLevelSliderOffset:(double)arg1 animatedBaseValueIndicator:(bool)arg2;
- (void)_setSnappingController:(id)arg1;
- (double)_sliderLength;
- (id)_snappingController;
- (void)_updateAdjustmentScrollView;
- (void)_updateAdjustmentsModeBar;
- (void)_updateAlternateToolbarButton;
- (void)_updateBackgroundColorAnimated:(bool)arg1;
- (void)_updateSubviewsOrdering;
- (void)_updateValuesForLevelSlider:(id)arg1 mode:(id)arg2 animatedBaseValueIndicator:(bool)arg3;
- (id)_visualSliderImageForMode:(id)arg1 intensityIndex:(long long)arg2;
- (id)adjustmentModesForAdjustmentsModeBar:(id)arg1;
- (void)adjustmentsModeBar:(id)arg1 didTapModeToggle:(id)arg2;
- (bool)adjustmentsModeBar:(id)arg1 isEnabledForMode:(id)arg2;
- (double)adjustmentsModeBar:(id)arg1 levelForMode:(id)arg2;
- (id)adjustmentsModeBar:(id)arg1 levelSliderForMode:(id)arg2;
- (void)adjustmentsModeBarDidChangeModeListExpandedState:(id)arg1;
- (void)adjustmentsModeBarDidChangeSelectedMode:(id)arg1;
- (void)basePhotoInvalidated;
- (bool)canResetToDefaultValue;
- (void)didBecomeActiveTool;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (void)loadView;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)photoEditModelDidChange;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectBWSlider:(id /* block */)arg1;
- (void)ppt_selectColorSlider:(id /* block */)arg1;
- (void)ppt_selectLightSlider:(id /* block */)arg1;
- (void)ppt_setSteps:(long long)arg1;
- (id)preferredPreviewBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)selectedToolbarIcon;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)specDidChange;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (id)visualLevelSlider:(id)arg1 imageForIntensityIndex:(long long)arg2;
- (long long)visualLevelSliderNumberOfThumbnails:(id)arg1;
- (void)willBecomeActiveTool;

@end
