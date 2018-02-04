/* made by EzioChiu.
 */

@protocol MiroVideoScrubberControllerDelegate <NSObject>

@optional

- (void)videoScrubberController:(MiroVideoScrubberController *)arg1 desiredSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)videoScrubberController:(MiroVideoScrubberController *)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(MiroVideoScrubberController *)arg1;

@end
