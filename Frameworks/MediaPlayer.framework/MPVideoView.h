/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoView : UIView <MPCVideoView> {
    NSDictionary * _AVURLAssetOptions;
    UIView * _contentView;
    NSString * _movieSubtitle;
    NSString * _movieTitle;
    MPAVController * _player;
    _MPAVPlayerView * _playerView;
    long long  _scaleMode;
    double  _startTime;
    double  _stopTime;
}

@property (nonatomic, retain) NSDictionary *AVURLAssetOptions;
@property (nonatomic, readonly) bool canChangeScaleMode;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveScaleMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } movieContentFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } movieFrame;
@property (nonatomic, retain) NSString *movieSubtitle;
@property (nonatomic, retain) NSString *movieTitle;
@property (nonatomic) MPAVController *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) long long scaleMode;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *videoGravity;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)AVURLAssetOptions;
- (bool)canChangeScaleMode;
- (id)contentView;
- (void)dealloc;
- (void)didMoveToWindow;
- (long long)effectiveScaleMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movieContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movieFrame;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)player;
- (id)playerLayer;
- (long long)scaleMode;
- (void)setAVURLAssetOptions:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleMode:(long long)arg1 animated:(bool)arg2;
- (void)setScaleMode:(long long)arg1 duration:(float)arg2;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (double)startTime;
- (double)stopTime;
- (void)toggleScaleMode:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)keyPathsForValuesAffectingPreferredContentSize;
+ (id)keyPathsForValuesAffectingReadyForDisplay;

- (bool)isReadyForDisplay;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setVideoGravity:(id)arg1;
- (id)videoGravity;

@end
