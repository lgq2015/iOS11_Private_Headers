/* made by EzioChiu.
 */

@protocol AVAudioSessionDelegateMediaPlayerOnly <AVAudioSessionDelegate>

@optional

- (void)beginInterruptionFromInterruptor:(NSString *)arg1;
- (void)endInterruptionFromInterruptor:(NSString *)arg1 category:(NSString *)arg2 flags:(unsigned long long)arg3;

@end
