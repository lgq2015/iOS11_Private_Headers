/* made by EzioChiu.
 */

@protocol ASAccountActorMessages

@required

- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(NSNotification *)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(NSNotification *)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(NSNotification *)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(DASearchQuery *)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (NSString *)customSignature;
- (DAFolder *)deletedItemsFolder;
- (DAFolder *)draftsFolder;
- (NSData *)encryptionIdentityPersistentReference;
- (NSSet *)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2;
- (NSSet *)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (bool)generatesBulletins;
- (DAFolder *)inboxFolder;
- (int)mailNumberOfPastDaysToSync;
- (NSArray *)mailboxes;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1 persistent:(bool)arg2;
- (int)performFetchAttachmentRequest:(DAMessageFetchAttachmentRequest *)arg1 consumer:(id <DAMessageFetchAttachmentConsumer>)arg2;
- (int)performFetchMessageSearchResultRequests:(NSArray *)arg1 consumer:(id <DAMailboxFetchSearchResultConsumer>)arg2;
- (void)performFolderChange:(DAFolderChange *)arg1 isUserRequested:(bool)arg2;
- (int)performMailboxRequest:(DAMailboxRequest *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)performMailboxRequests:(NSArray *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)performMoveRequests:(NSArray *)arg1 consumer:(id <DAMessageMoveRequestConsumer>)arg2;
- (int)performResolveRecipientsRequest:(DAResolveRecipientsRequest *)arg1 consumer:(id <DAResolveRecipientsConsumer>)arg2;
- (oneway void)performSearchQuery:(DASearchQuery *)arg1;
- (bool)reattemptInvitationLinkageForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2;
- (bool)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 useSmartTasksIfPossible:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (int)sendSmartMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 replaceOriginalMime:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (DAFolder *)sentItemsFolder;
- (oneway void)setAccount:(id)arg1;
- (oneway void)setCustomSignature:(NSString *)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1;
- (bool)setFolderIdsThatExternalClientsCareAboutAdded:(NSSet *)arg1 deleted:(NSSet *)arg2 foldersTag:(NSString *)arg3;
- (oneway void)setGeneratesBulletins:(bool)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setSigningIdentityPersistentReference:(NSData *)arg1;
- (oneway void)shutdown;
- (NSData *)signingIdentityPersistentReference;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(NSArray *)arg1;
- (int)supportsConversations;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)supportsSmartForwardReply;
- (int)supportsUniqueServerId;
- (NSString *)unactionableICSRepresentationForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2 outSummary:(id*)arg3;

@end
