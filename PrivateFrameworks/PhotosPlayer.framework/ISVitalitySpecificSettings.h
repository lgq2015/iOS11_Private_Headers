/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings> {
    long long  _behavior;
    double  _endTimeOffset;
    double  _maximumDeceleration;
    double  _maximumDelayBeforePlayback;
    long long  _maximumNumberOfFrames;
    double  _maximumRate;
    double  _minimumDurationForColorMismatch;
    double  _minimumVisibilityFactor;
    double  _playbackRate;
    double  _postDuration;
    double  _preDuration;
    double  _relativeEnd;
    double  _relativeStart;
    double  _startSeekTolerance;
}

@property (nonatomic) long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endTimeOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumDeceleration;
@property (nonatomic) double maximumDelayBeforePlayback;
@property (nonatomic) long long maximumNumberOfFrames;
@property (nonatomic) double maximumRate;
@property (nonatomic) double minimumDurationForColorMismatch;
@property (nonatomic) double minimumVisibilityFactor;
@property (nonatomic) double playbackRate;
@property (nonatomic) double postDuration;
@property (nonatomic) double preDuration;
@property (nonatomic) double relativeEnd;
@property (nonatomic) double relativeStart;
@property (nonatomic) double startSeekTolerance;
@property (readonly) Class superclass;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)behavior;
- (double)endTimeOffset;
- (double)maximumDeceleration;
- (double)maximumDelayBeforePlayback;
- (long long)maximumNumberOfFrames;
- (double)maximumRate;
- (double)minimumDurationForColorMismatch;
- (double)minimumVisibilityFactor;
- (double)playbackRate;
- (double)postDuration;
- (double)preDuration;
- (double)relativeEnd;
- (double)relativeStart;
- (void)setBehavior:(long long)arg1;
- (void)setDefaultValues;
- (void)setEndTimeOffset:(double)arg1;
- (void)setMaximumDeceleration:(double)arg1;
- (void)setMaximumDelayBeforePlayback:(double)arg1;
- (void)setMaximumNumberOfFrames:(long long)arg1;
- (void)setMaximumRate:(double)arg1;
- (void)setMinimumDurationForColorMismatch:(double)arg1;
- (void)setMinimumVisibilityFactor:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPostDuration:(double)arg1;
- (void)setPreDuration:(double)arg1;
- (void)setRelativeEnd:(double)arg1;
- (void)setRelativeStart:(double)arg1;
- (void)setStartSeekTolerance:(double)arg1;
- (double)startSeekTolerance;

@end