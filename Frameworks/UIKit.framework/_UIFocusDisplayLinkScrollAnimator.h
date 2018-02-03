/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusDisplayLinkScrollAnimator : NSObject {
    double  _defaultConvergenceRate;
    CADisplayLink * _displayLink;
    double  _lastTimerFireDate;
    UIScreen * _screen;
    NSMapTable * _scrollViews;
    _UIFocusEngineScrollViewOffsets * _singleScrollViewEntry;
    NSTimer * _timer;
}

@property (nonatomic) double defaultConvergenceRate;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_applyAccelerationLimitToAcceleration:(struct CGPoint { double x1; double x2; })arg1 currentOffset:(struct CGPoint { double x1; double x2; })arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_canCreateDisplayLink;
- (void)_commonHeartbeat:(double)arg1;
- (void)_displayLinkHeartbeat:(id)arg1;
- (id)_entryForScrollView:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3;
- (bool)_shouldPushAndPopRunLoopModes;
- (void)_switchToTimerScrolling;
- (void)_timerHeartbeat:(id)arg1;
- (void)_updateHeartbeatConfiguration;
- (void)cancelScrollingForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })currentVelocityForScrollView:(id)arg1;
- (void)dealloc;
- (double)defaultConvergenceRate;
- (id)initWithScreen:(id)arg1;
- (bool)isAnimatingScrollView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDefaultConvergenceRate:(double)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(id /* block */)arg4;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityToScrollFromOffset:(struct CGPoint { double x1; double x2; })arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2;

@end