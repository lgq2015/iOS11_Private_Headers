/* made by EzioChiu.
 */

@protocol GKVoiceChatClient <NSObject>

@required

- (NSString *)participantID;
- (void)voiceChatService:(GKVoiceChatService *)arg1 sendData:(NSData *)arg2 toParticipantID:(NSString *)arg3;

@optional

- (void)voiceChatService:(GKVoiceChatService *)arg1 didNotStartWithParticipantID:(NSString *)arg2 error:(NSError *)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didReceiveInvitationFromParticipantID:(NSString *)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didStartWithParticipantID:(NSString *)arg2;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didStopWithParticipantID:(NSString *)arg2 error:(NSError *)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 sendRealTimeData:(NSData *)arg2 toParticipantID:(NSString *)arg3;

@end
