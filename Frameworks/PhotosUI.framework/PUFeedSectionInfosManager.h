/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedSectionInfosManager : NSObject <PLAssetChangeObserver, PLCloudCommentsChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver> {
    <PUFeedSectionInfosManagerDelegate> * _delegate;
    NSDate * _earliestDate;
    NSMutableArray * _pendingAssetsChangeNotifications;
    NSMutableArray * _pendingCommentsChangeNotifications;
    NSMutableArray * _pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary * _photoLibrary;
    NSMutableArray * _sectionInfos;
    NSMapTable * _sectionInfosByCloudFeedEntry;
}

@property (nonatomic) <PUFeedSectionInfosManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3;
- (void)_rebuildSectionInfos;
- (id /* block */)_sectionInfoSortingComparator;
- (bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (void)assetsDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)indexOfSectionInfo:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (long long)numberOfInvitationsReceived;
- (long long)numberOfSectionInfos;
- (id)sectionInfoAtIndex:(long long)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shouldReload:(id)arg1;

@end
