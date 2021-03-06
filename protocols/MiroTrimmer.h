/* made by EzioChiu.
 */

@protocol MiroTrimmer <NSObject>

@required

- (void)setClip:(id <MiroClip>)arg1;
- (void)setPlayer:(AVPlayer *)arg1;
- (void)setProjectFrameRate:(int)arg1;
- (void)updateDebugMetadataOverlay;

@end
