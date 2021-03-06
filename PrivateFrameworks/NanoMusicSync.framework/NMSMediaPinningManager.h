/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaPinningManager : NSObject {
    NSArray * _cachedAddedSongs;
    NSArray * _cachedAlbumIdentifiers;
    NMSMediaContainerList * _cachedMusicContainerList;
    NSArray * _cachedPlaylistIdentifiers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _pinnedPlaylistsValidated;
    NMSyncDefaults * _sharedDefaults;
    bool  _workoutPlaylistValidated;
}

@property (nonatomic, readonly) NSSet *addedSongs;
@property (nonatomic, readonly) NSArray *addedSongsArray;
@property (nonatomic, readonly) NSArray *albumIdentifiers;
@property (nonatomic, readonly) NSArray *musicContainers;
@property (nonatomic, readonly) NSArray *offPowerEligibleSongsList;
@property (nonatomic, readonly) NSArray *onlyOnPowerSongsList;
@property (nonatomic, readonly) NSArray *pinnedAlbums;
@property (nonatomic, readonly) NSArray *pinnedPlaylists;
@property (nonatomic, readonly) NSArray *playlistIdentifiers;
@property (nonatomic, retain) NSNumber *workoutPlaylistID;

+ (id)_cachedAlbumIdentifiersFilePath;
+ (id)_cachedIdentifiersDirectoryPath;
+ (id)_cachedPlaylistIdentifiersFilePath;
+ (id)_fetchMusicRecommendations;
+ (unsigned long long)mediaStorageSizeForCurrentWatch;
+ (bool)playlistPIDValidForPinning:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_aggregatedMusicContainerList;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1;
- (void)_handlePinningSelectionsDidChangeNotification:(id)arg1;
- (void)_handlePinningSettingsDidChangeNotification:(id)arg1;
- (void)_handleRecommendationLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleRecommendationsDidChangeNotification:(id)arg1;
- (void)_invalidateCachedSongs;
- (bool)_isAlbumPinned:(id)arg1;
- (bool)_isPlaylistPinned:(id)arg1;
- (id)_musicContainerList;
- (unsigned int)_pairedWatchVersion;
- (void)_refreshAlbumIdentifiersWithPath:(id)arg1;
- (void)_refreshPlaylistIdentifiersWithPath:(id)arg1;
- (void)_setWorkoutPlaylistID:(id)arg1;
- (void)_updateWorkoutSettingsPlaylistPIDTo:(id)arg1;
- (id)addedItemsWithMediaTypes:(unsigned int)arg1;
- (id)addedSongs;
- (id)addedSongsArray;
- (unsigned long long)addedSongsSize;
- (id)albumIdentifiers;
- (id)init;
- (void)invalidateCache;
- (bool)isAlbumPinned:(id)arg1;
- (bool)isPlaylistPinned:(id)arg1;
- (id)mediaContainerForIdentifierSet:(id)arg1;
- (id)musicContainers;
- (unsigned long long)musicStorageLimitInBytes;
- (unsigned long long)nominatedSongsSize;
- (id)offPowerEligibleSongsList;
- (id)onlyOnPowerSongsList;
- (void)pinAlbum:(id)arg1;
- (void)pinPlaylist:(id)arg1;
- (id)pinnedAlbums;
- (id)pinnedPlaylists;
- (id)playlistIdentifiers;
- (void)setWorkoutPlaylistID:(id)arg1;
- (void)unpinAlbum:(id)arg1;
- (void)unpinPlaylist:(id)arg1;
- (id)workoutPlaylistID;

@end
