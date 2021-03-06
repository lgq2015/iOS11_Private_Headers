/* made by EzioChiu.
 */

@protocol _DECNowPlayingFeedbackProviderProtocol <NSObject>

@required

- (unsigned int)currentPlaybackState;

@optional

- (void)feedbackProvider:(_DECNowPlayingFeedbackProvider *)arg1 userEngaged:(bool)arg2;

@end
