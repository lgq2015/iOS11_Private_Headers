/* made by EzioChiu.
 */

@protocol IMServiceSessionProtocol

@optional

- (void)acceptSubscriptionRequest:(bool)arg1 from:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)authenticateAccount:(NSString *)arg1;
- (void)autoLogin;
- (void)autoReconnect;
- (void)autoReconnectWithAccount:(IMDAccount *)arg1;
- (void)cancelVCRequestWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 reason:(NSNumber *)arg4;
- (void)changeGroup:(NSString *)arg1 changes:(NSDictionary *)arg2;
- (void)changeGroups:(NSDictionary *)arg1;
- (void)closeSessionChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)declineInvitationToChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)enrollDeviceInSMSRelay:(NSString *)arg1;
- (void)enrollSelfDeviceInSMSRelay;
- (void)holdBuddyUpdates;
- (void)importMessage:(NSDictionary *)arg1 isRead:(bool)arg2;
- (void)invitePersonInfo:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5;
- (void)invitePersonInfoToiMessageChat:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSDictionary *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 groupID:(NSString *)arg5 joinProperties:(NSDictionary *)arg6;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSDictionary *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 joinProperties:(NSDictionary *)arg5;
- (void)leaveChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)leaveiMessageChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)login;
- (void)loginWithAccount:(IMDAccount *)arg1;
- (void)logout;
- (void)logoutWithAccount:(IMDAccount *)arg1;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(NSString *)arg1;
- (void)passwordUpdatedWithAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)relay:(NSString *)arg1 sendCancel:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)relay:(NSString *)arg1 sendInitateRequest:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)relay:(NSString *)arg1 sendUpdate:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)removeAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)removeChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)removePersonInfo:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)removePersonInfoFromiMessageChat:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)renameGroup:(NSString *)arg1 to:(NSString *)arg2;
- (void)requestGroups;
- (void)requestProperty:(NSString *)arg1 ofPerson:(NSString *)arg2;
- (void)requestSubscriptionTo:(NSString *)arg1;
- (void)requestVCWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (void)respondToVCInvitationWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (void)resumeBuddyUpdates;
- (void)sendAVMessageToPerson:(NSString *)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(NSDictionary *)arg4 conference:(NSString *)arg5;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 toChatID:(NSString *)arg4 identifier:(NSString *)arg5 style:(unsigned char)arg6;
- (void)sendCounterProposalToPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (void)sendDeleteCommand:(NSDictionary *)arg1 forChatGUID:(NSString *)arg2;
- (void)sendFileTransfer:(IMFileTransfer *)arg1 toPerson:(NSString *)arg2;
- (void)sendLogDumpMessageAtFilePath:(NSString *)arg1 toRecipient:(NSString *)arg2;
- (void)sendMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendPlayedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendSavedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendVCUpdate:(NSData *)arg1 toPerson:(NSString *)arg2 conference:(NSString *)arg3;
- (void)setAllowList:(NSArray *)arg1;
- (void)setBlockIdleStatus:(bool)arg1;
- (void)setBlockList:(NSArray *)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setProperties:(NSDictionary *)arg1 ofParticipant:(NSString *)arg2 inChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2 ofPerson:(NSString *)arg3;
- (void)startWatchingBuddy:(NSString *)arg1;
- (void)stopWatchingBuddy:(NSString *)arg1;
- (void)unEnrollDeviceInSMSRelay:(NSString *)arg1;
- (void)unregisterAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 account:(NSString *)arg3;
- (void)updateDisplayName:(NSString *)arg1 fromDisplayName:(NSString *)arg2 forChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5;
- (void)validateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)validateProfileWithAccount:(NSString *)arg1;

@end
