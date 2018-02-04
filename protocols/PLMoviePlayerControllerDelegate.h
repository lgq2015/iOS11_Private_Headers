/* made by EzioChiu.
 */

@protocol PLMoviePlayerControllerDelegate <NSObject>

@required

- (void)moviePlayerBufferingStateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(PLMoviePlayerController *)arg1;
- (bool)moviePlayerControllerShouldAllowExternalPlayback:(PLMoviePlayerController *)arg1;
- (void)moviePlayerControllerWillResignAsActiveController:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDidChangeExternalPlaybackType:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDurationAvailable:(PLMoviePlayerController *)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(PLMoviePlayerController *)arg1;
- (bool)moviePlayerExitRequest:(PLMoviePlayerController *)arg1 exitReason:(int)arg2;
- (void)moviePlayerHeadsetNextTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetPreviousTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackDidEnd:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackRateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackStateDidChange:(PLMoviePlayerController *)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerReadyToDisplay:(PLMoviePlayerController *)arg1;
- (void)moviePlayerReadyToPlay:(PLMoviePlayerController *)arg1;
- (NSDictionary *)moviePlayerRequestsPickedAirplayRoute:(PLMoviePlayerController *)arg1;
- (bool)moviePlayerShouldNotifyOnPreparationError:(PLMoviePlayerController *)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(PLMoviePlayerController *)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(PLMoviePlayerController *)arg1;

@end
