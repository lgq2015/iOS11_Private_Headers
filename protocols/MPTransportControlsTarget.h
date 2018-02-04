/* made by EzioChiu.
 */

@protocol MPTransportControlsTarget <NSObject>

@optional

- (bool)transportControls:(MPTransportControls *)arg1 heldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(MPTransportControls *)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(MPTransportControls *)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)transportControlsDidResize:(MPTransportControls *)arg1;

@end
