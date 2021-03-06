/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMicaFaceView : NTKFaceView <CLKTimeFormatterObserver, NTKTimeView> {
    bool  _animatingToNewDate;
    NSTimer * _animationUpdateTimer;
    NSCalendar * _calendar;
    UIView * _contentUnavailableView;
    NTKMicaDocument * _currentDocument;
    int  _debugReloadNotifyToken;
    bool  _frozen;
    NSOperationQueue * _loadQueue;
    _UICAPackageView * _micaView;
    NSDate * _overrideDate;
    NTKMicaDocumentPickerView * _thumbnailPickerView;
    CLKTimeFormatter * _timeFormatter;
    double  _timeOffset;
    UIImageView * _transitionalSnapshotView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (bool)_canRunTimeAnimation;
- (void)_configureForEditMode:(long long)arg1;
- (void)_documentDidChange:(id)arg1;
- (void)_enumerateHandViewLayersWithBlock:(id /* block */)arg1;
- (id)_hourHandLayer;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadContentUnavailableViewIfNecessary;
- (void)_loadSnapshotContentViews;
- (id)_minuteHandLayer;
- (id)_secondHandLayer;
- (void)_setCurrentDocument:(id)arg1;
- (void)_significantTimeChanged;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (void)_unloadContentUnavailableView;
- (void)_updateDigitalTimeViewWithFormatterText;
- (void)_updateForNotification;
- (void)_updateMicaViewWithDocument:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFrozen;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;

@end
