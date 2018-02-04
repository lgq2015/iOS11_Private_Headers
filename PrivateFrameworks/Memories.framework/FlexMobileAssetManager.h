/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexMobileAssetManager : FlexCloudManager {
    NSString * _clientID;
    NSObject<OS_dispatch_queue> * _downloadQueue;
    NSObject * _downloadThrottleLock;
    NSString * _mobileAssetTypeIdentifier;
    NSMutableDictionary * _pendingDownloadMapping;
    NSMutableOrderedSet * _pendingDownloadSet;
    NSMutableDictionary * _processedDownloadMapping;
    NSMutableSet * _processedDownloadSet;
    NSObject<OS_dispatch_queue> * _purgeQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *downloadQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *purgeQueue;

+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(bool)arg2;
+ (id)compatibilityFilterPredicate;

- (void).cxx_destruct;
- (bool)_isCompatible:(id)arg1;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (void)_makeBundledArtworkCloudBacked;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (id)_newQueryDictForQuery:(id)arg1 songUID:(id)arg2 existingSong:(id)arg3 asset:(id)arg4;
- (void)_processArtwork;
- (void)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (void)_purgeAsset:(id)arg1;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 predicates:(id)arg2;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 songUID:(id)arg2 predicates:(id)arg3;
- (id)_queryLocalAssetInformation;
- (long long)_responseForError:(id)arg1;
- (void)_runAsyncAssetDownloadQuery:(id)arg1 existingSong:(id)arg2 cloudAsset:(id)arg3;
- (void)_runNextAsyncAssetDownloadQuery;
- (unsigned long long)_statusForAssetState:(long long)arg1;
- (void)_updateWithLocalArtwork;
- (unsigned long long)assetStatus:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)downloadQueue;
- (void)fetchAllSongsWithCompletion:(id /* block */)arg1;
- (id)filteredResults:(id)arg1 forMetadataMapping:(id)arg2;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)loadCachedSongs;
- (id)mobileAssetForSongAsset:(id)arg1;
- (id)purgeQueue;
- (void)requestDownloadOfAsset:(id)arg1;
- (void)requestPurgeOfAsset:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setPurgeQueue:(id)arg1;

@end
