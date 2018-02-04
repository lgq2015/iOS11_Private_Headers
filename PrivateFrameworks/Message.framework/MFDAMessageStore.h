/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageStore : MFLibraryStore {
    DAFolder * _DAFolder;
    bool  _backedByVirtualAllSearchMailbox;
}

@property (nonatomic) bool backedByVirtualAllSearchMailbox;

- (id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2;
- (id)_downloadHeadersForMessages:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4;
- (bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(id)arg4;
- (id)_folderIDForFetching;
- (void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 filterByDate:(bool)arg5 handler:(id /* block */)arg6;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (bool)allowsAppend;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (bool)backedByVirtualAllSearchMailbox;
- (id)bestAlternativeForPart:(id)arg1;
- (bool)bodyFetchRequiresNetworkActivity;
- (bool)canFetchSearchResults;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)fetchWindow;
- (unsigned long long)growFetchWindow;
- (bool)hasMoreFetchableMessages;
- (id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2;
- (void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (bool)messageCanBeTriaged:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (void)setBackedByVirtualAllSearchMailbox:(bool)arg1;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (bool)shouldGrowFetchWindow;
- (bool)shouldSetSummaryForMessage:(id)arg1;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id*)arg5;
- (bool)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

@end
