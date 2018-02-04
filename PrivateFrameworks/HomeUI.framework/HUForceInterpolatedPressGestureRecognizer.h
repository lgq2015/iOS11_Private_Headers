/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer {
    double  _currentSampleForceMultiplier;
    double  _currentSampleTimestamp;
    NSMutableSet * _hu_activeTouches;
    double  _overallForceMultiplierExcludingCurrentSample;
    double  _touchStartTime;
}

@property (nonatomic, readonly) double currentForceMultiplier;
@property (nonatomic) double currentSampleForceMultiplier;
@property (nonatomic) double currentSampleTimestamp;
@property (nonatomic, readonly) NSMutableSet *hu_activeTouches;
@property (nonatomic, readonly) double overallForceMultiplier;
@property (nonatomic) double overallForceMultiplierExcludingCurrentSample;
@property (nonatomic) double touchStartTime;

- (void).cxx_destruct;
- (double)_forceMultiplierIncludingCurrentSample;
- (void)_logForceMultiplierSample;
- (void)_resetForceSamples;
- (double)currentForceMultiplier;
- (double)currentSampleForceMultiplier;
- (double)currentSampleTimestamp;
- (id)hu_activeTouches;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)overallForceMultiplier;
- (double)overallForceMultiplierExcludingCurrentSample;
- (void)setCurrentSampleForceMultiplier:(double)arg1;
- (void)setCurrentSampleTimestamp:(double)arg1;
- (void)setOverallForceMultiplierExcludingCurrentSample:(double)arg1;
- (void)setTouchStartTime:(double)arg1;
- (double)touchStartTime;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
