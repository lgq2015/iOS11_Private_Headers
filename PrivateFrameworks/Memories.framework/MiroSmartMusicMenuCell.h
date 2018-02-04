/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSmartMusicMenuCell : UITableViewCell {
    UILabel * _artistName;
    UIImageView * _artwork;
    UIImageView * _cloudStatus;
    bool  _observingSong;
    float  _progress;
    MiroCircularProgressBar * _progressIndicator;
    Reachability * _reachability;
    UILabel * _songName;
    NSString * _songUID;
}

@property (nonatomic) UILabel *artistName;
@property (nonatomic) UIImageView *artwork;
@property (nonatomic) UIImageView *cloudStatus;
@property (nonatomic) bool observingSong;
@property (nonatomic) float progress;
@property (nonatomic) MiroCircularProgressBar *progressIndicator;
@property (nonatomic, retain) Reachability *reachability;
@property (nonatomic) UILabel *songName;
@property (nonatomic, retain) NSString *songUID;

+ (double)dynamicTypeHeight;

- (void).cxx_destruct;
- (void)_setProgress:(float)arg1;
- (void)_setupReachabiliy;
- (void)_songAssetChanged:(id)arg1;
- (void)_updateCloudStatus;
- (void)_updateDownload:(id)arg1;
- (void)_updateProgressIndicator:(float)arg1;
- (void)_updateSongPreview:(id)arg1;
- (void)_updateTextColors;
- (id)artistName;
- (id)artwork;
- (void)awakeFromNib;
- (id)cloudStatus;
- (void)dealloc;
- (long long)networkStatus;
- (void)networkStatusChanged:(id)arg1;
- (bool)observingSong;
- (void)prepareForReuse;
- (float)progress;
- (id)progressIndicator;
- (id)reachability;
- (void)setArtistName:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setCloudStatus:(id)arg1;
- (void)setObservingSong:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setSongName:(id)arg1;
- (void)setSongUID:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)songName;
- (id)songUID;
- (void)updateArtwork;
- (void)updateSongNameForSong:(id)arg1;

@end
