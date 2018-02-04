/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelTVEpisode * _episode;
    MPModelGenericObject * _modelGenericObject;
}

@property (nonatomic, retain) MPModelTVEpisode *episode;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)requiredProperties;

- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (bool)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)episode;
- (double)expectedDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (id)localFileAsset;
- (id)mediaItem;
- (id)modelGenericObject;
- (id)playbackPosition;
- (void)setEpisode:(id)arg1;
- (long long)storeAdamID;
- (id)storeAsset;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mqf_playbackItemMetadataModelObject;

@end
