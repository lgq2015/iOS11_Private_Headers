/* made by EzioChiu.
 */

@protocol MPVideoOverlay

@required

- (bool)allowsWirelessPlayback;
- (<MPVideoOverlayDelegate> *)delegate;
- (unsigned long long)desiredParts;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (MPAVItem *)item;
- (UINavigationBar *)navigationBar;
- (bool)navigationBarHidden;
- (MPAVController *)player;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setDelegate:(id <MPVideoOverlayDelegate>)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setItem:(MPAVItem *)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPlayer:(MPAVController *)arg1;
- (void)setVideoViewController:(id <MPVideoControllerProtocol>)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (bool)updateTimeBasedValues;
- (<MPVideoControllerProtocol> *)videoViewController;
- (unsigned long long)visibleParts;

@end
