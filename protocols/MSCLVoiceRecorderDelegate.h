/* made by EzioChiu.
 */

@protocol MSCLVoiceRecorderDelegate <NSObject>

@optional

- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didFinishWithSuccess:(bool)arg2;
- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceRecorderDidStartRecording:(MSCLVoiceRecorder *)arg1;

@end
