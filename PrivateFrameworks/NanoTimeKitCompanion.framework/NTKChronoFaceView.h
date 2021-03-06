/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {
    NTKUtilityComplicationFactory * _complicationFactory;
    unsigned long long  _currentMode;
    UIColor * _labelColor;
    _LapLabel * _lapLabel;
    NTKChronoButton * _lapResetButton;
    NTKTimeIntervalLabel * _lapTimeLabel;
    double  _lastStartTime;
    NTKChronoPalette * _palette;
    NTKChronoButton * _pauseButton;
    NTKStopwatchButton * _startSessionButton;
    UILabel * _totalLabel;
    NTKTimeIntervalLabel * _totalTimeLabel;
}

@property (nonatomic, readonly) NTKChronoScene *chronoScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NTKChronoHandsView *timeView;

+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyPaletteToTimeView:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransformToForegroundViews:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_buttonAlphaForEditMode:(long long)arg1;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationAlphasForFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_considerUpdatingLabels;
- (id)_dateAccentColorForEditMode:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_dateComplicationCenterOffset;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_dateComplicationRightAlignment;
- (id)_dateForegroundColorForEditMode:(long long)arg1;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateChronoModeViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateTimeModeViewsWithBlock:(id /* block */)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (bool)_handsAreInForegroundForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_lapResetButtonPressed;
- (void)_layoutForegroundContainerView;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadChronoModeViews;
- (void)_loadLayoutRules;
- (void)_loadScene;
- (void)_loadSnapshotContentViews;
- (void)_loadTimeModeViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_pauseButtonPressed;
- (void)_performWristRaiseAnimation;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_reconsiderStopwatchUpdates;
- (void)_reloadStopwatchState;
- (void)_setDateComplicationAlpha:(double)arg1 animated:(bool)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_showAppropriateModeAnimated:(bool)arg1;
- (void)_showChronographModeAnimated:(bool)arg1;
- (void)_showTimeModeAnimated:(bool)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_startSessionButtonPressed;
- (void)_startStopwatchUpdates;
- (void)_stopStopwatchUpdates;
- (bool)_supportsUnadornedSnapshot;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationFactoryWithDateComplicationView:(id)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_updateStopwatchButtons;
- (void)_updateStopwatchLabels;
- (bool)_usesCustomZoom;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsStatusBarHidden;
- (id)chronoScene;
- (void)dealloc;
- (void)fadeInLowerSubdialAnimated:(bool)arg1;
- (void)fadeOutLowerSubdialAnimated:(bool)arg1;
- (void)fadeStartSessionButtonToAlpha:(double)arg1 animated:(bool)arg2;
- (bool)inSession;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)lapAdded;
- (bool)lapReset;
- (void)reload;
- (void)setUserInteractionForButtonsEnabled:(bool)arg1;
- (bool)startStop;
- (void)stateChanged;
- (void)updateStartSessionButtonGlyph;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end
