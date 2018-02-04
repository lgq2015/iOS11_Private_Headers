/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVTUIAudioSessionAVVC : NSObject <AVVoiceControllerPlaybackDelegate, AVVoiceControllerRecordDelegate, CSVTUIAudioSession> {
    <CSVTUIAudioSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVTUIAudioSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasCorrectInputAudioRoute;
- (bool)_hasCorrectOutputAudioRoute;
- (bool)_hasInputAudioRoute;
- (unsigned long long)audioSource;
- (float)averagePower;
- (long long)convertStopReason:(long long)arg1;
- (id)delegate;
- (bool)hasAudioRoute;
- (bool)hasCorrectAudioRoute;
- (id)init;
- (bool)isRecording;
- (bool)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (bool)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (id)voiceController;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;

@end
