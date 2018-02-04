/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageLibrary : NSObject {
    MFAttachmentLibraryDataProvider * _attachmentDataProvider;
    NSString * _path;
}

- (id)UIDsToDeleteInMailbox:(id)arg1;
- (id)accountForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(bool)arg3 newMessagesByOldMessage:(id)arg4;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(bool)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(bool)arg9 addPOPUIDs:(bool)arg10 dataSectionsByMessage:(id)arg11;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (id)allUIDsInMailbox:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned int)arg3;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2;
- (unsigned int)attachmentCountForMailboxes:(id)arg1;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3;
- (bool)canProvideMinimumRemoteID;
- (void)closeDatabaseConnections;
- (void)commit;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(bool)arg2;
- (void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (long long)createLibraryIDForAccount:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(bool)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(bool)arg3;
- (id)dataForMimePart:(id)arg1 isComplete:(bool*)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataProvider;
- (id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (void)dealloc;
- (void)deleteAccount:(id)arg1;
- (void)deleteDataForMessage:(id)arg1;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (void)deleteOfflineCacheDataForAccount:(long long)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(bool)arg7;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromMailbox:(id)arg2;
- (bool)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataForMessage:(id)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)invalidateAccount:(id)arg1;
- (bool)isBusy;
- (bool)isMessageContentsLocallyAvailable:(id)arg1;
- (bool)libraryExists;
- (long long)libraryIDForAccount:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (void)lockDBForWriting;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 success:(bool*)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(bool*)arg3;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)metadataForMessage:(id)arg1;
- (id)metadataForMessage:(id)arg1 key:(id)arg2;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (unsigned long long)mostRecentStatusCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned int*)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg1 limit:(unsigned int)arg2 success:(bool*)arg3;
- (void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3;
- (id)remoteStoreForMessage:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(bool)arg2 andNotify:(bool)arg3;
- (bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(bool)arg3;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)setFlagsForMessages:(id)arg1;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (void)setLastSyncAndMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setMessage:(id)arg1 isPartial:(bool)arg2;
- (void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (bool)shouldCancel;
- (long long)statusCountDeltaForMailbox:(id)arg1;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(bool*)arg2;
- (oneway void)updateMessage:(id)arg1 withMetadata:(id /* block */)arg2;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (id)urlForMailboxID:(unsigned int)arg1;

@end
