/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzer, CSEndpointAnalyzerDelegate> {
    <CSEndpointAnalyzerImpl> * _activeEndpointer;
    bool  _didEnterTwoshot;
    <CSEndpointAnalyzerDelegate> * _endpointerDelegate;
    <CSEndpointAnalyzerImpl> * _hybridEndpointer;
    bool  _recordingDidStop;
    <CSEndpointAnalyzerImpl> * _vad2Endpointer;
}

@property (nonatomic) <CSEndpointAnalyzerImpl> *activeEndpointer;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double bypassSamples;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didEnterTwoshot;
@property (nonatomic) double endWaitTime;
@property (nonatomic) long long endpointMode;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) <CSEndpointAnalyzerDelegate> *endpointerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CSEndpointAnalyzerImpl> *hybridEndpointer;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (nonatomic) bool recordingDidStop;
@property (nonatomic) bool saveSamplesSeenInReset;
@property (nonatomic) double startWaitTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CSEndpointAnalyzerImpl> *vad2Endpointer;

- (void).cxx_destruct;
- (bool)_shouldEnterTwoShotAtEndPointTime:(double)arg1;
- (bool)_shouldUseVAD2ForTwoShot;
- (id)activeEndpointer;
- (double)automaticEndpointingSuspensionEndTime;
- (double)delay;
- (bool)didEnterTwoshot;
- (double)endWaitTime;
- (long long)endpointMode;
- (long long)endpointStyle;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (id)endpointerDelegate;
- (id)endpointerModelVersion;
- (id)hybridEndpointer;
- (id)init;
- (double)interspeechWaitTime;
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (void)preheat;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)processServerEndpointFeatures:(id)arg1;
- (bool)recordingDidStop;
- (void)recordingStoppedForReason:(unsigned long long)arg1;
- (void)reset;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;
- (bool)saveSamplesSeenInReset;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setActiveEndpointer:(id)arg1;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setDidEnterTwoshot:(bool)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(long long)arg1;
- (void)setEndpointStyle:(long long)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (void)setHybridEndpointer:(id)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setRecordingDidStop:(bool)arg1;
- (void)setSaveSamplesSeenInReset:(bool)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)setVad2Endpointer:(id)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (double)startWaitTime;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (id)vad2Endpointer;

@end
