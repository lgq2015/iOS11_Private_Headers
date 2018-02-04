/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponse : MPResponse {
    MPCMediaRemoteController * _controller;
    MPCPlayerPath * _playerPath;
    long long  _state;
    MPCPlayerResponseTracklist * _tracklist;
    UIView<MPCVideoView> * _videoView;
}

@property (nonatomic, readonly) <MPCPlayerResponseBuilder> *builder;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) MPCPlayerResponseTracklist *tracklist;
@property (nonatomic, retain) UIView<MPCVideoView> *videoView;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)arg1;
- (id)controller;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (id)pause;
- (id)play;
- (id)playerPath;
- (void)setPlayerPath:(id)arg1;
- (void)setVideoView:(id)arg1;
- (long long)state;
- (id)stop;
- (id)tracklist;
- (id)videoView;

@end