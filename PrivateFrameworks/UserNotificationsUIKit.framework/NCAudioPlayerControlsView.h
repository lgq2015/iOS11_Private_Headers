/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioPlayerControlsView : UIView {
    UIView * _contentView;
    bool  _contentViewLayoutConstraintsLoaded;
    bool  _contentViewLoaded;
    <NCAudioPlayerControlsDelegate> * _delegate;
    bool  _enabled;
    UIButton * _pauseButton;
    UIButton * _playButton;
    long long  _state;
    NCAudioPlayerTimelineSlider * _timelineSlider;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool contentViewLayoutConstraintsLoaded;
@property (nonatomic) bool contentViewLoaded;
@property (nonatomic) <NCAudioPlayerControlsDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIButton *pauseButton;
@property (nonatomic, retain) UIButton *playButton;
@property (nonatomic) long long state;
@property (nonatomic, retain) NCAudioPlayerTimelineSlider *timelineSlider;

- (void).cxx_destruct;
- (id)contentView;
- (bool)contentViewLayoutConstraintsLoaded;
- (bool)contentViewLoaded;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)loadContentView;
- (void)loadContentViewLayoutConstraints;
- (id)pauseButton;
- (void)pauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (id)playButton;
- (void)playButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setContentViewLayoutConstraintsLoaded:(bool)arg1;
- (void)setContentViewLoaded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setTimelineSlider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (void)stopButtonTapped:(id)arg1 withEvent:(id)arg2;
- (id)timelineSlider;
- (void)transitionToState:(long long)arg1 animated:(bool)arg2;

@end
