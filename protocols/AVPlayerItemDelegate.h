/* made by EzioChiu.
 */

@protocol AVPlayerItemDelegate <NSObject>

@optional

- (bool)playerItem:(AVPlayerItem *)arg1 shouldSeekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;

@end
