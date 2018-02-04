/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeView : UIView <MPAVRoutingControllerDelegate, NSCoding> {
    bool  _hasNonDefaultMaxVolumeSliderImage;
    bool  _hasNonDefaultMinVolumeSliderImage;
    bool  _hasNonDefaultRouteButtonImages;
    bool  _hidesRouteLabelWhenNoRouteChoice;
    MPMediaControlsStandaloneViewController * _mediaControlsViewController;
    bool  _pushedRouteDiscoveryModeState;
    UIButton * _routeButton;
    bool  _routeButtonShowsTouchWhenHighlighted;
    bool  _routeDiscoveryEnabled;
    UILabel * _routeLabel;
    MPAVRoutingController * _routingController;
    bool  _showingButton;
    bool  _showingLabel;
    bool  _showingSlider;
    bool  _showsRouteButton;
    bool  _showsVolumeSlider;
    long long  _style;
    MPVolumeSlider * _volumeSlider;
    bool  _volumeSliderShrinksFromBothEnds;
    bool  _wirelessRouteIsPicked;
    bool  _wirelessRoutesAvailable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesRouteLabelWhenNoRouteChoice;
@property (nonatomic, readonly) bool isShowingRouteButton;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic) bool routeButtonShowsTouchWhenHighlighted;
@property (nonatomic) bool showsRouteButton;
@property (nonatomic) bool showsVolumeSlider;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPVolumeSlider *volumeSlider;
@property (nonatomic) bool volumeSliderShrinksFromBothEnds;
@property (nonatomic, retain) UIImage *volumeWarningSliderImage;
@property (getter=isWirelessRouteActive, nonatomic, readonly) bool wirelessRouteActive;
@property (getter=areWirelessRoutesAvailable, nonatomic, readonly) bool wirelessRoutesAvailable;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_createSubviews;
- (id)_defaultRouteButtonImageAsSelected:(bool)arg1;
- (void)_displayAudioRoutePicker;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 routeButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_initWithStyle:(long long)arg1;
- (id)_routeButton;
- (void)_routingControllerDidUpdateVolumeControlState:(id)arg1;
- (void)_setRouteDiscoveryEnabled:(bool)arg1;
- (void)_setShowsRouteButton:(bool)arg1 animated:(bool)arg2;
- (void)_setShowsVolumeSlider:(bool)arg1;
- (void)_setVolumeAudioCategory:(id)arg1;
- (void)_updateWirelessRouteStatus;
- (bool)areWirelessRoutesAvailable;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissActiveOverlaysAnimated:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesRouteLabelWhenNoRouteChoice;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isShowingActiveOverlays;
- (bool)isShowingRouteButton;
- (bool)isVisible;
- (bool)isWirelessRouteActive;
- (void)layoutSubviews;
- (id)maximumVolumeSliderImageForState:(unsigned long long)arg1;
- (id)minimumVolumeSliderImageForState:(unsigned long long)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)routeButtonImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routeButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)routeButtonShowsTouchWhenHighlighted;
- (void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidesRouteLabelWhenNoRouteChoice:(bool)arg1;
- (void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRouteButtonShowsTouchWhenHighlighted:(bool)arg1;
- (void)setShowsRouteButton:(bool)arg1;
- (void)setShowsVolumeSlider:(bool)arg1;
- (void)setVolumeSliderShrinksFromBothEnds:(bool)arg1;
- (void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setVolumeWarningSliderImage:(id)arg1;
- (bool)showsRouteButton;
- (bool)showsVolumeSlider;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)volumeSlider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })volumeSliderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)volumeSliderShrinksFromBothEnds;
- (id)volumeThumbImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })volumeThumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 volumeSliderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)volumeWarningSliderImage;

@end
