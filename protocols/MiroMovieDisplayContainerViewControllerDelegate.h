/* made by EzioChiu.
 */

@protocol MiroMovieDisplayContainerViewControllerDelegate <NSObject>

@required

- (void)airPlayDidEnd;

@optional

- (void)airPlayDidStart;
- (void)playerContentChangeDownloadProgress:(float)arg1;
- (void)playerContentChangeFailed;
- (void)playerContentChangeProgress:(float)arg1;
- (void)playerContentChangeRemainingAssetsToDownload:(long long)arg1;
- (void)playerDidDoContentChange;
- (void)playerDidGenerateNewPosters;
- (void)playerDidPlayToEnd;
- (void)playerNotReadyForDisplay;
- (void)playerRateChanged;
- (void)playerReadyForDisplay;
- (void)playerWillDoContentChange;
- (void)playerWillRefreshMovie;
- (void)setAirPlayIsAvailable:(bool)arg1;

@end
