/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyNowPlayingObserver : MPNowPlayingObserver {
    MPCMediaPlayerLegacyPlayer * _mpcPlayer;
}

@property (nonatomic) MPCMediaPlayerLegacyPlayer *mpcPlayer;

- (void).cxx_destruct;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mpcPlayer;
- (void)setMpcPlayer:(id)arg1;

@end
