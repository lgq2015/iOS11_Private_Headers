/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISForcePressLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter {
    bool  __aboveTimeoutThreshold;
    long long  __currentTimeoutRequestId;
    bool  __forceAboveThresholdLongEnough;
    bool  __hasCrossedHintThreshold;
    struct { 
        bool respondsToHintWithProgress; 
        bool respondsToStartPlayback; 
        bool respondsToStopPlayback; 
    }  _delegateFlags;
    bool  _didReachMaxForce;
    double  _forceProgress;
    bool  _touchActive;
}

@property (setter=_setAboveTimeoutThreshold:, nonatomic) bool _aboveTimeoutThreshold;
@property (setter=_setCurrentTimeoutRequestId:, nonatomic) long long _currentTimeoutRequestId;
@property (setter=_setForceAboveThresholdLongEnough:, nonatomic) bool _forceAboveThresholdLongEnough;
@property (setter=_setHasCrossedHintThreshold:, nonatomic) bool _hasCrossedHintThreshold;
@property (nonatomic) double forceProgress;
@property (getter=isTouchActive, nonatomic) bool touchActive;

- (bool)_aboveTimeoutThreshold;
- (long long)_currentTimeoutRequestId;
- (bool)_forceAboveThresholdLongEnough;
- (bool)_hasCrossedHintThreshold;
- (void)_setAboveTimeoutThreshold:(bool)arg1;
- (void)_setCurrentTimeoutRequestId:(long long)arg1;
- (void)_setForceAboveThresholdLongEnough:(bool)arg1;
- (void)_setHasCrossedHintThreshold:(bool)arg1;
- (void)didPerformChanges;
- (double)forceProgress;
- (bool)isTouchActive;
- (void)setForceProgress:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchActive:(bool)arg1;

@end
