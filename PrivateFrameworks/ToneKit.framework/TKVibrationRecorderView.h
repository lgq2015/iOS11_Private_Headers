/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {
    UIToolbar * _bottomLineToolbar;
    NSLayoutConstraint * _bottomLineToolbarBottomConstraint;
    UIToolbar * _controlsToolbar;
    NSLayoutConstraint * _controlsToolbarTopConstraint;
    double  _currentVibrationComponentDidStartTimestamp;
    double  _currentVibrationProgressDidStartTimestamp;
    <TKVibrationRecorderViewDelegate> * _delegate;
    <NSCopying> * _displayLinkManagerObserverToken;
    UILabel * _instructionsLabel;
    bool  _isAnimatingProgress;
    bool  _isReplayModeEnabled;
    bool  _isWaitingForEndOfCurrentVibrationComponent;
    int  _leftButtonIdentifier;
    NSLayoutConstraint * _progressToolbarBottomConstraint;
    TKVibrationRecorderProgressView * _progressView;
    int  _rightButtonIdentifier;
    <TKVibrationRecorderStyleProvider> * _styleProvider;
    TKVibrationRecorderTouchSurface * _touchSurface;
    NSLayoutConstraint * _touchSurfaceTopConstraint;
    double  _vibrationPatternMaximumDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TKVibrationRecorderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enterWaitingModeWithAnimation:(bool)arg1 enablePlayButton:(bool)arg2;
- (void)_exitWaitingModeWithAnimation:(bool)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_handleScreenPeripheryInsetsDidChangeNotification:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(bool)arg2 rightButtonIdentifier:(int)arg3 enabled:(bool)arg4 animated:(bool)arg5;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)_updateBottomLineToolbarForPeripheryInsetsChange;
- (void)_updateProgress:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingModeWithPlayButtonEnabled:(bool)arg1;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setDelegate:(id)arg1;
- (void)startAnimatingProgress;
- (void)stopAnimatingProgress;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;

@end
