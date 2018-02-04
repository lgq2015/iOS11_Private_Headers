/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    <MPModelObjectPlaybackItemMetadataDelegate> * _modelObjectDelegate;
    MPModelPlaybackPosition * _playbackPosition;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic, readonly) MPModelFileAsset *localFileAsset;
@property (nonatomic) <MPModelObjectPlaybackItemMetadataDelegate> *modelObjectDelegate;
@property (nonatomic, readonly) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, readonly) MPModelStoreAsset *storeAsset;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)_shouldRespectMusicCellularDataSetting;
+ (bool)_shouldRespectStoreCellularDataSetting;
+ (id)requiredHomeSharingAssetProperties;
+ (id)requiredLocalFileAssetProperties;
+ (id)requiredPlaybackPositionProperties;
+ (id)requiredProperties;
+ (id)requiredStoreAssetProperties;

- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(bool)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(bool*)arg4;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (bool)allowsAssetCaching;
- (double)bookmarkTime;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(bool*)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (long long)downloadIdentifier;
- (long long)endpointType;
- (id)homeSharingAsset;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (id)init;
- (bool)isSubscriptionRequired;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)localFileAsset;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (id)modelObjectDelegate;
- (id)playbackPosition;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setModelObjectDelegate:(id)arg1;
- (bool)shouldRememberBookmarkTime;
- (bool)shouldReportPlayEventsToStore;
- (unsigned long long)storeAccountID;
- (id)storeAsset;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mqf_playbackItemMetadataModelObject;

@end
