/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKPulseAnimationController : TSKHighlightController {
    bool  _autohide;
    <TSKPulseAnimationControllerProtocol> * _delegate;
    double  _duration;
    bool  _pulsating;
    double  _pulseOffset;
}

@property (nonatomic) bool autohide;
@property (nonatomic) double duration;
@property (nonatomic) bool pulsating;
@property (nonatomic) double pulseOffset;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)autohide;
- (void)dealloc;
- (void)disconnect;
- (bool)drawRoundedRect;
- (double)duration;
- (id)initWithDelegate:(id)arg1;
- (bool)pulsating;
- (double)pulseOffset;
- (void)reset;
- (void)setAutohide:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setPulsating:(bool)arg1;
- (void)setPulseOffset:(double)arg1;
- (void)startAnimating;
- (void)stop;

@end
