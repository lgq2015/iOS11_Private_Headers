/* made by EzioChiu.
 */

@protocol OKCouchControllerDelegate <NSObject>

@required

- (OKPageViewController *)currentPageViewController;

@optional

- (bool)couchController:(OKCouchController *)arg1 thingsAreReadyForNextStep:(OKPresentationCouchStep *)arg2 withProgress:(double*)arg3;
- (bool)couchControllerCanStartPlayback:(OKCouchController *)arg1;
- (void)couchControllerDidStopPlayback:(OKCouchController *)arg1;
- (void)couchControllerPlaybackCompleted:(OKCouchController *)arg1;
- (void)couchControllerPlaybackLooped:(OKCouchController *)arg1;
- (void)couchControllerStartsWaitingForReadiness:(OKCouchController *)arg1;
- (void)couchControllerStopsWaitingForReadiness:(OKCouchController *)arg1;
- (void)couchControllerWaitingForReadiness:(OKCouchController *)arg1 withProgress:(double)arg2;
- (void)couchControllerWillStartPlayback:(OKCouchController *)arg1;
- (bool)thingsAreReadyInCurrentPageForCouchController:(OKCouchController *)arg1;

@end
