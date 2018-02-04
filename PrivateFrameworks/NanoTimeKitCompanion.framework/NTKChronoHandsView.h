/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoHandsView : NTKAnalogHandsView {
    NTKHandView * _chronoFlybackMinuteHandView;
    NTKHandView * _chronoFlybackSecondHandView;
    NTKHandView * _chronoMinuteHandView;
    NTKHandView * _chronoSecondHandView;
    NTKChronoPalette * _palette;
    unsigned long long  _timeScale;
}

@property (nonatomic, readonly) NTKHandView *chronoFlybackMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoFlybackSecondHandView;
@property (nonatomic, readonly) NTKHandView *chronoMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoSecondHandView;
@property (nonatomic, retain) NTKChronoPalette *palette;
@property (nonatomic) unsigned long long timeScale;

+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_enumerateChronoHandViews:(id /* block */)arg1;
- (void)_enumerateFlybackChronoHands:(id /* block */)arg1;
- (void)_enumeratePrimaryChronoHands:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (double)_stopwatchCurrentLapTime;
- (double)_stopwatchCurrentTime;
- (bool)_stopwatchIsRunning;
- (bool)_stopwatchIsStopped;
- (long long)_stopwatchLapCount;
- (double)chronoDuration;
- (id)chronoFlybackMinuteHandView;
- (id)chronoFlybackSecondHandView;
- (id)chronoMinuteHandView;
- (id)chronoSecondHandView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)palette;
- (double)secondsAnimationFPS;
- (void)setPalette:(id)arg1;
- (void)setTimeScale:(unsigned long long)arg1;
- (void)showChronoMode;
- (void)showTimeMode;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (unsigned long long)timeScale;
- (void)updateLapHandsVisibility;
- (double)upperDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;

@end
