/* made by EzioChiu.
 */

@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>

@required

- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didDeleteMessages:(NNMKProtoMessageDeletions *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestCompactMessages:(NNMKProtoCompactMessagesRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestSendMessage:(NNMKProtoSendMessageRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMailboxSelection:(NNMKProtoMailboxSelection *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMessagesStatus:(NNMKProtoMessageStatusUpdates *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didWarnMessagesFilteredOut:(NNMKProtoMessagesFilteredOutWarning *)arg2;
- (void)messagesSyncServiceServerConnectivityChanged:(NNMKMessagesSyncServiceServer *)arg1;
- (void)messagesSyncServiceServerSpaceBecameAvailable:(NNMKMessagesSyncServiceServer *)arg1;

@end
