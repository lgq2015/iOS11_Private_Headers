/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsContainerView : UIView {
    bool  _empty;
    long long  _mediaControlsPlayerState;
    MediaControlsTimeControl * _mediaControlsTimeControl;
    MediaControlsTransportStackView * _mediaControlsTransportStackView;
    UIVisualEffectView * _primaryVisualEffectView;
    long long  _style;
}

@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic) long long mediaControlsPlayerState;
@property (nonatomic, retain) MediaControlsTimeControl *mediaControlsTimeControl;
@property (nonatomic, retain) MediaControlsTransportStackView *mediaControlsTransportStackView;
@property (nonatomic, retain) UIVisualEffectView *primaryVisualEffectView;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic) long long style;
@property (getter=isTimeControlOnScreen, nonatomic) bool timeControlOnScreen;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmpty;
- (bool)isTimeControlOnScreen;
- (void)layoutSubviews;
- (long long)mediaControlsPlayerState;
- (id)mediaControlsTimeControl;
- (id)mediaControlsTransportStackView;
- (id)primaryVisualEffectView;
- (id)response;
- (void)setEmpty:(bool)arg1;
- (void)setMediaControlsPlayerState:(long long)arg1;
- (void)setMediaControlsTimeControl:(id)arg1;
- (void)setMediaControlsTransportStackView:(id)arg1;
- (void)setPrimaryVisualEffectView:(id)arg1;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTimeControlOnScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
