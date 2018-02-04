/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerViewControllerContentView : UIView <AVPlaybackControlsViewDelegate> {
    UIImageView * _audioOnlyIndicatorView;
    NSString * _automaticVideoGravity;
    bool  _canAutomaticallyZoomLetterboxVideos;
    UIView * _contentOverlayView;
    <AVPlayerViewControllerContentViewDelegate> * _delegate;
    AVExternalPlaybackIndicatorView * _externalPlaybackIndicatorView;
    UIView * _iAdPreRollView;
    bool  _needsInitialLayout;
    AVPlaybackControlsView * _playbackControlsView;
    UIView * _playerLayerAndContentOverlayContainerView;
    __AVPlayerLayerView * _playerLayerView;
    AVStatusBarBackgroundGradientView * _statusBarBackgroundGradientView;
    NSMutableDictionary * _targetVideoGravities;
    UIImageView * _unsupportedContentIndicatorView;
}

@property (nonatomic, readonly) UIImageView *audioOnlyIndicatorView;
@property (nonatomic, copy) NSString *automaticVideoGravity;
@property (nonatomic) bool canAutomaticallyZoomLetterboxVideos;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPlayerViewControllerContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *iAdPreRollView;
@property (nonatomic, readonly) UIView *interactiveContentOverlayView;
@property (nonatomic, readonly) bool isCoveringWindow;
@property (nonatomic, readonly) bool isDescendantOfNonPagingScrollView;
@property (nonatomic, readonly) unsigned long long layoutMetrics;
@property (nonatomic) bool needsInitialLayout;
@property (nonatomic, readonly) AVPlaybackControlsView *playbackControlsView;
@property (nonatomic, readonly) UIView *playerLayerAndContentOverlayContainerView;
@property (nonatomic, readonly) __AVPlayerLayerView *playerLayerView;
@property (nonatomic, readonly) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *targetVideoGravities;
@property (nonatomic, readonly) UIImageView *unsupportedContentIndicatorView;

- (void).cxx_destruct;
- (void)_applyVideoGravityIfNeeded:(long long)arg1;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)_updatePlayerLayerAndContentOverlayContainerViewLayoutMarginsForVideoGravity:(long long)arg1;
- (void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
- (void)addPlayerLayerAndContentOverlayContainerViewIfNeeded;
- (id)audioOnlyIndicatorView;
- (id)automaticVideoGravity;
- (bool)canAutomaticallyZoomLetterboxVideos;
- (id)contentOverlayView;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)externalPlaybackIndicatorView;
- (id)iAdPreRollView;
- (id)initWithPlayerLayerView:(id)arg1;
- (id)interactiveContentOverlayView;
- (bool)isCoveringWindow;
- (bool)isDescendantOfNonPagingScrollView;
- (bool)isViewDescendantOfPlaybackControlsSubview:(id)arg1;
- (unsigned long long)layoutMetrics;
- (void)layoutSubviews;
- (bool)needsInitialLayout;
- (id)playbackControlsView;
- (void)playbackControlsView:(id)arg1 interactiveContentOverlayViewLayoutMarginsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldLayoutIfNeeded:(bool)arg3;
- (id)playerLayerAndContentOverlayContainerView;
- (id)playerLayerView;
- (void)setAutomaticVideoGravity:(id)arg1;
- (void)setCanAutomaticallyZoomLetterboxVideos:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2;
- (void)setNeedsInitialLayout:(bool)arg1;
- (void)setShowsAudioOnlyIndicator:(bool)arg1;
- (void)setShowsExternalPlaybackIndicator:(bool)arg1;
- (void)setShowsUnsupportedContentIndicator:(bool)arg1;
- (void)setTargetVideoGravity:(id)arg1 forLayoutMetrics:(unsigned long long)arg2;
- (id)statusBarBackgroundGradientView;
- (id)targetVideoGravities;
- (id)unsupportedContentIndicatorView;

@end
