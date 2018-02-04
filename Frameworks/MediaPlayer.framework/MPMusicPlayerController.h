/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerController : NSObject <MPMediaPlayback> {
    MPMusicPlayerControllerInternal * _internal;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic, readonly) unsigned long long indexOfNowPlayingItem;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (nonatomic, copy) MPMediaItem *nowPlayingItem;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) float volume;

+ (id)applicationMusicPlayer;
+ (id)applicationQueuePlayer;
+ (id)iPodMusicPlayer;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)systemMusicPlayer;

- (void).cxx_destruct;
- (void)_cancelExistingPrepareToPlay;
- (void)_clientCheckInUsingExistencePort:(bool)arg1;
- (void)_isQueuePreparedDidChange:(bool)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_musicPlayerDidLaunch;
- (bool)_musicPlayerExistencePortIsValid;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(long long)arg1;
- (void)_queueDidInvalidate;
- (void)_queuePreparationFailedWithErrorCode:(unsigned char)arg1;
- (void)_queueRequestDidFinish;
- (void)_queueUpdateDidFinish;
- (void)_registerForLaunchNotifications;
- (void)_repeatModeDidChange:(long long)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(bool)arg1;
- (void)_shuffleModeDidChange:(long long)arg1;
- (void)_stopMigServer;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_unregisterForLaunchNotifications;
- (void)appendQueueDescriptor:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (unsigned long long)currentChapterIndex;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)indexOfNowPlayingItem;
- (id)init;
- (id)internal;
- (bool)isGeniusAvailable;
- (bool)isGeniusAvailableForSeedItems:(id)arg1;
- (bool)isNowPlayingItemFromGeniusMix;
- (bool)isPreparedToPlay;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (void)pause;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)play;
- (void)playItem:(id)arg1;
- (long long)playbackSpeed;
- (long long)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (id)queueAsQuery;
- (id)queueAsRadioStation;
- (long long)repeatMode;
- (bool)serverIsAlive;
- (void)setCurrentChapterIndex:(unsigned long long)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)setPlaybackSpeed:(long long)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithRadioStation:(id)arg1;
- (bool)setQueueWithSeedItems:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setUserQueueModificationsDisabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumePrivate:(float)arg1;
- (void)shuffle;
- (long long)shuffleMode;
- (bool)skipInDirection:(long long)arg1 error:(id*)arg2;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (void)stop;
- (bool)userQueueModificationsDisabled;
- (float)volume;

@end
