/* made by EzioChiu.
 */

@protocol MNAudioOutputSettingsManagerObserver <NSObject>

@required

- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateRouteSelection:(unsigned long long)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateSettings:(NSArray *)arg2;

@end
