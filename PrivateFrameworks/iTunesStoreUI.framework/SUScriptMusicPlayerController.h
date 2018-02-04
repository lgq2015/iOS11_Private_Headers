/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMusicPlayerController : SUScriptObject {
    NSString * _playerType;
}

@property (readonly) double currentPlaybackTime;
@property (readonly) SUScriptMediaItem *nowPlayingItem;
@property (readonly) NSString *playbackState;
@property (readonly) NSString *playbackStateInterrupted;
@property (readonly) NSString *playbackStatePaused;
@property (readonly) NSString *playbackStatePlaying;
@property (readonly) NSString *playbackStateSeekingBackward;
@property (readonly) NSString *playbackStateSeekingForward;
@property (readonly) NSString *playbackStateStopped;
@property (readonly) NSString *playerType;
@property (copy) NSString *repeatMode;
@property (readonly) NSString *repeatModeAll;
@property (readonly) NSString *repeatModeDefault;
@property (readonly) NSString *repeatModeNone;
@property (readonly) NSString *repeatModeOne;
@property (copy) NSString *shuffleMode;
@property (readonly) NSString *shuffleModeAlbums;
@property (readonly) NSString *shuffleModeDefault;
@property (readonly) NSString *shuffleModeOff;
@property (readonly) NSString *shuffleModeSongs;
@property (retain) NSNumber *volume;

+ (void)initialize;
+ (id)scriptPlaybackStateForNativePlaybackState:(long long)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)endSeeking;
- (id)initWithPlayerType:(id)arg1;
- (id)nowPlayingItem;
- (void)pause;
- (void)play;
- (id)playbackState;
- (id)playbackStateInterrupted;
- (id)playbackStatePaused;
- (id)playbackStatePlaying;
- (id)playbackStateSeekingBackward;
- (id)playbackStateSeekingForward;
- (id)playbackStateStopped;
- (id)playerType;
- (id)repeatMode;
- (id)repeatModeAll;
- (id)repeatModeDefault;
- (id)repeatModeNone;
- (id)repeatModeOne;
- (id)scriptAttributeKeys;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setRepeatMode:(id)arg1;
- (void)setShuffleMode:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)shuffleMode;
- (id)shuffleModeAlbums;
- (id)shuffleModeDefault;
- (id)shuffleModeOff;
- (id)shuffleModeSongs;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (id)volume;

@end
