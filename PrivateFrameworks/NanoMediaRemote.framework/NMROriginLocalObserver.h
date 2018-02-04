/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginLocalObserver : NSObject <NMROriginObserver> {
    MPRemoteCommandCenter * _commandCenter;
    <NMROriginObserverDelegate> * _delegate;
    NMRNowPlayingState * _nowPlayingState;
    NMROrigin * _origin;
    MPCPlayer * _player;
    NMRPlaybackQueue * playbackQueue;
    bool  shouldObserveArtwork;
    bool  shouldObservePlaybackQueue;
}

@property (nonatomic) <NMROriginObserverDelegate> *delegate;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (nonatomic) bool shouldObserveArtwork;
@property (nonatomic) bool shouldObservePlaybackQueue;

- (void).cxx_destruct;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_updateNowPlayingState;
- (void)_updatePlaybackState;
- (void)_updateSupportedCommands;
- (void)beginObserving;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endObserving;
- (id)initWithOrigin:(id)arg1;
- (id)initWithOrigin:(id)arg1 player:(id)arg2;
- (id)nowPlayingState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)origin;
- (id)playbackQueue;
- (void)setDelegate:(id)arg1;
- (void)setShouldObserveArtwork:(bool)arg1;
- (void)setShouldObservePlaybackQueue:(bool)arg1;
- (bool)shouldObserveArtwork;
- (bool)shouldObservePlaybackQueue;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)arg1;

@end