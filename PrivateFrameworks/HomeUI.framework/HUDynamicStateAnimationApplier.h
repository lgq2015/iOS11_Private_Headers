/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier {
    HUAnimationSettings * _animationSettings;
    bool  _hasUpdatedProgress;
    double  _initialProgress;
    double  _lastTargetChangeTime;
    double  _preInterpolatedProgress;
    double  _targetProgress;
}

@property (nonatomic, readonly, copy) HUAnimationSettings *animationSettings;
@property (nonatomic) bool hasUpdatedProgress;
@property (nonatomic) double initialProgress;
@property (nonatomic) double lastTargetChangeTime;
@property (nonatomic) double preInterpolatedProgress;
@property (nonatomic) double targetProgress;

- (void).cxx_destruct;
- (id)animationSettings;
- (double)effectiveInputProgressForBlock:(id /* block */)arg1;
- (bool)hasUpdatedProgress;
- (id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(id /* block */)arg3;
- (double)initialProgress;
- (double)lastTargetChangeTime;
- (double)preInterpolatedProgress;
- (void)setHasUpdatedProgress:(bool)arg1;
- (void)setInitialProgress:(double)arg1;
- (void)setLastTargetChangeTime:(double)arg1;
- (void)setPreInterpolatedProgress:(double)arg1;
- (void)setTargetProgress:(double)arg1;
- (bool)start;
- (double)targetProgress;
- (void)updateProgress:(double)arg1;

@end
