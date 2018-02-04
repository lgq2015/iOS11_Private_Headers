/* made by EzioChiu.
 */

@protocol TTSSpeechRequestDelegate <NSObject>

@required

- (oneway void)speechRequest:(TTSSpeechRequest *)arg1 didStopWithSuccess:(bool)arg2 phonemesSpoken:(NSString *)arg3 forService:(id <TTSSpeechService>)arg4 error:(NSError *)arg5;
- (oneway void)speechRequest:(TTSSpeechRequest *)arg1 withMark:(long long)arg2 didStartForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 forService:(id <TTSSpeechService>)arg4;
- (oneway void)speechRequestDidContinue:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;
- (oneway void)speechRequestDidPause:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;
- (oneway void)speechRequestDidStart:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;

@end
