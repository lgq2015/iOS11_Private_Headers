/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSong : PBCodable <NSCopying> {
    MIPAlbum * _album;
    MIPArtist * _artist;
    int  _audioFormat;
    MIPArtist * _composer;
    int  _discNumber;
    bool  _excludeFromShuffle;
    long long  _geniusId;
    MIPGenre * _genre;
    struct { 
        unsigned int geniusId : 1; 
        unsigned int audioFormat : 1; 
        unsigned int discNumber : 1; 
        unsigned int lyricsChecksum : 1; 
        unsigned int trackNumber : 1; 
        unsigned int userRating : 1; 
        unsigned int excludeFromShuffle : 1; 
        unsigned int hasVideo : 1; 
    }  _has;
    bool  _hasVideo;
    NSString * _lyrics;
    int  _lyricsChecksum;
    MIPPlaybackInfo * _playbackInfo;
    int  _trackNumber;
    int  _userRating;
}

@property (nonatomic, retain) MIPAlbum *album;
@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic) int audioFormat;
@property (nonatomic, retain) MIPArtist *composer;
@property (nonatomic) int discNumber;
@property (nonatomic) bool excludeFromShuffle;
@property (nonatomic) long long geniusId;
@property (nonatomic, retain) MIPGenre *genre;
@property (nonatomic, readonly) bool hasAlbum;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic) bool hasAudioFormat;
@property (nonatomic, readonly) bool hasComposer;
@property (nonatomic) bool hasDiscNumber;
@property (nonatomic) bool hasExcludeFromShuffle;
@property (nonatomic) bool hasGeniusId;
@property (nonatomic, readonly) bool hasGenre;
@property (nonatomic) bool hasHasVideo;
@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic) bool hasLyricsChecksum;
@property (nonatomic, readonly) bool hasPlaybackInfo;
@property (nonatomic) bool hasTrackNumber;
@property (nonatomic) bool hasUserRating;
@property (nonatomic) bool hasVideo;
@property (nonatomic, retain) NSString *lyrics;
@property (nonatomic) int lyricsChecksum;
@property (nonatomic, retain) MIPPlaybackInfo *playbackInfo;
@property (nonatomic) int trackNumber;
@property (nonatomic) int userRating;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (int)audioFormat;
- (id)composer;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discNumber;
- (bool)excludeFromShuffle;
- (long long)geniusId;
- (id)genre;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasAudioFormat;
- (bool)hasComposer;
- (bool)hasDiscNumber;
- (bool)hasExcludeFromShuffle;
- (bool)hasGeniusId;
- (bool)hasGenre;
- (bool)hasHasVideo;
- (bool)hasLyrics;
- (bool)hasLyricsChecksum;
- (bool)hasPlaybackInfo;
- (bool)hasTrackNumber;
- (bool)hasUserRating;
- (bool)hasVideo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lyrics;
- (int)lyricsChecksum;
- (void)mergeFrom:(id)arg1;
- (id)playbackInfo;
- (bool)readFrom:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setAudioFormat:(int)arg1;
- (void)setComposer:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setExcludeFromShuffle:(bool)arg1;
- (void)setGeniusId:(long long)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasAudioFormat:(bool)arg1;
- (void)setHasDiscNumber:(bool)arg1;
- (void)setHasExcludeFromShuffle:(bool)arg1;
- (void)setHasGeniusId:(bool)arg1;
- (void)setHasHasVideo:(bool)arg1;
- (void)setHasLyricsChecksum:(bool)arg1;
- (void)setHasTrackNumber:(bool)arg1;
- (void)setHasUserRating:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setLyrics:(id)arg1;
- (void)setLyricsChecksum:(int)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (void)setUserRating:(int)arg1;
- (int)trackNumber;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
