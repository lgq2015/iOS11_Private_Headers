/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelGenericObject : MPModelObject {
    MPModelAlbum * _album;
    MPModelArtist * _artist;
    MPModelMediaClip * _mediaClip;
    MPModelMovie * _movie;
    MPModelPlaylist * _playlist;
    MPModelPlaylistEntry * _playlistEntry;
    MPModelPodcast * _podcast;
    MPModelPodcastEpisode * _podcastEpisode;
    MPModelRadioStation * _radioStation;
    MPModelTVSeason * _season;
    MPModelTVShow * _show;
    MPModelSong * _song;
    MPModelTVEpisode * _tvEpisode;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelPlaylistEntry *playlistEntry;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, retain) MPModelPodcastEpisode *podcastEpisode;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelSong *song;
@property (nonatomic, retain) MPModelTVEpisode *tvEpisode;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelRelationshipGenericAlbum__PROPERTY;
+ (id)__MPModelRelationshipGenericArtist__PROPERTY;
+ (id)__MPModelRelationshipGenericMediaClip__PROPERTY;
+ (id)__MPModelRelationshipGenericMovie__PROPERTY;
+ (id)__MPModelRelationshipGenericPlaylistEntry__PROPERTY;
+ (id)__MPModelRelationshipGenericPlaylist__PROPERTY;
+ (id)__MPModelRelationshipGenericPodcastEpisode__PROPERTY;
+ (id)__MPModelRelationshipGenericPodcast__PROPERTY;
+ (id)__MPModelRelationshipGenericRadioStation__PROPERTY;
+ (id)__MPModelRelationshipGenericSong__PROPERTY;
+ (id)__MPModelRelationshipGenericTVEpisode__PROPERTY;
+ (id)__MPModelRelationshipGenericTVSeason__PROPERTY;
+ (id)__MPModelRelationshipGenericTVShow__PROPERTY;
+ (id)__album__KEY;
+ (id)__artist__KEY;
+ (id)__mediaClip__KEY;
+ (id)__movie__KEY;
+ (id)__playlistEntry__KEY;
+ (id)__playlist__KEY;
+ (id)__podcastEpisode__KEY;
+ (id)__podcast__KEY;
+ (id)__radioStation__KEY;
+ (id)__season__KEY;
+ (id)__show__KEY;
+ (id)__song__KEY;
+ (id)__tvEpisode__KEY;
+ (id)genericObjectWithModelObject:(id)arg1;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (void).cxx_destruct;
- (id)album;
- (id)anyObject;
- (id)artist;
- (id)flattenedGenericObject;
- (id)identifiers;
- (id)mediaClip;
- (id)mediaItemPropertyValues;
- (id)movie;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (id)playlistEntry;
- (id)podcast;
- (id)podcastEpisode;
- (id)radioStation;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)season;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setMediaClip:(id)arg1;
- (void)setMovie:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setPlaylistEntry:(id)arg1;
- (void)setPodcast:(id)arg1;
- (void)setPodcastEpisode:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setSong:(id)arg1;
- (void)setTvEpisode:(id)arg1;
- (id)show;
- (id)song;
- (id)storeItemMetadataRequestItemIdentifier;
- (bool)storeItemMetadataRequestNeedsPersonalization;
- (id)tvEpisode;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)mpc_protoContainerRepresentation;
- (id)mpc_protoItemRepresentation;
- (id)mqf_playbackItemMetadataModelObject;

@end
