/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBBBulletinsManager : NSObject <PLBBPendingBulletinsBatchDelegate> {
    void * _addressBook;
    int  _alertFiltrationEnabled;
    bool  _badgeCountIsInvalid;
    NSMutableDictionary * _dirtyPlist;
    bool  _enableTemporaryDebugMode;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _pendingBatches;
    NSMutableArray * _pendingBulletins;
    NSObject<OS_dispatch_source> * _pendingChangesTimerSource;
    NSMutableIndexSet * _pendingDeleteRecordIDs;
    NSObject<OS_dispatch_source> * _saveTimerSource;
    NSDictionary * _timeDelayedBulletinInfo;
}

@property (readonly) NSArray *currentBulletinDictionaries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bestDateForDeliveringNotificationWithError:(id*)arg1;
+ (id)_notificationDeliveryDate;
+ (id)sharedManager;

- (void)_addBulletinForDelayedScheduling:(id)arg1;
- (void)_addPendingBulletins:(id)arg1;
- (id)_albumCloudGUIDForRecordID:(unsigned long long)arg1;
- (bool)_alertFiltrationEnabled;
- (bool)_bulletinType:(long long)arg1 matchesCommentsOrLikeBulletins:(bool)arg2 andPhotosAddedToAlbumBulletins:(bool)arg3;
- (id)_currentPendingBatch;
- (id)_currentPlistContents;
- (void)_deleteBulletinsForAlbumWithUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)_deleteBulletinsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeBulletins:(bool)arg2 shouldDeletePhotosAddedToAlbumBulletins:(bool)arg3;
- (void)_deleteBulletinsForMemoriesWithUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)_deleteBulletinsForObjectWithUUID:(id)arg1 bulletinDictionaryKey:(id)arg2 bulletinTypes:(id)arg3;
- (id)_editablePlistContents;
- (id)_generateMemoryBulletinRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (unsigned long long)_generateUniqueRecordID;
- (id)_indexesOfOutdatedMemoryBulletinsInDescriptions:(id)arg1;
- (id)_initSharedInstance;
- (bool)_invitationBulletinExistsForAlbum:(id)arg1;
- (id)_memoryBulletinFromDictionaryRepresentation:(id)arg1;
- (id)_plistFilePath;
- (void)_processPendingChanges;
- (void)_resetAlertFiltration;
- (void)_saveDirtyChanges;
- (void)_scheduleProcessPendingChanges;
- (void)_setNeedsSaving;
- (bool)_shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (void*)addressBook;
- (id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2;
- (void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(bool)arg3;
- (bool)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id /* block */)arg1;
- (void)clearAllBulletinsUpToRecordID:(unsigned long long)arg1;
- (id)currentBulletinDictionaries;
- (void)dealloc;
- (void)discardAllBulletins;
- (bool)enableTemporaryDebugMode;
- (void)forceWriteUnsavedChanges;
- (id)getInterestingMemoryBulletinInfoToBeScheduled;
- (void)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidDeleteSharedAlbum:(id)arg1;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteDidReceiveAsset:(id)arg1 atIndex:(unsigned long long)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1;
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1;
- (void)noteUserDidViewCloudFeedContent:(long long)arg1;
- (void)postInterestingMemoryBulletinInfosImmediately:(id)arg1;
- (void)postNotificationForInterestingMemoryWithUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)removeNotificationForInterestingMemoryWithUUID:(id)arg1;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)sendResponse:(bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;
- (void)setEnableTemporaryDebugMode:(bool)arg1;
- (void)userViewedBulletinWithRecordID:(unsigned long long)arg1;

@end
