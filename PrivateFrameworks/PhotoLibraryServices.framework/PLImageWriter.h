/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {
    bool  _databaseIsCorrupt;
    NSMutableArray * _highPriorityJobs;
    unsigned long long  _highPrioritySequentialJobCount;
    NSMutableDictionary * _inProgressAvalancheFds;
    int  _jobQueueAvailabilityToken;
    NSRecursiveLock * _jobsLock;
    NSMutableArray * _lowPriorityJobs;
    PLXPCTransaction * _transaction;
    NSCountedSet * _unfinishedHighPriorityJobs;
    int  _unfinishedJobCount;
    int  _unfinishedJobsRequiringIndicatorCount;
    NSCountedSet * _unfinishedLowPriorityJobs;
    bool  _writerThreadRunning;
}

+ (id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3;
+ (id)_assetAdjustmentsFromPhotoEditModel:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetAdjustmentsWithEffectFilterName:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetUUIDFromIncomingFilename:(id)arg1;
+ (bool)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3;
+ (id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1;
+ (bool)_requiresIndicatorFileForJobType:(id)arg1;
+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
+ (void)decorateThumbnailInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 duration:(id)arg3 inContext:(struct CGContext { }*)arg4 format:(id)arg5;
+ (bool)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 adjustmentDataPath:(id)arg3 filteredImagePath:(id)arg4 isSubstandardRender:(bool)arg5;
+ (id)sharedWriter;

- (void)_decorateThumbnail:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1 completion:(id /* block */)arg2;
- (id)_fetchPhotoAssetForMediaGroupUUID:(id)arg1 moc:(id)arg2;
- (id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1;
- (void)_incrementJobCount:(id)arg1;
- (bool)_isHighPriorityJob:(id)arg1;
- (id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(id)arg3;
- (void)_photoIrisPairingDidSucceed:(bool)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4;
- (void)_postJobQueueNotificationIsAvailable:(bool)arg1;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processAvalancheJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processAvalanchesValidationJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processBatchImageJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processCrashRecoveryJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processDaemonJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)_processImageJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processImportImageJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processIngestedSyncedAssetJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processJob:(id)arg1;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSyncedVideoSaveJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processVideoJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processVideoSaveJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2;
- (bool)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(bool*)arg3 error:(id*)arg4;
- (void)_writerThread;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (bool)canEnqueueJob:(id)arg1;
- (void)dealloc;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (bool)enqueueJob:(id)arg1;
- (id)init;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2;

@end
