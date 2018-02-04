/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieTVHUDView : UIView {
    long long  _currentState;
    UIImageView * _playbackMode;
    MPAVController * _player;
}

@property (nonatomic, retain) MPAVController *player;

- (void).cxx_destruct;
- (void)_changeState;
- (void)_fadeOut;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
