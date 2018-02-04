/* made by EzioChiu.
 */

@protocol NUMediaViewDelegate <NSObject>

@optional

- (void)mediaView:(NUMediaView *)arg1 didZoom:(double)arg2;
- (void)mediaViewDidEndZooming:(NUMediaView *)arg1;
- (void)mediaViewDidFinishPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewDidFinishRendering:(NUMediaView *)arg1;
- (void)mediaViewDidStartPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewDidUpdateLivePhoto:(NUMediaView *)arg1;
- (void)mediaViewIsReadyForVideoPlayback:(NUMediaView *)arg1;
- (void)mediaViewWillBeginZooming:(NUMediaView *)arg1;

@end
