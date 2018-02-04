/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISoundsPrefController : PSListController <PSListControllerTestableSpecifiers> {
    bool  _hasTelephony;
    double  _lastTime;
    float  _rateLimitedVolume;
    bool  _sliderActive;
    PSSpecifier * _voiceMailSpecifier;
    long long  _voiceMailSpecifierIndex;
    float  _volume;
    bool  _volumeHUDsuppressed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)booleanCapabilitiesToTest;

- (void).cxx_destruct;
- (bool)_canChangeRingtoneWithButtons;
- (int)_deviceType;
- (id)canChangeRingtoneWithButtons:(id)arg1;
- (void)dealloc;
- (id)detailTextForToneWithSpecifier:(id)arg1;
- (void)didBackground;
- (void)didLock;
- (void)endInterruption;
- (id)init;
- (void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2;
- (void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2;
- (void)setSoundEffects:(id)arg1 specifier:(id)arg2;
- (void)setSystemHapticsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setVolume:(id)arg1 specifier:(id)arg2;
- (void)setVolumeAfterRateLimiting;
- (void)setVolumeHUDsuppression:(bool)arg1;
- (id)shouldPlayCalendarSound:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)soundEffects:(id)arg1;
- (id)specifiers;
- (void)startRingtonePreview;
- (id)systemHapticsEnabled:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateVoiceMailVisibility;
- (void)updateVolume;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)volume:(id)arg1;
- (void)volumeChangedExternally:(id)arg1;
- (void)willBecomeActive;
- (void)willForeground;
- (void)willHideSlider;
- (void)willResignActive;
- (void)willShowSlider;

@end
