/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerView : UIView {
    PLAVPlayerView * _avPlayerView;
    bool  _destinationPlaceholderHidden;
    long long  _destinationPlaceholderStyle;
}

@property (getter=isDestinationPlaceholderHidden, nonatomic) bool destinationPlaceholderHidden;
@property (nonatomic, readonly) long long destinationPlaceholderStyle;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly, retain) UIView *videoView;

- (void)_installBackgroundView:(id)arg1;
- (void)dealloc;
- (long long)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDestinationPlaceholderHidden;
- (id)player;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;
- (id)videoView;

@end
