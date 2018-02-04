/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>

- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (id)customSignature;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (id)encryptionIdentityPersistentReference;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (id)foldersTag;
- (bool)generatesBulletins;
- (id)inboxFolder;
- (id)initWithDAAccount:(id)arg1;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(bool)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (void)performFolderChange:(id)arg1 isUserRequested:(bool)arg2;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(bool)arg4 consumer:(id)arg5;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(bool)arg4 consumer:(id)arg5;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (oneway void)performSearchQuery:(id)arg1;
- (bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (bool)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (id)sentItemsFolder;
- (oneway void)setAccount:(id)arg1;
- (oneway void)setCustomSignature:(id)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (oneway void)setGeneratesBulletins:(bool)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (oneway void)shutdown;
- (id)signingIdentityPersistentReference;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (int)supportsConversations;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)supportsSmartForwardReply;
- (int)supportsUniqueServerId;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;

@end
