/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKChatSyncController : IMDCKAbstractSyncController {
    IMDCKChatSyncCKOperationFactory * _CKOperationFactory;
    IMDChatRegistry * _chatRegistry;
    NSObject<OS_dispatch_queue> * _ckQueue;
    CKServerChangeToken * _latestSyncToken;
    CKRecord * _lockRecord;
    IMDRecordZoneManager * _recordZoneManager;
    <IMDCKSyncTokenStore> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (nonatomic, retain) IMDChatRegistry *chatRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) CKRecord *lockRecord;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (id)_CKUtilitiesSharedInstance;
- (void)__syncChatsWithCloudKit:(long long)arg1 withCompletion:(id /* block */)arg2;
- (bool)_chatZoneCreated;
- (id)_chatZoneID;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)arg1;
- (id)_copyRecordIDsToDelete;
- (bool)_eligibleForTruthZone;
- (id)_fetchChatRecordOperation;
- (id)_generateLockRecord;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)arg1 error:(id)arg2;
- (bool)_lockRecordHadConflict:(id)arg1;
- (void)_logGreenTeaLogsForChats:(id)arg1;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)arg1;
- (void)_migrateServerChangeToken;
- (id)_newckRecordsFromChats:(id)arg1;
- (unsigned long long)_numberOfChatsToWrite;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completion:(id /* block */)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 error:(id)arg5;
- (id)_randomSalt;
- (id)_recordKeyManagerSharedInstance;
- (void)_resetChatSyncStateForRecord:(id)arg1;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldMarkAllChatsAsNeedingReUpload;
- (bool)_shouldResyncChatsForError:(id)arg1;
- (void)_syncChatsWithCloudKitWithCompletion:(id /* block */)arg1;
- (void)_updateAllChatsAsNotNeedingReUpload;
- (void)_updateChatUsingCKRecord:(id)arg1;
- (void)_writeCKRecordsToChatZone:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_writeDirtyChatsToCloudKitWithCompletion:(id /* block */)arg1;
- (void)anyChatExistsOnServerWithCompletion:(id /* block */)arg1;
- (id)chatRegistry;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deletChatSyncToken;
- (void)deleteChatZone;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)lockRecord;
- (id)recordZoneManager;
- (void)setCKOperationFactory:(id)arg1;
- (void)setChatRegistry:(id)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setLockRecord:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (void)syncChatsWithCloudKit:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)syncChatsWithCloudKitWithCompletion:(id /* block */)arg1;
- (void)syncPendingDeletionWithCompletion:(id /* block */)arg1;
- (id)syncTokenStore;

@end
