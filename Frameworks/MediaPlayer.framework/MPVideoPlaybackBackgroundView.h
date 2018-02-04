/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoPlaybackBackgroundView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UIImageView * _imageView;
    MPAVController * _player;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) MPAVController *player;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (id)_imageNamed:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_updateDisplay;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)player;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlayer:(id)arg1;

@end
