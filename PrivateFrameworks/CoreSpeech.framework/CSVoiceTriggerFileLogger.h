/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate> {
    CSAudioCircularBuffer * _audioBuffer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioLogDirectory;
- (id)_metaFilenameWithPrefix:(id)arg1;
- (id)_timeStampString;
- (void)_writeDictionary:(id)arg1 toPath:(id)arg2;
- (id)audioBuffer;
- (id)initWithAudioBuffer:(id)arg1;
- (id)queue;
- (void)setAudioBuffer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;

@end
