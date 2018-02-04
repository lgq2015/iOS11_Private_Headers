/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTorchPatternController : NSObject {
    CUCaptureController * __captureController;
    CAMTorchPattern * __currentPattern;
    CADisplayLink * __displayLink;
    bool  __performing;
    double  __startTime;
    double  _stepInterval;
}

@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, readonly) CAMTorchPattern *_currentPattern;
@property (nonatomic, readonly) CADisplayLink *_displayLink;
@property (getter=_isPerforming, setter=_setPerforming:, nonatomic) bool _performing;
@property (nonatomic, readonly) double _startTime;
@property (nonatomic) double stepInterval;

- (void).cxx_destruct;
- (void)_applyTorchLevel:(float)arg1;
- (id)_captureController;
- (id)_currentPattern;
- (id)_displayLink;
- (bool)_isPerforming;
- (void)_resetTorchLevel;
- (void)_setPerforming:(bool)arg1;
- (double)_startTime;
- (void)blink;
- (void)displayLinkFired:(id)arg1;
- (void)doubleBlink;
- (id)initWithCaptureController:(id)arg1;
- (void)setStepInterval:(double)arg1;
- (void)startPerformingPattern:(id)arg1;
- (double)stepInterval;
- (void)stopPerformingPattern;

@end
