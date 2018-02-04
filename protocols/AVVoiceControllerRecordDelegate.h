/* made by EzioChiu.
 */

@protocol AVVoiceControllerRecordDelegate <NSObject>

@optional

- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1 withContext:(NSDictionary *)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(AVVoiceController *)arg1;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerEndRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerLPCMRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerMediaServicesWereLost:(AVVoiceController *)arg1;
- (void)voiceControllerMediaServicesWereReset:(AVVoiceController *)arg1;
- (void)voiceControllerRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;

@end
