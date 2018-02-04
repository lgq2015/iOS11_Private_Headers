/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaylistEntry : MPModelObject {
    MPArtworkCatalog * __artworkCatalog;
    MPModelMovie * _movie;
    MPModelPlaylist * _playlist;
    long long  _position;
    MPModelSong * _song;
    MPModelTVEpisode * _tvEpisode;
}

@property (nonatomic, retain) MPArtworkCatalog *_artworkCatalog;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (nonatomic, retain) MPModelSong *song;
@property (nonatomic, retain) MPModelTVEpisode *tvEpisode;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyPlaylistEntryPosition__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntryMovie__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntryPlaylist__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntrySong__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntryTVEpisode__PROPERTY;
+ (id)___MPModelPropertyPlaylistEntryArtwork__PROPERTY;
+ (id)___artworkCatalog__KEY;
+ (id)__movie__KEY;
+ (id)__playlist__KEY;
+ (id)__position__KEY;
+ (id)__song__KEY;
+ (id)__tvEpisode__KEY;
+ (id)kindWithKinds:(id)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)_artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)movie;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (long long)position;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setMovie:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setSong:(id)arg1;
- (void)setTvEpisode:(id)arg1;
- (void)set_artworkCatalog:(id)arg1;
- (id)song;
- (id)storeItemMetadataRequestItemIdentifier;
- (bool)storeItemMetadataRequestNeedsPersonalization;
- (id)tvEpisode;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)mpc_protoItemRepresentation;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;

@end
