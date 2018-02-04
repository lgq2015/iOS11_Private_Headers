/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoScrubberView : UIView <MiroVideoScrubberControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * __filmStripView;
    bool  __needsUpdateFilmStripView;
    bool  __needsUpdateVideoScrubberController;
    MiroPlayheadView * __playheadView;
    UIScrollView * __scrollView;
    MiroVideoScrubberController * __videoScrubberController;
    id  _delegate;
    double  _estimatedDuration;
    UIView * _filmstripView;
    UIImage * _placeholderThumbnail;
    AVPlayer * _player;
    unsigned long long  _previousPlayState;
    double  _scrolledTime;
    bool  _shouldPreventUpdates;
}

@property (setter=_setFilmStripView:, nonatomic, retain) UIView *_filmStripView;
@property (setter=_setNeedsUpdateFilmStripView:, nonatomic) bool _needsUpdateFilmStripView;
@property (setter=_setNeedsUpdateVideoScrubberController:, nonatomic) bool _needsUpdateVideoScrubberController;
@property (setter=_setPlayheadView:, nonatomic, retain) MiroPlayheadView *_playheadView;
@property (setter=_setScrollView:, nonatomic, retain) UIScrollView *_scrollView;
@property (setter=_setVideoScrubberController:, nonatomic, retain) MiroVideoScrubberController *_videoScrubberController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double estimatedDuration;
@property (nonatomic, retain) UIView *filmstripView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *placeholderThumbnail;
@property (nonatomic, retain) AVPlayer *player;
@property (readonly) UIScrollView *scrollView;
@property (nonatomic) double scrolledTime;
@property (nonatomic) bool shouldPreventUpdates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentAVAsset;
- (id)_filmStripView;
- (void)_handleInteractionBegan;
- (void)_handleInteractionEndedAndTogglePlayState:(bool)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleTouchGesture:(id)arg1;
- (void)_invalidateFilmStripView;
- (void)_invalidateVideoScrubberController;
- (bool)_isUserInteractingWithScrollView;
- (double)_lengthForDuration:(double)arg1;
- (bool)_needsUpdate;
- (bool)_needsUpdateFilmStripView;
- (bool)_needsUpdateVideoScrubberController;
- (bool)_playerIsPlaying;
- (id)_playheadView;
- (id)_scrollView;
- (void)_setFilmStripView:(id)arg1;
- (void)_setNeedsUpdateFilmStripView:(bool)arg1;
- (void)_setNeedsUpdateVideoScrubberController:(bool)arg1;
- (void)_setPlayheadView:(id)arg1;
- (void)_setScrollView:(id)arg1;
- (void)_setVideoScrubberController:(id)arg1;
- (void)_startObservingPlayerStatus;
- (void)_stopObservingPlayerStatus;
- (void)_updateFilmStripViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePlayheadFrame;
- (void)_updateScrollViewContentOffset;
- (void)_updateVideoscrubberControllerIfNeeded;
- (void)_updateVisibleRectOfFilmStripView;
- (id)_videoScrubberController;
- (void)dealloc;
- (id)delegate;
- (double)estimatedDuration;
- (id)filmstripView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderThumbnail;
- (id)player;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)scrolledTime;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedDuration:(double)arg1;
- (void)setFilmstripView:(id)arg1;
- (void)setPlaceholderThumbnail:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScrolledTime:(double)arg1;
- (void)setShouldPreventUpdates:(bool)arg1;
- (bool)shouldPreventUpdates;
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(id)arg1;

@end
