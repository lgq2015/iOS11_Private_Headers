/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter {
    long long  __state;
    NSDate * _estimatedScrollEndDate;
    bool  _hasTargetVisibilityOffset;
    bool  _isDecelerating;
    bool  _isScrolling;
    bool  _isVisible;
    double  _targetVisibilityOffset;
    double  _visibilityOffset;
}

@property (setter=_setState:, nonatomic) long long _state;
@property (nonatomic, retain) NSDate *estimatedScrollEndDate;
@property (nonatomic) bool hasTargetVisibilityOffset;
@property (setter=setDecelerating:, nonatomic) bool isDecelerating;
@property (setter=setScrolling:, nonatomic) bool isScrolling;
@property (setter=setVisible:, nonatomic) bool isVisible;
@property (nonatomic) double targetVisibilityOffset;
@property (nonatomic) double visibilityOffset;

- (void).cxx_destruct;
- (void)_setState:(long long)arg1;
- (void)_startAutoplay;
- (long long)_state;
- (id)estimatedScrollEndDate;
- (bool)hasTargetVisibilityOffset;
- (bool)isDecelerating;
- (bool)isScrolling;
- (bool)isVisible;
- (void)setDecelerating:(bool)arg1;
- (void)setEstimatedScrollEndDate:(id)arg1;
- (void)setHasTargetVisibilityOffset:(bool)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setTargetVisibilityOffset:(double)arg1;
- (void)setVisibilityOffset:(double)arg1;
- (void)setVisible:(bool)arg1;
- (double)targetVisibilityOffset;
- (void)updateOutput;
- (double)visibilityOffset;

@end
