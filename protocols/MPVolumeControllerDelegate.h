/* made by EzioChiu.
 */

@protocol MPVolumeControllerDelegate <NSObject>

@optional

- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitEnforcedDidChange:(bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 mutedStateDidChange:(bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeWarningStateDidChange:(long long)arg2;

@end
