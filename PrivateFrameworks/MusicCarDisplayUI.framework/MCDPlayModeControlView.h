/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayModeControlView : UIView {
    NSArray * _activeButtonLayoutConstraints;
    MCDPlayModeButton * _addToLibraryButton;
    bool  _fuseSubscriberLayout;
    MCDPlayModeButton * _moreButton;
    MCDPlayModeButton * _playbackRateButton;
    MCDRepeatButton * _repeatButton;
    MCDPlayModeButton * _shuffleButton;
}

@property (nonatomic, retain) NSArray *activeButtonLayoutConstraints;
@property (nonatomic, readonly) MCDPlayModeButton *addToLibraryButton;
@property (nonatomic) bool fuseSubscriberLayout;
@property (nonatomic, readonly) MCDPlayModeButton *moreButton;
@property (nonatomic, readonly) MCDPlayModeButton *playbackRateButton;
@property (nonatomic, readonly) MCDRepeatButton *repeatButton;
@property (nonatomic, readonly) MCDPlayModeButton *shuffleButton;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_updateButtonLayouts;
- (id)activeButtonLayoutConstraints;
- (void)addSizeConstraintsForButton:(id)arg1;
- (id)addToLibraryButton;
- (bool)fuseSubscriberLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)moreButton;
- (id)playbackRateButton;
- (id)repeatButton;
- (void)setActiveButtonLayoutConstraints:(id)arg1;
- (void)setFuseSubscriberLayout:(bool)arg1;
- (id)shuffleButton;

@end
