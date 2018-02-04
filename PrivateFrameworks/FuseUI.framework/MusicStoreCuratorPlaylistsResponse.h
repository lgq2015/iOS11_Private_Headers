/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreCuratorPlaylistsResponse : MPModelResponse {
    NSArray * _additionalPlaylistIdentifiers;
    MPChangeDetails * _changeDetails;
}

@property (nonatomic, copy) NSArray *additionalPlaylistIdentifiers;
@property (nonatomic, retain) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) bool hasAdditionalPlaylists;

- (void).cxx_destruct;
- (id)additionalPlaylistIdentifiers;
- (id)changeDetails;
- (bool)hasAdditionalPlaylists;
- (void)setAdditionalPlaylistIdentifiers:(id)arg1;
- (void)setChangeDetails:(id)arg1;

@end
