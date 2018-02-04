/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController {
    IMDCKMessageSyncCKOperationFactory * _CKOperationFactory;
    NSObject<OS_xpc_object> * _activity;
    CKServerChangeToken * _archivedRecordSyncToken;
    NSObject<OS_dispatch_queue> * _ckQueue;
    CKServerChangeToken * _latestSyncToken;
    IMDRecordZoneManager * _recordZoneManager;
    bool  _shouldCheckDeviceConditions;
    <IMDCKSyncTokenStore> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;
@property NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) CKServerChangeToken *archivedRecordSyncToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic) bool shouldCheckDeviceConditions;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (id)_chatRegistry;
- (id)_ckUtilitiesInstance;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)_deviceConditionsAllowsMessageSync;
- (bool)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1;
- (void)_fetchArchivedRecordsIfNeeded:(bool)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 WithCompletionBlock:(id /* block */)arg4;
- (void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 completionBlock:(id /* block */)arg4;
- (bool)_isValidCKRecordToSync:(id)arg1;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (unsigned long long)_messageDeleteBatchSize;
- (id)_messageRecordSalt;
- (bool)_messageZoneCreated;
- (id)_messageZoneID;
- (void)_migrateSyncTokens;
- (void)_noteSyncEnded;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_numberOfMessagesToUpload;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(bool)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 NSError:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(id /* block */)arg2;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(bool)arg4 writeCompletionBlock:(id /* block */)arg5;
- (void)_processRecordChange:(id)arg1;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2;
- (void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(bool)arg9 completionBlock:(id /* block */)arg10;
- (id)_recordKeyManagerSharedInstance;
- (id)_recordsToSave;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1;
- (void)_resetArvchivedRecordSyncToken;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (id)_sharedIMDMessageStore;
- (bool)_shouldFetchArchivedRecords:(id)arg1;
- (bool)_shouldMarkAllMessagesAsNeedingSync;
- (id)_syncOperationGroupName;
- (void)_updateAllMessagesAsNotNeedingReUpload;
- (void)_writeDirtyMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (id)activity;
- (id)archivedRecordSyncToken;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deleteMessageSyncToken;
- (void)deleteMessagesZone;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)recordZoneManager;
- (void)setActivity:(id)arg1;
- (void)setArchivedRecordSyncToken:(id)arg1;
- (void)setCKOperationFactory:(id)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setShouldCheckDeviceConditions:(bool)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (bool)shouldCheckDeviceConditions;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (void)syncMessagesWithSyncType:(long long)arg1 shouldCheckDeviceConditions:(bool)arg2 activity:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)syncTokenStore;

@end
