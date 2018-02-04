/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAudioPlayer : SUScriptObject {
    NSURL * _certificateUrl;
    NSURL * _keyUrl;
    SUPlayerStatus * _playerStatus;
    NSURL * _url;
}

@property (readonly) NSString *URL;
@property (readonly) NSString *certificateURL;
@property (readonly) double currentTime;
@property (readonly) double duration;
@property (readonly) NSString *keyURL;
@property (readonly) NSString *nowPlayingKeyAlbumTitle;
@property (readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property (readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property (readonly) NSString *nowPlayingKeyArtist;
@property (readonly) NSString *nowPlayingKeyArtwork;
@property (readonly) NSString *nowPlayingKeyComposer;
@property (readonly) NSString *nowPlayingKeyDiscCount;
@property (readonly) NSString *nowPlayingKeyDiscNumber;
@property (readonly) NSString *nowPlayingKeyGenre;
@property (readonly) NSString *nowPlayingKeyPersistentID;
@property (readonly) NSString *nowPlayingKeyPlaybackDuration;
@property (readonly) NSString *nowPlayingKeyTitle;
@property (readonly) long long playerStateActive;
@property (readonly) long long playerStateBuffering;
@property (readonly) long long playerStateFailed;
@property (readonly) long long playerStateFinished;
@property (readonly) long long playerStatePaused;
@property (readonly) long long playerStateUnplayed;
@property (readonly) long long state;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)URL;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)certificateURL;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)keyURL;
- (id)nowPlayingKeyAlbumTitle;
- (id)nowPlayingKeyAlbumTrackCount;
- (id)nowPlayingKeyAlbumTrackNumber;
- (id)nowPlayingKeyArtist;
- (id)nowPlayingKeyArtwork;
- (id)nowPlayingKeyComposer;
- (id)nowPlayingKeyDiscCount;
- (id)nowPlayingKeyDiscNumber;
- (id)nowPlayingKeyGenre;
- (id)nowPlayingKeyPersistentID;
- (id)nowPlayingKeyPlaybackDuration;
- (id)nowPlayingKeyTitle;
- (void)pause;
- (void)play;
- (long long)playerStateActive;
- (long long)playerStateBuffering;
- (long long)playerStateFailed;
- (long long)playerStateFinished;
- (long long)playerStatePaused;
- (long long)playerStateUnplayed;
- (id)scriptAttributeKeys;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (long long)state;
- (void)stop;

@end
