/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntriesManager : NSObject {
    PLPhotoLibrary * __library;
}

@property (nonatomic, readonly, retain) PLPhotoLibrary *_library;

+ (id)sharedManager;

- (void)_addAsset:(id)arg1 toEntry:(id)arg2;
- (id)_albumCreatedEntryForSharedAlbum:(id)arg1;
- (id /* block */)_assetSortingComparator;
- (bool)_commentIsBatchCaption:(id)arg1;
- (id /* block */)_commentSortingComparator;
- (id)_dateForAsset:(id)arg1;
- (id)_firstEntryAfterDate:(id)arg1;
- (id)_firstEntryOnOrAfterDate:(id)arg1;
- (id)_firstEntryOnOrBeforeDate:(id)arg1;
- (id)_firstEntryRelativeToDate:(id)arg1 ascending:(bool)arg2 includeSameDate:(bool)arg3;
- (void)_getEarliestDate:(id*)arg1 latestDate:(id*)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3;
- (id)_invitationAcceptedEntryForInvitationRecord:(id)arg1;
- (id)_invitationDeclinedEntryForInvitationRecord:(id)arg1;
- (id)_invitationReceivedEntryForSharedAlbum:(id)arg1;
- (id)_library;
- (void)_mergeEntriesAroundDate:(id)arg1;
- (void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2;
- (void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1;
- (void)_noteContentDeletionAffectingAssetsEntry:(id)arg1;
- (void)_noteContentDeletionAffectingCommentsEntry:(id)arg1;
- (void)_noteContentDeletionAffectingInvitationEntry:(id)arg1;
- (void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1;
- (void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1;
- (void)_noteDidReceiveSharedAsset:(id)arg1;
- (void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1;
- (void)_noteDidReceiveSharedComment:(id)arg1;
- (void)_noteDidReceiveSharedComments:(id)arg1;
- (void)_noteDidUpdateInvitationRecord:(id)arg1;
- (void)_noteDidUpdateSharedAlbum:(id)arg1;
- (bool)_shouldIgnoreAsset:(id)arg1;
- (bool)_shouldIgnoreComment:(id)arg1;
- (bool)_shouldIgnoreInvitationRecord:(id)arg1;
- (bool)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2;
- (id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2;
- (id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2;
- (void)_splitEntriesAtDate:(id)arg1;
- (id)_subscriptionDateForSharedAlbum:(id)arg1;
- (id)_subscriptionEntryForSharedAlbum:(id)arg1;
- (bool)_tryMergingComment:(id)arg1 withEntry:(id)arg2;
- (bool)_wasAssetPublishedBeforeSubscription:(id)arg1;
- (bool)_wasCommentPublishedBeforeSubscription:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)rebuildAllEntries:(id /* block */)arg1;

@end
