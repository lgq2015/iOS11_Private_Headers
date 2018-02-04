/* made by EzioChiu.
 */

@protocol AVConferenceDelegate

@required

- (void)conference:(AVConference *)arg1 cancelRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 didStartSession:(bool)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 remoteAudioPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteScreenAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteVideoAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteVideoPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 sendRelayUpdate:(long long)arg2 updateDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 networkHint:(bool)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 remoteMediaStalled:(bool)arg3;
- (void)serverDiedForConference:(AVConference *)arg1;

@optional

- (void)conference:(AVConference *)arg1 closeConnectionForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 didReceiveARPLData:(NSData *)arg2 withCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 didStartSession:(bool)arg2 withCallID:(long long)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)conference:(AVConference *)arg1 isRemoteAudioBelowThreshold:(bool)arg2;
- (void)conference:(AVConference *)arg1 localAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)conference:(AVConference *)arg1 remoteAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseAudio:(bool)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseVideo:(bool)arg3 error:(NSError *)arg4;

@end
