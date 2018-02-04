/* made by EzioChiu.
 */

@protocol ISVitalitySettings <NSObject>

@required

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

@end
