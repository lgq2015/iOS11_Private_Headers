/* made by EzioChiu.
 */

@protocol ISBehaviorDelegate <NSObject>

@required

- (id)behavior:(void *)arg1 addBoundaryTimeObserverForTimes:(void *)arg2 queue:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 8: ISBehavior *, NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)behavior:(void *)arg1 didSetOutputInfo:(void *)arg2 withTransitionOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: ISBehavior *, ISPlayerState *, ISPlayerOutputTransitionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)behavior:(void *)arg1 playVideoToTime:(void *)arg2 initialRate:(void *)arg3 overDuration:(void *)arg4 progressHandler:(void *)arg5; // needs 5 arg types, found 11: ISBehavior *, struct { long long x1; int x2; unsigned int x3; long long x4; }, float, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, struct { long long x1; int x2; unsigned int x3; long long x4; }, void*
- (bool)behavior:(void *)arg1 prerollVideoAtRate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: ISBehavior *, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)behavior:(ISBehavior *)arg1 removeTimeObserver:(id)arg2;
- (bool)behavior:(void *)arg1 seekVideoPlayerToTime:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: ISBehavior *, struct { long long x1; int x2; unsigned int x3; long long x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)behavior:(void *)arg1 seekVideoPlayerToTime:(void *)arg2 toleranceBefore:(void *)arg3 toleranceAfter:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: ISBehavior *, struct { long long x1; int x2; unsigned int x3; long long x4; }, struct { long long x1; int x2; unsigned int x3; long long x4; }, struct { long long x1; int x2; unsigned int x3; long long x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)behavior:(ISBehavior *)arg1 setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoVolume:(float)arg2;
- (float)videoPlayRate;

@end
