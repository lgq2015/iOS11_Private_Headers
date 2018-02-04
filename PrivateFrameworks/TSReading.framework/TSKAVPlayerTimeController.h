/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKAVPlayerTimeController : NSObject {
    double  mAbsoluteCurrentTime;
    double  mCurrentTime;
    bool  mObservingPlayerStatus;
    TSKAVPlayerController * mPlayerController;
    double  mRemainingTime;
    id  mTimeObserver;
    double  mUpdateInterval;
}

@property (nonatomic) double absoluteCurrentTime;
@property (nonatomic) double currentTime;
@property (nonatomic, readonly, retain) TSKAVPlayerController *playerController;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic) double updateInterval;

- (double)absoluteCurrentTime;
- (double)currentTime;
- (void)dealloc;
- (id)initWithPlayerController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_beginScrubbingIfNeeded;
- (void)p_createTimeObserver;
- (void)p_endScrubbing;
- (void)p_setTimeValuesWithoutScrubbing;
- (void)p_teardownTimeObserver;
- (id)playerController;
- (double)remainingTime;
- (void)setAbsoluteCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)startObservingTime;
- (void)stopObservingTime;
- (double)updateInterval;

@end
