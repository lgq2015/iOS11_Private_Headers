/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTransportControls : UIView {
    bool  _allowsWirelessPlayback;
    MPButton * _alternatesButton;
    MPButton * _bookmarkButton;
    MPButton * _chaptersButton;
    unsigned long long  _desiredParts;
    unsigned long long  _disabledParts;
    MPButton * _emailButton;
    MPButton * _fastForward15SecondsButton;
    NSMutableIndexSet * _heldParts;
    MPAVItem * _item;
    MPButton * _likeOrBanButton;
    MPButton * _nextButton;
    MPButton * _playButton;
    MPAVController * _player;
    unsigned int  _playing;
    MPButton * _previousButton;
    bool  _registeredForPlayerNotifications;
    MPButton * _rewind15SecondsButton;
    MPButton * _rewind30SecondsButton;
    MPButton * _scaleButton;
    id  _target;
    MPButton * _toggleFullscreenButton;
    unsigned long long  _visibleParts;
    id  _volumeSlider;
}

@property (nonatomic) bool allowsWirelessPlayback;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, readonly) NSString *pauseButtonImage;
@property (nonatomic, readonly) NSString *playButtonImage;
@property (nonatomic, readonly) NSString *playPauseButtonImage;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic) bool registeredForPlayerNotifications;
@property (nonatomic) id target;
@property (nonatomic) unsigned long long visibleParts;

+ (Class)buttonClass;
+ (bool)buttonImagesUseBackgroundImage;
+ (long long)buttonType;
+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)_applyDesiredPartsWithAnimation:(bool)arg1;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1;
- (void)_availableRoutesChangedNotification:(id)arg1;
- (bool)_handleHoldForPart:(unsigned long long)arg1;
- (bool)_handleReleaseForPart:(unsigned long long)arg1;
- (bool)_handleTapForPart:(unsigned long long)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_reloadViewWithAnimation:(bool)arg1;
- (void)_timeMarkersAvailableNotification:(id)arg1;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3;
- (void)_updateEnabledStates:(bool)arg1;
- (void)_updatePlayButtonImage;
- (void)_updateTintColorForPart:(unsigned long long)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (bool)allowsWirelessPlayback;
- (bool)allowsWirelessPlaybackForCurrentItem;
- (bool)alwaysHidesSystemVolumeHUD;
- (void)buttonDown:(id)arg1;
- (id)buttonForPart:(unsigned long long)arg1;
- (void)buttonHeld:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)buttonUp:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredParts;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)disabledButtonImageForPart:(unsigned long long)arg1;
- (unsigned long long)disabledParts;
- (id)highlightedButtonImageForPart:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newVolumeSlider;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (id)playPauseButtonImage;
- (id)player;
- (void)registerForPlayerNotifications;
- (bool)registeredForPlayerNotifications;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRegisteredForPlayerNotifications:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)showsVolumeSliderWhenNoVolumeControlAvailable;
- (id)target;
- (void)tintColorDidChange;
- (id)tintColorForPart:(unsigned long long)arg1;
- (void)unregisterForPlayerNotifications;
- (bool)usesTintColorForControls;
- (unsigned long long)visibleParts;

@end
