/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject {
    NSString * _albumArtist;
    NSString * _albumTitle;
    NSString * _artist;
    NSString * _composer;
    NSString * _genre;
    NSString * _mediaLibraryUID;
    unsigned long long  _persistentID;
    unsigned long long  _playlistPersistentID;
    NSString * _title;
    unsigned long long  _validMask;
}

@property (nonatomic, retain) NSString *albumArtist;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) unsigned long long playlistPersistentID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long validMask;

- (void).cxx_destruct;
- (id)albumArtist;
- (id)albumTitle;
- (id)artist;
- (id)composer;
- (id)copyNSRepresentation:(int)arg1;
- (id)debugDescription;
- (id)description;
- (void)fillStruct:(struct { unsigned int x1; unsigned long long x2; char *x3; char *x4; char *x5; char *x6; char *x7; char *x8; }*)arg1;
- (id)genre;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 playlistPersistentID:(unsigned long long)arg3;
- (id)initWithMediaLibrary:(id)arg1 playlistPersistentID:(unsigned long long)arg2 dict:(id)arg3;
- (id)mediaLibraryUID;
- (unsigned long long)persistentID;
- (unsigned long long)playlistPersistentID;
- (void)setAlbumArtist:(id)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setPlaylistPersistentID:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (unsigned long long)validMask;

@end
