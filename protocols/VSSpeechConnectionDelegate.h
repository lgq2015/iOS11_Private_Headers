/* made by EzioChiu.
 */

@protocol VSSpeechConnectionDelegate

@required

- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 didStopAtEnd:(bool)arg3 error:(NSError *)arg4;
- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequestDidStart:(VSPresynthesizedAudioRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didReceiveTimingInfo:(NSArray *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didStopAtEnd:(bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidContinue:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidPause:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidStart:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 synthesisRequest:(VSSpeechRequest *)arg2 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;

@end
