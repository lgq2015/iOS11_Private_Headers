/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAudioOutputSettingsManager : NSObject {
    NSArray * _audioSettings;
    MNAudioOutputSetting * _currentSetting;
    MNAudioOutputSetting * _currentSettingForSystem;
    bool  _isCurrentSettingCached;
    NSHashTable * _observers;
    NSArray * _pickableRoutes;
    NSObject<OS_dispatch_queue> * _pickableRoutesQueue;
    unsigned long long  _routeSelection;
}

@property (nonatomic, readonly) NSArray *audioSettings;
@property (nonatomic, retain) MNAudioOutputSetting *currentSetting;
@property (nonatomic, readonly) MNAudioOutputSetting *currentSettingForVoicePrompt;
@property (nonatomic, readonly) unsigned long long routeSelection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_mediaServerConnectionDied;
- (bool)_pickCurrentSetting;
- (void)_pickableRoutesChanged;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)addObserver:(id)arg1;
- (id)audioSettings;
- (id)currentSetting;
- (id)currentSettingForVoicePrompt;
- (void)dealloc;
- (id)init;
- (void)reloadSettings;
- (void)removeObserver:(id)arg1;
- (unsigned long long)routeSelection;
- (void)setCurrentSetting:(id)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)updateCurrentSettingObservers;
- (void)updatePickableRoutes;
- (void)updatePickableRoutesWithHandler:(id /* block */)arg1;
- (void)updateRouteSelection;
- (void)updateRouteSelectionObservers;
- (void)updateSettingsObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;

@end
