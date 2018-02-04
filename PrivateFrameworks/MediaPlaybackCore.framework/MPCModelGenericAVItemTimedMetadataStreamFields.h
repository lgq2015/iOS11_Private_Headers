/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject {
    NSString * _album;
    NSString * _artist;
    NSArray * _artworkDictionaries;
    bool  _explicitContent;
    NSString * _title;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSArray *artworkDictionaries;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)artworkDictionaries;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkDictionaries:(id)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
