/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAVWaveformViewController : UIViewController <RCCaptureSessionObserver, RCGLWaveformViewDelegate, RCPreviewControllerObserver> {
    RCAVState * _AVState;
    RCUIConfiguration * _UIConfiguration;
    RCCompositionController * _activeCaptureCompositionController;
    RCCaptureSession * _activeCaptureSession;
    RCPreviewController * _activePreviewController;
    bool  _autocenterCurrentTimeIndicatorAlways;
    long long  _batchUpdatingDisplayableTimesCount;
    bool  _clipsTimeMarkersToDuration;
    double  _currentTime;
    bool  _currentTimeTracksCapturedEndPoint;
    double  _defaultVisibleDuration;
    <RCAVWaveformViewControllerDelegate> * _delegate;
    double  _duration;
    struct { 
        double beginTime; 
        double endTime; 
    }  _highlightTimeRange;
    RCLayoutMetrics * _layoutMetrics;
    double  _maximumSelectionDuration;
    bool  _needsUpdateDisplayableTime;
    double  _nextPreviewStartTime;
    bool  _selectionOverlayVisible;
    bool  _showingSelectionOverlayEnabled;
    bool  _userInteractionEnabled;
    RCWaveformDataSource * _waveformDataSource;
    RCGLWaveformViewController * _waveformViewController;
}

@property (nonatomic, readonly) RCAVState *AVState;
@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (nonatomic, retain) RCCaptureSession *activeCaptureSession;
@property (nonatomic, retain) RCPreviewController *activePreviewController;
@property (nonatomic) bool autocenterCurrentTimeIndicatorAlways;
@property (nonatomic) bool clipsTimeMarkersToDuration;
@property (nonatomic) double currentTime;
@property (nonatomic, readonly) double currentTimeIndicatorCoordinate;
@property (nonatomic) bool currentTimeTracksCapturedEndPoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCAVWaveformViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } highlightTimeRange;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;
@property (nonatomic) double maximumSelectionDuration;
@property (nonatomic, readonly) double nextPreviewStartTime;
@property (nonatomic, readonly) struct { double x1; double x2; } nextPreviewTimeRange;
@property (nonatomic, readonly) struct { double x1; double x2; } selectedTimeRange;
@property (getter=isSelectionOverlayVisible, nonatomic, readonly) bool selectionOverlayVisible;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;
@property (nonatomic, readonly) double waveformBottomLineInset;
@property (nonatomic, retain) RCWaveformDataSource *waveformDataSource;
@property (nonatomic, retain) RCGLWaveformViewController *waveformViewController;

- (void).cxx_destruct;
- (id)AVState;
- (id)UIConfiguration;
- (void)_beginShowingSelectionOverlay;
- (unsigned long long)_currentTimeDisplayOptions;
- (unsigned long long)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(bool)arg1;
- (void)_didUpdateDisplayableTime;
- (void)_endShowingSelectionOverlayWithCompletionBlock:(id /* block */)arg1;
- (id)_selectionOverlay;
- (void)_setSelectionOverlayEnabled:(bool)arg1;
- (void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)_updateCurrentTimeForCapturedInput;
- (void)_updateDisplayableTimesWithBlock:(id /* block */)arg1;
- (void)_updateInterfaceForAVState;
- (id)activeCaptureSession;
- (id)activePreviewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotatedWaveformRectForLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)autocenterCurrentTimeIndicatorAlways;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (bool)clipsTimeMarkersToDuration;
- (double)currentTime;
- (double)currentTimeIndicatorCoordinate;
- (bool)currentTimeTracksCapturedEndPoint;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)hidSelectionOverlayWithCompletionBlock:(id /* block */)arg1;
- (struct { double x1; double x2; })highlightTimeRange;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWaveformDataSource:(id)arg1 delegate:(id)arg2;
- (bool)isSelectionOverlayVisible;
- (bool)isUserInteractionEnabled;
- (id)layoutMetrics;
- (double)maximumSelectionDuration;
- (double)nextPreviewStartTime;
- (struct { double x1; double x2; })nextPreviewTimeRange;
- (void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
- (void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
- (void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;
- (void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;
- (void)rc_screenUpdatesDisabledDidChange;
- (void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (struct { double x1; double x2; })selectedTimeRange;
- (void)setAVState:(id)arg1;
- (void)setActiveCaptureSession:(id)arg1;
- (void)setActivePreviewController:(id)arg1;
- (void)setAutocenterCurrentTimeIndicatorAlways:(bool)arg1;
- (void)setClipsTimeMarkersToDuration:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeTracksCapturedEndPoint:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (struct { double x1; double x2; })setHighlightTimeRange;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setMaximumSelectionDuration:(double)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setUIConfiguration:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)setWaveformDataSource:(id)arg1;
- (void)setWaveformViewController:(id)arg1;
- (void)showSelectionOverlay;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (struct { double x1; double x2; })visibleTimeRange;
- (double)waveformBottomLineInset;
- (id)waveformDataSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })waveformRectForLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)waveformViewController;
- (void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(struct { double x1; double x2; })arg2;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(bool)arg3;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;

@end
