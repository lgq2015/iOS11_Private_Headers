/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoView : UIView {
    <SXVideoViewDelegate> * _delegate;
    SXKeyValueObserver * _dimensionsObserver;
    SXPlaybackCoordinator * _playbackCoordinator;
    SXKeyValueObserver * _readyForDisplayObserver;
    SXKeyValueObserver * _videoRectObserver;
}

@property (nonatomic) <SXVideoViewDelegate> *delegate;
@property (nonatomic, retain) SXKeyValueObserver *dimensionsObserver;
@property (nonatomic, readonly) AVPlayerLayer *layer;
@property (nonatomic) SXPlaybackCoordinator *playbackCoordinator;
@property (nonatomic, retain) SXKeyValueObserver *readyForDisplayObserver;
@property (nonatomic, retain) SXKeyValueObserver *videoRectObserver;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (void)addPlayerLayerObservers;
- (void)addVideoDimensionObserverIfNeeded;
- (id)delegate;
- (id)dimensionsObserver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)playbackCoordinator;
- (id)readyForDisplayObserver;
- (void)removePlayerLayerObservers;
- (void)removeVideoDimensionObserver;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsObserver:(id)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)setReadyForDisplayObserver:(id)arg1;
- (void)setVideoRectObserver:(id)arg1;
- (void)updateVideoGravityWithDimensions:(struct CGSize { double x1; double x2; })arg1;
- (id)videoRectObserver;

@end
