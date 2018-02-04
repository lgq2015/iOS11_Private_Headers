/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudController : NSObject {
    MSVDistributedNotificationObserver * _addToPlaylistBehaviorChangedObserver;
    NSObject<HSCloudAvailability> * _cloudAvailabilityController;
    HSCloudClient * _cloudClient;
    bool  _isCloudEnabled;
    bool  _isInitialImport;
    bool  _isUpdateInProgress;
    bool  _jaliscoGeniusEnabled;
    int  _preferencesChangedNotifyToken;
    bool  _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool canDefaultMediaLibraryShowCloudContent;
@property (nonatomic, readonly) bool canShowCloudDownloadButtons;
@property (nonatomic, readonly) bool canShowCloudMusic;
@property (nonatomic, readonly) bool canShowCloudVideo;
@property (nonatomic, readonly) HSCloudClient *cloudClient;
@property (nonatomic, readonly) bool enablingJaliscoGeniusRequiresTerms;
@property (nonatomic, readonly) bool hasCloudLockerAccount;
@property (nonatomic, readonly) bool hasPurchaseHistoryAccount;
@property (nonatomic, readonly) bool isCloudEnabled;
@property (nonatomic, readonly) bool isGeniusEnabled;
@property (nonatomic, readonly) bool isInitialImport;
@property (nonatomic, readonly) bool isUpdateInProgress;
@property (getter=isJaliscoGeniusEnabled, nonatomic, readonly) bool jaliscoGeniusEnabled;

+ (bool)isEnablingCloudLibraryDestructive;
+ (bool)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(bool)arg1;
- (bool)canDefaultMediaLibraryShowCloudContent;
- (bool)canShowCloudDownloadButtons;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (bool)canShowCloudMusic;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (bool)canShowCloudVideo;
- (long long)cloudAddToPlaylistBehavior;
- (id)cloudClient;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)enablingJaliscoGeniusRequiresTerms;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)hasCloudLockerAccount;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1;
- (bool)hasPurchaseHistoryAccount;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isCellularDataRestricted;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (bool)isCloudEnabled;
- (bool)isCloudLibraryEnabled;
- (bool)isGeniusEnabled;
- (bool)isInitialImport;
- (bool)isJaliscoGeniusEnabled;
- (bool)isUpdateInProgress;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(id /* block */)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resignActive;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 completion:(id /* block */)arg3;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 completion:(id /* block */)arg3;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;

@end
