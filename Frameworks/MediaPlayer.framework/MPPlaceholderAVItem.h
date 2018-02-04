/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderAVItem : MPAVItem {
    NSString * _album;
    NSString * _artist;
    double  _durationFromExternalMetadata;
    bool  _explicitTrack;
    bool  _likeStateEnabled;
    NSString * _mainTitle;
    bool  _supportsLikedState;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic) double durationFromExternalMetadata;
@property (getter=isExplicitTrack, nonatomic) bool explicitTrack;
@property (getter=isLikedStateEnabled, nonatomic) bool likedStateEnabled;
@property (nonatomic, retain) NSString *mainTitle;
@property (nonatomic) bool supportsLikedState;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)durationFromExternalMetadata;
- (bool)isExplicitTrack;
- (bool)isLikedStateEnabled;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDurationFromExternalMetadata:(double)arg1;
- (void)setExplicitTrack:(bool)arg1;
- (void)setLikedStateEnabled:(bool)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setSupportsLikedState:(bool)arg1;
- (bool)supportsLikedState;
- (bool)supportsSettingCurrentTime;
- (bool)supportsSkip;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)mpcReporting_isValidReportingItem;

@end