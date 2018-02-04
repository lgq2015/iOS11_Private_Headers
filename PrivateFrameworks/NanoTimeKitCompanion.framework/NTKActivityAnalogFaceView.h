/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityAnalogFaceView : NTKAnalogFaceView <NTKActivityFaceViewFactoryDelegate> {
    UIView * _activityContainerView;
    double  _activityViewsAlpha;
    UILabel * _briskMinutesLabel;
    double  _contentScale;
    NTKDateComplicationController * _dateComplicationController;
    NTKActivityDateComplicationLabel * _dateComplicationLabel;
    NTKActivityDialView * _dialView;
    UILabel * _energyLabel;
    NSMutableDictionary * _faceColorsToSchemes;
    NTKActivityFaceViewFactory * _faceViewFactory;
    bool  _isDetailedDensity;
    double  _lastBriskPercentage;
    double  _lastEnergyPercentage;
    double  _lastSedentaryPercentage;
    HKRingsView * _ringsView;
    bool  _snapshotContentViewsLoaded;
    UILabel * _standHoursLabel;
    NTKActivityFaceControl * _tapToLaunchButton;
    bool  _wristRaiseAnimationPending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarm;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;

- (void).cxx_destruct;
- (id)_accentColorForFaceColor:(unsigned long long)arg1;
- (void)_addOrRemoveChronoViewsIfNecessary;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyCurrentEntryModelAnimated:(bool)arg1;
- (void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(bool)arg2 animated:(bool)arg3;
- (void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(bool)arg3 animated:(bool)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (id)_cachedSchemeForFaceColor:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (void)_dateComplicationPressed:(id)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (double)_dialScaleForEditMode:(long long)arg1;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateActivityLabels:(id /* block */)arg1;
- (void)_enumerateChronoViews:(id /* block */)arg1;
- (void)_enumerateRingGroups:(id /* block */)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handAlphaForEditMode:(long long)arg1;
- (id)_highlightImage;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_launchButtonPressed:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadChronoViewsIfNecessary;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (double)_ringAlphaForEditMode:(long long)arg1;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setActivityViewsAlpha:(double)arg1 includeDateComplication:(bool)arg2 animated:(bool)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_showChronoDetailByFraction:(double)arg1 fillRings:(bool)arg2;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGPoint { double x1; double x2; })_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (void)applyEntryModel:(id)arg1 animated:(bool)arg2;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDataMode:(long long)arg1;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(bool)arg1;

@end
