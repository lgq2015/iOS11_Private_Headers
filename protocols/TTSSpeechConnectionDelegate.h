/* made by EzioChiu.
 */

@protocol TTSSpeechConnectionDelegate

@required

- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequest:(TTSSpeechRequest *)arg2 didStopAtEnd:(bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequest:(TTSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidContinue:(TTSSpeechRequest *)arg2;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidPause:(TTSSpeechRequest *)arg2;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidStart:(TTSSpeechRequest *)arg2;

@end
