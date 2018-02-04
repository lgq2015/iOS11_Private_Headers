/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoFillView : SXFillView <SXViewportChangeListener> {
    SXClippingView * _clippingView;
    SXImageResource * _imageResource;
    SXVideoFillPlayerView * _playerView;
    SXVideoFill * _videoFill;
}

@property (nonatomic, retain) SXClippingView *clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageResource *imageResource;
@property (nonatomic, retain) SXVideoFillPlayerView *playerView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXVideoFill *videoFill;

- (void).cxx_destruct;
- (id)clippingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillFrameWithBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageResource;
- (id)initWithVideoFill:(id)arg1 andContext:(id)arg2;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (id)playerView;
- (void)reset;
- (void)setClippingView:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageResource:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (id)videoFill;

@end
