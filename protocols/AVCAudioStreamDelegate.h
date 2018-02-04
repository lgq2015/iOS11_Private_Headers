/* made by EzioChiu.
 */

@protocol AVCAudioStreamDelegate <NSObject>

@required

- (void)stream:(AVCAudioStream *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;

@optional

- (void)stream:(AVCAudioStream *)arg1 didPause:(bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)stream:(AVCAudioStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)stream:(AVCAudioStream *)arg1 didResume:(bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didStartSynchronizer:(bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)stream:(AVCAudioStream *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)streamDidRTCPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidServerDie:(AVCAudioStream *)arg1;
- (void)streamDidStop:(AVCAudioStream *)arg1;

@end
