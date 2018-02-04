/* made by EzioChiu.
 */

@protocol VCMediaStreamDelegate <NSObject>

@required

- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didPauseStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didResumeStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didStartStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStreamDidStop:(id <VCMediaStreamProtocol>)arg1;

@optional

- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(NSError *)arg3 dictionary:(NSDictionary *)arg4;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 updateFrequencyLevel:(NSData *)arg2 isInputMeter:(bool)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id <VCMediaStreamProtocol>)arg1;

@end
