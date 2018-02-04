/* made by EzioChiu.
 */

@protocol IKJSPlayer <JSExport>

@required

- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (IKJSMediaItem *)currentMediaItem;
- (NSDate *)currentMediaItemDate;
- (NSNumber *)currentMediaItemDuration;
- (id)init;
- (bool)interactiveOverlayDismissable;
- (IKDOMDocument *)interactiveOverlayDocument;
- (void)next;
- (IKJSMediaItem *)nextMediaItem;
- (IKDOMDocument *)overlayDocument;
- (void)pause;
- (void)play;
- (double)playbackRate;
- (NSString *)playbackState;
- (IKJSPlaylist *)playlist;
- (void)present;
- (void)previous;
- (IKJSMediaItem *)previousMediaItem;
- (void)seekToTime:(double)arg1;
- (void)setInteractiveOverlayDismissable:(bool)arg1;
- (void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1;
- (void)setOverlayDocument:(IKDOMDocument *)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaylist:(IKJSPlaylist *)arg1;
- (void)stop;

@end
