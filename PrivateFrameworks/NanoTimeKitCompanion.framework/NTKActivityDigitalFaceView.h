/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityDigitalFaceView : NTKFaceView <NTKActivityFaceViewFactoryDelegate> {
    double  _blinkerAndSecondsWidth;
    UILabel * _briskMinutesLabel;
    long long  _briskStringMetricWidth;
    struct RingLayout { 
        double bottomEdgeInset; 
        double leftEdgeInset; 
        double diameter; 
        double thickness; 
        double interspacing; 
    }  _currentRingLayout;
    NTKPolygonCylinderView * _densityEditingPolygonView;
    UILabel * _energyLabel;
    long long  _energyStringMetricWidth;
    NTKActivityFaceViewFactory * _faceViewFactory;
    double  _lastBriskPercentage;
    double  _lastEnergyPercentage;
    double  _lastSedentaryPercentage;
    double  _rightTimeViewInset;
    HKRingsView * _ringsView;
    bool  _showSeconds;
    UILabel * _standHoursLabel;
    long long  _standStringMetricWidth;
    NTKActivityFaceControl * _tapToLaunchButton;
    NSDate * _timeDensityEditingOverrideDate;
    UIView * _timeLabelBackgroundView;
    bool  _useTimeTravelStyleForTimeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double rightTimeViewInset;
@property (nonatomic) bool showSeconds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeView;
@property (nonatomic) bool useTimeTravelStyleForTimeLabel;

+ (id)_newRingsView;
+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(bool)arg2 animated:(bool)arg3;
- (void)_applyCurrentRingLayout;
- (void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(bool)arg3 animated:(bool)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_blinkerAndSecondsWidth;
- (void)_cleanUpAfterDetailEditing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForDetailEditing;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateActivityLabels:(id /* block */)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_launchButtonPressed:(id)arg1;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (long long)_polygonIndexForAccuracy:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (void)_prepareWristRaiseAnimation;
- (void)_recenterTimeView;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (double)_rightTimeViewInsetForEditMode:(long long)arg1;
- (double)_ringAlphaForEditMode:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_ringCenterForLayout:(struct RingLayout { double x1; double x2; double x3; double x4; double x5; })arg1;
- (id)_ringGroupController;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setActivityViewsAlpha:(double)arg1 animated:(bool)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_supportsTimeScrubbing;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeViewBackgroundRect;
- (void)_unloadSnapshotContentViews;
- (void)_updateCurrentRingLayoutIfNecessary;
- (void)_updateTimeViewSecondsDisplayState;
- (bool)_wantsTimeTravelStatusModule;
- (void)applyEntryModel:(id)arg1 animated:(bool)arg2;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)rightTimeViewInset;
- (void)setDataMode:(long long)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setRightTimeViewInset:(double)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setUseTimeTravelStyleForTimeLabel:(bool)arg1;
- (bool)showSeconds;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(bool)arg1;
- (bool)useTimeTravelStyleForTimeLabel;

@end
