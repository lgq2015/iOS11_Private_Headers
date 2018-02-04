/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPlaybackProgressIndicator : UIView {
    UIView * _containerView;
    double  _currentProgress;
    NSArray * _loadedTimeRanges;
    _PGPlaybackProgressIndicatorRangesView * _loadedTimeRangesView;
    PGPlaybackProgress * _playbackProgress;
    NSTimer * _playbackProgressTimer;
    _PGPlaybackProgressIndicatorRangesView * _playbackProgressView;
}

@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic, retain) PGPlaybackProgress *playbackProgress;

- (void).cxx_destruct;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;
- (void)_updatePlaybackProgressMaskViewMaskRanges;
- (void)_updatePlaybackProgressTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)loadedTimeRanges;
- (id)playbackProgress;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPlaybackProgress:(id)arg1;

@end
