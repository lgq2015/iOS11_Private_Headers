/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBatchDownloader : NSObject {
    PLCloudPhotoLibraryManager * _manager;
    PLPhotoLibrary * _photoLibrary;
}

+ (id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg1;

- (id)_debugPrintAlbumOrderForAssets:(id)arg1;
- (void)_dedupePersonsInSyncContext:(id)arg1;
- (void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg1;
- (id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handleAssetRecords:(id)arg1 inSyncContext:(id)arg2 withChangeBatch:(id)arg3 dedupeGraphPersons:(id*)arg4;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleFaceCropRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 includesTiboSchema:(bool*)arg3;
- (void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_mergeExistingPersonsWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)_mergeTargetFromPersons:(id)arg1;
- (void)_mergeUpdatedPersons:(id)arg1 inLibrary:(id)arg2;
- (void)_processNotificationUpdatesForMemories:(id)arg1;
- (void)_saveIfNeeded;
- (void)_triggerBackgroundDownloadFailureForResources:(id)arg1;
- (void)dealloc;
- (id)deletedRecordUuidsFromBatch:(id)arg1;
- (id)handleIncomingBatch:(id)arg1;
- (id)initWithLibrary:(id)arg1 withManager:(id)arg2;

@end
