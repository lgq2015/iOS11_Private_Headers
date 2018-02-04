/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlayEvent : MPModelObject {
    MPModelAlbum * _album;
    MPModelArtist * _artist;
    NSDate * _datePlayed;
    MPModelPlaylist * _playlist;
    MPModelRadioStation * _radioStation;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;

+ (id)__MPModelPropertyPlayEventDatePlayed__PROPERTY;
+ (id)__MPModelRelationshipPlayEventAlbum__PROPERTY;
+ (id)__MPModelRelationshipPlayEventArtist__PROPERTY;
+ (id)__MPModelRelationshipPlayEventPlaylist__PROPERTY;
+ (id)__MPModelRelationshipPlayEventRadioStation__PROPERTY;
+ (id)__album__KEY;
+ (id)__artist__KEY;
+ (id)__datePlayed__KEY;
+ (id)__playlist__KEY;
+ (id)__radioStation__KEY;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)contentItemCollectionInfo;
- (id)datePlayed;
- (long long)itemType;
- (id)playlist;
- (id)radioStation;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDatePlayed:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setRadioStation:(id)arg1;

@end
