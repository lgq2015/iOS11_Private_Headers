/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
    unsigned int  _cachedPlaybackStateIsValid;
    unsigned int  _clientPort;
    unsigned int  _didCheckIn;
    long long  _inBlockHandlingPlaybackStateChangedMessageFromServer;
    MPMediaItemCollection * _itemCollection;
    MPMusicPlayerController * _musicPlayerController;
    long long  _playbackNotificationObservers;
    long long  _playbackState;
    id /* block */  _prepareToPlayCompletionHandler;
    bool  _preparedToPlay;
    BKSProcessAssertion * _processAssertion;
    MPMediaQuery * _query;
    struct __CFRunLoopSource { } * _runLoopSource;
    unsigned int  _useApplicationSpecificQueue;
    unsigned int  _useCachedPlaybackState;
    unsigned int  _wantsQueueModificationsDisabled;
}

@property bool inBlockHandlingPlaybackStateChangedMessageFromServer;

- (void).cxx_destruct;
- (id)_bundleIdentifier;
- (void)acquireProcessAssertion;
- (void)dealloc;
- (void)didPrepareForRemoteSelectorInvocation;
- (bool)inBlockHandlingPlaybackStateChangedMessageFromServer;
- (id)initWithMusicPlayerController:(id)arg1;
- (bool)prepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;
- (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(bool)arg1;

@end
