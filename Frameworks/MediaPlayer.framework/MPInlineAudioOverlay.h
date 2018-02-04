/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
    UIView * _backgroundView;
    NSString * _playbackErrorDescription;
    UILabel * _playbackErrorDescriptionLabel;
    UILabel * _streamingLabel;
    long long  _style;
    MPInlineAudioTransportControls * _transportControls;
    <MPVideoControllerProtocol> * _videoViewController;
}

@property (nonatomic, copy) NSString *playbackErrorDescription;
@property (nonatomic) long long style;
@property (nonatomic) <MPVideoControllerProtocol> *videoViewController;

- (void).cxx_destruct;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (void)dealloc;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newProgressIndicator;
- (id)playbackErrorDescription;
- (void)reloadView;
- (void)setCurrentTime:(double)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setItem:(id)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideoViewController:(id)arg1;
- (long long)style;
- (id)videoViewController;

@end
