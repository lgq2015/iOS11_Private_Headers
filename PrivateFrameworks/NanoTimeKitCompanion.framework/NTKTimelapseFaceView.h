/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelapseFaceView : NTKAVListingFaceBaseView {
    UIView * _bottomGradientView;
    NTKUtilityComplicationFactory * _complicationFactory;
    UIView * _cornerView;
    UIColor * _foregroundColor;
    unsigned int  _isComplicationColorApplied;
    unsigned int  _isUsingLegibility;
    UIColor * _shadowColor;
    UITapGestureRecognizer * _tapToPlayGesture;
    unsigned long long  _theme;
    UIView * _topGradientView;
}

- (void).cxx_destruct;
- (void)_applyComplicationContentSpecificAttributesAnimated:(bool)arg1;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_handleOrdinaryScreenWake;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newBottomGradientViewWithColor:(id)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_newTopGradientViewWithColor:(id)arg1;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (id)_onDeckPosterImageViewWithTheme:(unsigned long long)arg1;
- (void)_performPreloadVideoTask;
- (void)_playQueuedUpVideo;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (void)_resetVideoForListing;
- (void)_setDateAttributes:(id)arg1 animated:(bool)arg2;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)_viewForEditOption:(id)arg1;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;

@end
