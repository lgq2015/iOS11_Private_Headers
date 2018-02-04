/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeSlider : UISlider <MPAVRoutingControllerDelegate, MPVolumeControllerDelegate> {
    NSTimer * _commitTimer;
    bool  _configuredLayoutGuide;
    bool  _forcingOffscreenVisibility;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
    bool  _isOffScreen;
    UILabel * _routeNameLabel;
    MPAVRoutingController * _routingController;
    long long  _style;
    UIImageView * _thumbImageView;
    bool  _thumbIsDefault;
    UILayoutGuide * _trackLayoutGuide;
    bool  _userWasBlocked;
    MPVolumeController * _volumeController;
    bool  _volumeWarningBlinking;
    UIImage * _volumeWarningTrackImage;
    UIView * _volumeWarningView;
}

@property (setter=_setIsOffScreen:, nonatomic) bool _isOffScreen;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *thumbView;
@property (nonatomic, readonly) UILayoutGuide *trackLayoutGuide;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (nonatomic, retain) UIImage *volumeWarningTrackImage;
@property (nonatomic, readonly) UIView *volumeWarningView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_beginBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_commitVolumeChange;
- (void)_endBlinkingWarningView;
- (void)_endTracking;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (bool)_isOffScreen;
- (void)_layoutForAvailableRoutes;
- (void)_layoutVolumeWarningView;
- (id)_maxTrackImageForStyle:(long long)arg1;
- (id)_minTrackImageForStyle:(long long)arg1;
- (id)_newVolumeWarningView;
- (void)_resetThumbImageForState:(unsigned long long)arg1;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_setIsOffScreen:(bool)arg1;
- (id)_thumbImageForStyle:(long long)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (float)maximumValue;
- (float)minimumValue;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)routingController;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)setVolumeWarningTrackImage:(id)arg1;
- (long long)style;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbView;
- (id)trackLayoutGuide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)volumeAudioCategory;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeWarningTrackImage;
- (id)volumeWarningView;

@end
