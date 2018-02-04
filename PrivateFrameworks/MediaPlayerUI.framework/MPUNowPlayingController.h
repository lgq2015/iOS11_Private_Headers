/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingController : NSObject {
    bool  _cachedArtworkDirty;
    UIImage * _cachedNowPlayingArtwork;
    double  _currentDuration;
    double  _currentElapsed;
    NSString * _currentNowPlayingAppDisplayID;
    bool  _currentNowPlayingAppIsRunning;
    NSString * _currentNowPlayingAppParentApp;
    NSString * _currentNowPlayingArtworkDigest;
    NSDictionary * _currentNowPlayingInfo;
    <MPUNowPlayingDelegate> * _delegate;
    bool  _hasValidCurrentNowPlayingAppDisplayID;
    long long  _isPlaying;
    bool  _isRegisteredForNowPlayingNotifications;
    bool  _isUpdatingNowPlayingApp;
    bool  _isUpdatingNowPlayingInfo;
    bool  _isUpdatingPlaybackState;
    bool  _shouldUpdateNowPlayingArtwork;
    NSObject<OS_dispatch_source> * _timeInformationTimer;
    double  _timeInformationUpdateInterval;
    bool  _wantsTimeInformationUpdates;
}

@property (nonatomic, readonly) double currentDuration;
@property (nonatomic, readonly) double currentElapsed;
@property (nonatomic, readonly) bool currentNowPlayingAppIsRunning;
@property (nonatomic, readonly) UIImage *currentNowPlayingArtwork;
@property (nonatomic, readonly) NSString *currentNowPlayingArtworkDigest;
@property (nonatomic, readonly) NSDictionary *currentNowPlayingInfo;
@property (nonatomic, readonly) MPUNowPlayingMetadata *currentNowPlayingMetadata;
@property (nonatomic) <MPUNowPlayingDelegate> *delegate;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) NSString *nowPlayingAppDisplayID;
@property (nonatomic, readonly) bool nowPlayingAppIsSystemMediaApp;
@property (nonatomic, readonly) NSString *nowPlayingAppParentAppDisplayID;
@property (nonatomic) bool shouldUpdateNowPlayingArtwork;
@property (nonatomic) double timeInformationUpdateInterval;

- (void).cxx_destruct;
- (bool)_isUpdatingTimeInformation;
- (void)_registerForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_updateCurrentNowPlaying;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updatePlaybackState;
- (void)_updateTimeInformationAndCallDelegate:(bool)arg1;
- (double)currentDuration;
- (double)currentElapsed;
- (bool)currentNowPlayingAppIsRunning;
- (id)currentNowPlayingArtwork;
- (id)currentNowPlayingArtworkDigest;
- (id)currentNowPlayingInfo;
- (id)currentNowPlayingMetadata;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isPlaying;
- (id)nowPlayingAppDisplayID;
- (bool)nowPlayingAppIsSystemMediaApp;
- (id)nowPlayingAppParentAppDisplayID;
- (void)setDelegate:(id)arg1;
- (void)setShouldUpdateNowPlayingArtwork:(bool)arg1;
- (void)setTimeInformationUpdateInterval:(double)arg1;
- (bool)shouldUpdateNowPlayingArtwork;
- (void)startUpdating;
- (void)stopUpdating;
- (double)timeInformationUpdateInterval;
- (void)update;

@end
