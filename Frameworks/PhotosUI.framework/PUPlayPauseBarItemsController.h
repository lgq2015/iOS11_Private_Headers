/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver> {
    ISWrappedAVPlayer * __avPlayer;
    NSHashTable * __changeObservers;
    PUPlayPauseBarItemsControllerChange * __currentChange;
    bool  __isPerformingChanges;
    bool  __isUpdating;
    bool  __needsUpdateAVPlayer;
    bool  __needsUpdateCurrentPlaybackTimeAndDuration;
    bool  __needsUpdatePlayPauseState;
    bool  __needsUpdateVideoPlayer;
    NSObject<OS_dispatch_queue> * __observerQueue;
    id  __timeObservationToken;
    PUBrowsingVideoPlayer * __videoPlayer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPlaybackTime;
    long long  _playPauseState;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackDuration;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setAVPlayer:, nonatomic, retain) ISWrappedAVPlayer *_avPlayer;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (nonatomic, readonly) PUPlayPauseBarItemsControllerChange *_currentChange;
@property (setter=_setPerformingChanges:, nonatomic) bool _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setNeedsUpdateAVPlayer:, nonatomic) bool _needsUpdateAVPlayer;
@property (setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:, nonatomic) bool _needsUpdateCurrentPlaybackTimeAndDuration;
@property (setter=_setNeedsUpdatePlayPauseState:, nonatomic) bool _needsUpdatePlayPauseState;
@property (setter=_setNeedsUpdateVideoPlayer:, nonatomic) bool _needsUpdateVideoPlayer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_observerQueue;
@property (setter=_setTimeObservationToken:, nonatomic, retain) id _timeObservationToken;
@property (setter=_setVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_videoPlayer;
@property (setter=_setCurrentPlaybackTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setPlayPauseState:, nonatomic) long long playPauseState;
@property (setter=_setPlaybackDuration:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (id)_avPlayer;
- (id)_changeObservers;
- (id)_currentChange;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleViewModel:(id)arg1 didChange:(id)arg2;
- (void)_invalidateAVPlayer;
- (void)_invalidateCurrentPlaybackTimeAndDuration;
- (void)_invalidatePlayPauseState;
- (void)_invalidateVideoPlayer;
- (bool)_isPerformingChanges;
- (bool)_isUpdating;
- (bool)_needsUpdate;
- (bool)_needsUpdateAVPlayer;
- (bool)_needsUpdateCurrentPlaybackTimeAndDuration;
- (bool)_needsUpdatePlayPauseState;
- (bool)_needsUpdateVideoPlayer;
- (id)_observerQueue;
- (void)_performChanges:(id /* block */)arg1;
- (void)_publishChanges;
- (void)_setAVPlayer:(id)arg1;
- (void)_setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateAVPlayer:(bool)arg1;
- (void)_setNeedsUpdateCurrentPlaybackTimeAndDuration:(bool)arg1;
- (void)_setNeedsUpdatePlayPauseState:(bool)arg1;
- (void)_setNeedsUpdateVideoPlayer:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setPlayPauseState:(long long)arg1;
- (void)_setPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setTimeObservationToken:(id)arg1;
- (void)_setUpdating:(bool)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (void)_startObservingAVPlayer;
- (void)_stopObservingAVPlayer;
- (id)_timeObservationToken;
- (void)_updateAVPlayerIfNeeded;
- (void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePlayPauseStateIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (id)_videoPlayer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (id)init;
- (long long)playPauseState;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackDuration;
- (void)registerChangeObserver:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
