/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAVPlayerView : UIView {
    long long  _scaleMode;
}

@property (nonatomic, readonly, retain) AVPlayerLayer *layer;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) long long scaleMode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoRect;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)player;
- (long long)scaleMode;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;

@end