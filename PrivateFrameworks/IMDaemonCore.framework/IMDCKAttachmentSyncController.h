/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController {
    IMDCKAttachmentSyncCKOperationFactory * _CKOperationFactory;
    NSObject<OS_xpc_object> * _activity;
    bool  _assetDownloadInProgress;
    NSObject<OS_dispatch_queue> * _ckQueue;
    NSMutableDictionary * _completionBlocksForAssetFetchOperations;
    NSMutableArray * _downloadAssetsForTransferGUIDs;
    CKServerChangeToken * _latestSyncToken;
    id /* block */  _perTransferProgress;
    NSMutableDictionary * _recordIDToTransferMap;
    IMDRecordZoneManager * _recordZoneManager;
    bool  _shouldCheckDeviceConditions;
    <IMDCKSyncTokenStore> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory;
@property NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool assetDownloadInProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) NSMutableDictionary *completionBlocksForAssetFetchOperations;
@property (nonatomic, retain) NSMutableArray *downloadAssetsForTransferGUIDs;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, copy) id /* block */ perTransferProgress;
@property (nonatomic, retain) NSMutableDictionary *recordIDToTransferMap;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic) bool shouldCheckDeviceConditions;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (id)__databaseRequestForAttachmentsWithAssets;
- (bool)__shouldOptimizeAttachmentDefault;
- (unsigned long long)_attachmentDeleteBatchSize;
- (bool)_attachmentZoneCreated;
- (id)_attachmentZoneID;
- (id)_attachmentZoneSalt;
- (id)_ckUtilitiesInstance;
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)_deviceConditionsAllowsMessageSync;
- (bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(bool)arg1;
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(bool)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 completion:(id /* block */)arg3;
- (void)_fetchFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(bool)arg2 completion:(id /* block */)arg3;
- (void)_kickOffAssetFetchForTransfersIfNeeded;
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;
- (void)_migrateSyncToken;
- (unsigned long long)_numberOfAttachmentsToDownload;
- (unsigned long long)_numberOfAttachmentsToWriteUp;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 shouldWriteBackChanges:(bool)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(id /* block */)arg11;
- (void)_processRecordsFetchedForAttachmentPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(bool)arg3 completion:(id /* block */)arg4;
- (id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2;
- (id)_recordKeyManagerSharedInstance;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldMarkAllAttachmentsAsNeedingSync;
- (void)_updateAllAttachmentsAsNotNeedingReUpload;
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(bool)arg2;
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(id /* block */)arg3;
- (void)_writeAttachmentsToCloudKit:(id /* block */)arg1;
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)acceptFileTransfer:(id)arg1 completion:(id /* block */)arg2;
- (id)activity;
- (bool)assetDownloadInProgress;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (id)completionBlocksForAssetFetchOperations;
- (void)dealloc;
- (void)deleteAttachmentSyncToken;
- (void)deleteAttachmentZone;
- (id)downloadAssetsForTransferGUIDs;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(bool)arg2 perTransferProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)fileTransferCenter;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id /* block */)perTransferProgress;
- (id)recordIDToTransferMap;
- (id)recordZoneManager;
- (void)setActivity:(id)arg1;
- (void)setAssetDownloadInProgress:(bool)arg1;
- (void)setCKOperationFactory:(id)arg1;
- (void)setCompletionBlocksForAssetFetchOperations:(id)arg1;
- (void)setDownloadAssetsForTransferGUIDs:(id)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setPerTransferProgress:(id /* block */)arg1;
- (void)setRecordIDToTransferMap:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setShouldCheckDeviceConditions:(bool)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (bool)shouldCheckDeviceConditions;
- (void)syncAttachmentDeletesToCloudKit:(id /* block */)arg1;
- (void)syncAttachmentsWithSyncType:(long long)arg1 shouldCheckDeviceConditions:(bool)arg2 activity:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)syncTokenStore;

@end
