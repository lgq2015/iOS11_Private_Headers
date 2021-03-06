/* made by EzioChiu.
 */

@protocol VideosExtrasPlaybackDelegate <NSObject>

@required

- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(bool)arg2;
- (void)extrasRequestsPlaybackStop;

@end
