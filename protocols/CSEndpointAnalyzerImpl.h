/* made by EzioChiu.
 */

@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>

@required

- (unsigned long long)activeChannel;
- (bool)canProcessCurrentRequest;
- (<CSEndpointAnalyzerDelegate> *)delegate;
- (void)processAudioSamplesAsynchronously:(CSAudioChunk *)arg1;
- (void)recordingStoppedForReason:(unsigned long long)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setDelegate:(id <CSEndpointAnalyzerDelegate>)arg1;

@optional

- (NSString *)endpointerModelVersion;
- (void)handleVoiceTriggerWithActivationInfo:(NSDictionary *)arg1;
- (void)processServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;
- (void)shouldAcceptEagerResultForDuration:(void *)arg1 resultsCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;

@end
