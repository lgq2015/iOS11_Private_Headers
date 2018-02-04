/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayer : NSObject <MPCMediaRemoteMuxerDelegate> {
    NSString * _activeRouteName;
    MPRemoteCommandCenter * _commandCenter;
    MPCPlayerItemContainer * _currentContainer;
    MPCPlayerItem * _currentItem;
    MPCMediaRemoteMuxer * _mediaRemoteMuxer;
    NSString * _parentAppBundleID;
    NSPointerArray * _playbackErrorObservers;
    NSPointerArray * _playbackIntentObservers;
    bool  _restoringPlaybackState;
    bool  _shouldRestorePlaybackState;
    long long  _state;
    bool  _syncingNowPlayingInfo;
    AVPlayerLayer * _videoLayer;
}

@property (nonatomic, readonly, copy) NSString *activeRouteName;
@property (nonatomic, retain) MPRemoteCommandCenter *commandCenter;
@property (nonatomic) MPCPlayerItemContainer *currentContainer;
@property (nonatomic) MPCPlayerItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPCMediaRemoteMuxer *mediaRemoteMuxer;
@property (nonatomic, copy) NSString *parentAppBundleID;
@property (nonatomic, readonly, copy) NSArray *playbackErrorObservers;
@property (nonatomic, readonly, copy) NSArray *playbackIntentObservers;
@property (getter=isRestoringPlaybackState, nonatomic, readonly) bool restoringPlaybackState;
@property (nonatomic) bool shouldRestorePlaybackState;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (getter=isSyncingNowPlayingInfo, nonatomic, readonly) bool syncingNowPlayingInfo;
@property (nonatomic, readonly) AVPlayerLayer *videoLayer;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)commandCenter;
- (id)currentContainer;
- (id)currentItem;
- (id)init;
- (bool)isRestoringPlaybackState;
- (bool)isSyncingNowPlayingInfo;
- (id)mediaRemoteMuxer;
- (id)parentAppBundleID;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)playbackErrorObservers;
- (id)playbackIntentObservers;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerPlaybackErrorObserver:(id)arg1;
- (void)registerPlaybackIntentObserver:(id)arg1;
- (void)restorePlaybackStateCompletionHandler:(id /* block */)arg1;
- (void)setCommandCenter:(id)arg1;
- (void)setCurrentContainer:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setMediaRemoteMuxer:(id)arg1;
- (void)setParentAppBundleID:(id)arg1;
- (void)setShouldRestorePlaybackState:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldRestorePlaybackState;
- (void)startSyncingNowPlayingInfo;
- (long long)state;
- (void)stopSyncingNowPlayingInfo;
- (void)unregisterPlaybackErrorObserver:(id)arg1;
- (void)unregisterPlaybackIntentObserver:(id)arg1;
- (void)updateSupportedCommandsForCommandCenter:(id)arg1 muxer:(id)arg2 action:(SEL)arg3;
- (id)videoLayer;

@end
