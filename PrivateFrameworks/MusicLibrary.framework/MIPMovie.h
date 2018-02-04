/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPMovie : PBCodable <NSCopying> {
    MIPArtist * _artist;
    int  _audioLanguage;
    int  _audioTrackId;
    int  _audioTrackIndex;
    NSString * _extendedContentName;
    NSData * _flattenedChapterData;
    struct { 
        unsigned int rentalDuration : 1; 
        unsigned int rentalPlaybackDuration : 1; 
        unsigned int rentalPlaybackStartedDateTime : 1; 
        unsigned int rentalStartedDateTime : 1; 
        unsigned int audioLanguage : 1; 
        unsigned int audioTrackId : 1; 
        unsigned int audioTrackIndex : 1; 
        unsigned int subtitleLanguage : 1; 
        unsigned int subtitleTrackIndex : 1; 
        unsigned int videoQuality : 1; 
        unsigned int hasAlternateAudio : 1; 
        unsigned int hasChapterData : 1; 
        unsigned int hasSubtitles : 1; 
        unsigned int rental : 1; 
    }  _has;
    bool  _hasAlternateAudio;
    bool  _hasChapterData;
    bool  _hasSubtitles;
    NSString * _movieInfo;
    bool  _rental;
    long long  _rentalDuration;
    long long  _rentalPlaybackDuration;
    long long  _rentalPlaybackStartedDateTime;
    long long  _rentalStartedDateTime;
    int  _subtitleLanguage;
    int  _subtitleTrackIndex;
    int  _videoQuality;
}

@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic) int audioLanguage;
@property (nonatomic) int audioTrackId;
@property (nonatomic) int audioTrackIndex;
@property (nonatomic, retain) NSString *extendedContentName;
@property (nonatomic, retain) NSData *flattenedChapterData;
@property (nonatomic) bool hasAlternateAudio;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic) bool hasAudioLanguage;
@property (nonatomic) bool hasAudioTrackId;
@property (nonatomic) bool hasAudioTrackIndex;
@property (nonatomic) bool hasChapterData;
@property (nonatomic, readonly) bool hasExtendedContentName;
@property (nonatomic, readonly) bool hasFlattenedChapterData;
@property (nonatomic) bool hasHasAlternateAudio;
@property (nonatomic) bool hasHasChapterData;
@property (nonatomic) bool hasHasSubtitles;
@property (nonatomic, readonly) bool hasMovieInfo;
@property (nonatomic) bool hasRental;
@property (nonatomic) bool hasRentalDuration;
@property (nonatomic) bool hasRentalPlaybackDuration;
@property (nonatomic) bool hasRentalPlaybackStartedDateTime;
@property (nonatomic) bool hasRentalStartedDateTime;
@property (nonatomic) bool hasSubtitleLanguage;
@property (nonatomic) bool hasSubtitleTrackIndex;
@property (nonatomic) bool hasSubtitles;
@property (nonatomic) bool hasVideoQuality;
@property (nonatomic, retain) NSString *movieInfo;
@property (nonatomic) bool rental;
@property (nonatomic) long long rentalDuration;
@property (nonatomic) long long rentalPlaybackDuration;
@property (nonatomic) long long rentalPlaybackStartedDateTime;
@property (nonatomic) long long rentalStartedDateTime;
@property (nonatomic) int subtitleLanguage;
@property (nonatomic) int subtitleTrackIndex;
@property (nonatomic) int videoQuality;

- (void).cxx_destruct;
- (id)artist;
- (int)audioLanguage;
- (int)audioTrackId;
- (int)audioTrackIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extendedContentName;
- (id)flattenedChapterData;
- (bool)hasAlternateAudio;
- (bool)hasArtist;
- (bool)hasAudioLanguage;
- (bool)hasAudioTrackId;
- (bool)hasAudioTrackIndex;
- (bool)hasChapterData;
- (bool)hasExtendedContentName;
- (bool)hasFlattenedChapterData;
- (bool)hasHasAlternateAudio;
- (bool)hasHasChapterData;
- (bool)hasHasSubtitles;
- (bool)hasMovieInfo;
- (bool)hasRental;
- (bool)hasRentalDuration;
- (bool)hasRentalPlaybackDuration;
- (bool)hasRentalPlaybackStartedDateTime;
- (bool)hasRentalStartedDateTime;
- (bool)hasSubtitleLanguage;
- (bool)hasSubtitleTrackIndex;
- (bool)hasSubtitles;
- (bool)hasVideoQuality;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)movieInfo;
- (bool)readFrom:(id)arg1;
- (bool)rental;
- (long long)rentalDuration;
- (long long)rentalPlaybackDuration;
- (long long)rentalPlaybackStartedDateTime;
- (long long)rentalStartedDateTime;
- (void)setArtist:(id)arg1;
- (void)setAudioLanguage:(int)arg1;
- (void)setAudioTrackId:(int)arg1;
- (void)setAudioTrackIndex:(int)arg1;
- (void)setExtendedContentName:(id)arg1;
- (void)setFlattenedChapterData:(id)arg1;
- (void)setHasAlternateAudio:(bool)arg1;
- (void)setHasAudioLanguage:(bool)arg1;
- (void)setHasAudioTrackId:(bool)arg1;
- (void)setHasAudioTrackIndex:(bool)arg1;
- (void)setHasChapterData:(bool)arg1;
- (void)setHasHasAlternateAudio:(bool)arg1;
- (void)setHasHasChapterData:(bool)arg1;
- (void)setHasHasSubtitles:(bool)arg1;
- (void)setHasRental:(bool)arg1;
- (void)setHasRentalDuration:(bool)arg1;
- (void)setHasRentalPlaybackDuration:(bool)arg1;
- (void)setHasRentalPlaybackStartedDateTime:(bool)arg1;
- (void)setHasRentalStartedDateTime:(bool)arg1;
- (void)setHasSubtitleLanguage:(bool)arg1;
- (void)setHasSubtitleTrackIndex:(bool)arg1;
- (void)setHasSubtitles:(bool)arg1;
- (void)setHasVideoQuality:(bool)arg1;
- (void)setMovieInfo:(id)arg1;
- (void)setRental:(bool)arg1;
- (void)setRentalDuration:(long long)arg1;
- (void)setRentalPlaybackDuration:(long long)arg1;
- (void)setRentalPlaybackStartedDateTime:(long long)arg1;
- (void)setRentalStartedDateTime:(long long)arg1;
- (void)setSubtitleLanguage:(int)arg1;
- (void)setSubtitleTrackIndex:(int)arg1;
- (void)setVideoQuality:(int)arg1;
- (int)subtitleLanguage;
- (int)subtitleTrackIndex;
- (int)videoQuality;
- (void)writeTo:(id)arg1;

@end
