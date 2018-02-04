/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget> {
    ISWrappedAVPlayer * _videoPlayer;
    id /* block */  durationChangeHandler;
    id /* block */  playerItemChangeHandler;
    id /* block */  statusChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ durationChangeHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ playerItemChangeHandler;
@property (nonatomic, copy) id /* block */ statusChangeHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)cancelPendingSeeks;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentItemDuration;
- (id /* block */)durationChangeHandler;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (float)playRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playerCurrentTime;
- (id)playerItem;
- (id /* block */)playerItemChangeHandler;
- (long long)playerStatus;
- (void)removeTimeObserver:(id)arg1;
- (void)setDurationChangeHandler:(id /* block */)arg1;
- (void)setPlayerItemChangeHandler:(id /* block */)arg1;
- (void)setStatusChangeHandler:(id /* block */)arg1;
- (id /* block */)statusChangeHandler;
- (id)videoPlayer;
- (void)videoScrubberController:(id)arg1 seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 completionHandler:(id /* block */)arg5;

@end