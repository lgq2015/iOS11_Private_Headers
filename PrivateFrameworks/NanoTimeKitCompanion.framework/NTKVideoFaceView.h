/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {
    NTKUtilityComplicationFactory * _complicationFactory;
    unsigned int  _isComplicationColorApplied;
    unsigned int  _tapToPlayGestureEnabled;
    unsigned long long  _theme;
    NTKComplicationDisplayWrapperView * _touchWrapper;
    unsigned int  _useDefaultListing;
}

- (void).cxx_destruct;
- (void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(bool)arg2;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_defaultListing;
- (void)_handleTapToPlayVideoGesture;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (id)_overlayColor;
- (void)_performPreloadVideoTask;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_selectDefaultListing;
- (bool)_shouldDelayBeforePlayingNextVideo;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (void)_updatePaused;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)_viewForEditOption:(id)arg1;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end
