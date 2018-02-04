/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener> {
    unsigned long long  _currentMessageID;
    <IMSimulatedChatDelegate> * _delegate;
    IMSimulatedAccount * _simulatedAccount;
    NSMutableArray * _simulatedAttachments;
    NSString * _simulatedChatIdentifier;
    NSString * _simulatedDisplayName;
}

@property (nonatomic, readonly) unsigned long long currentMessageID;
@property (nonatomic) <IMSimulatedChatDelegate> *delegate;
@property (nonatomic, readonly) IMSimulatedAccount *simulatedAccount;
@property (nonatomic, readonly) NSMutableArray *simulatedAttachments;
@property (nonatomic, copy) NSString *simulatedChatIdentifier;
@property (nonatomic, copy) NSString *simulatedDisplayName;

- (void).cxx_destruct;
- (bool)_handleIncomingItem:(id)arg1;
- (id)_messageWithGUID:(id)arg1;
- (id)account;
- (id)attachments;
- (void)chat:(id)arg1 didSendMessage:(id)arg2;
- (id)chatIdentifier;
- (unsigned long long)currentMessageID;
- (id)delegate;
- (id)displayName;
- (id)initWithIncomingIDs:(id)arg1 messageIDOffset:(unsigned long long)arg2 account:(id)arg3;
- (long long)joinState;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (void)markAsAutoSpamReported;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSimulatedChatIdentifier:(id)arg1;
- (void)setSimulatedDisplayName:(id)arg1;
- (id)simulatedAccount;
- (id)simulatedAttachments;
- (id)simulatedChatIdentifier;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (id)simulatedDisplayName;

@end
