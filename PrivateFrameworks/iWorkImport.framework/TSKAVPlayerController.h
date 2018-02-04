/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKAVPlayerController : NSObject {
    double  _absoluteCurrentTime;
    unsigned long long  mAdditionalReferences;
    bool  mCanPlay;
    <TSKAVPlayerControllerDelegate> * mDelegate;
    bool  mFastForwarding;
    bool  mFastReversing;
    bool  mIsObservingStatus;
    AVPlayer * mPlayer;
    bool  mPlaying;
    float  mRateBeforeScrubbing;
    long long  mRepeatMode;
    unsigned long long  mScrubbingCount;
    float  mVolume;
}

@property (nonatomic) double absoluteCurrentTime;
@property (nonatomic, readonly) double absoluteDuration;
@property (nonatomic, readonly) bool canPlay;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) <TSKAVPlayerControllerDelegate> *delegate;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endTime;
@property (getter=isFastForwarding, nonatomic) bool fastForwarding;
@property (getter=isFastReversing, nonatomic) bool fastReversing;
@property (nonatomic, readonly) AVPlayer *player;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic) long long repeatMode;
@property (getter=isScrubbing, nonatomic, readonly) bool scrubbing;
@property (nonatomic) double startTime;
@property (nonatomic) float volume;

+ (bool)automaticallyNotifiesObserversOfEndTime;
+ (bool)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingEndTime;
+ (id)keyPathsForValuesAffectingStartTime;

- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (void)addAdditionalReference;
- (void)beginScrubbing;
- (bool)canPlay;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endScrubbing;
- (double)endTime;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;
- (bool)isFastForwarding;
- (bool)isFastReversing;
- (bool)isPlaying;
- (bool)isScrubbing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_applicationDidResignActive;
- (void)p_applyVolumeToPlayerItem;
- (bool)p_canFastForward;
- (bool)p_canFastReverse;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_updateClosedCaptionDisplayEnabled;
- (id)player;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (double)remainingTime;
- (long long)repeatMode;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)setAbsoluteCurrentTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setFastForwarding:(bool)arg1;
- (void)setFastReversing:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (void)teardown;
- (float)volume;

@end
