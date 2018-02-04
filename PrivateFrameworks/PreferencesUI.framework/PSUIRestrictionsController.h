/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIRestrictionsController : PSListController {
    UISwitch * _delayedSwitch;
    bool  _delayedValue;
    PSSpecifier * _iBooksExplicitSpecifier;
    PSSpecifier * _iBooksSpecifier;
    bool  _isObservingFaceTimeChanges;
    NSMutableArray * _mcRestrictionFeatures;
}

@property (nonatomic, retain) NSMutableArray *mcRestrictionFeatures;

+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+ (bool)requiresPIN;

- (void).cxx_destruct;
- (void)_configureIfGreenTeaDevice;
- (void)_disableFaceTimeRestrictions;
- (void)_disableSpecifier:(id)arg1;
- (void)_handleExternalApplicationChange;
- (void)_handleFaceTimeConferenceStateChanged;
- (bool)_isInConference;
- (bool)_isPodcastsInstalled;
- (bool)_isSignedInToStore;
- (bool)_isiBooksInstalled;
- (bool)_isiTunesUInstalled;
- (id)_mcRestrictionFeaturesFromSpecifiers:(id)arg1;
- (bool)_mesaIsEnabledForStore;
- (void)_observeFaceTimeChanges:(bool)arg1;
- (void)_setSettingsRestrictedByString;
- (bool)canBeShownFromSuspendedState;
- (id)capabilityEnabled:(id)arg1;
- (id)contentRatingsForMediaType:(id)arg1;
- (id)contentRestriction:(id)arg1;
- (id)countryCodes;
- (id)currentCountryCode;
- (id)currentCountryString:(id)arg1;
- (void)dealloc;
- (id)explicitEnabled;
- (id)explicitEnabledString;
- (bool)featureRestricted:(id)arg1;
- (id)featureValue:(id)arg1;
- (id)iBooksExplicitEnabledString:(id)arg1;
- (id)init;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)localizedContentRestrictionStringForRank:(id)arg1 mediaType:(id)arg2;
- (void)localizedRestrictionSourceDescriptionChanged:(id)arg1;
- (id)localizedStringForiTunesStorePasswordDefaultTimeout;
- (id)mcRestrictionFeatures;
- (void)profileNotification:(id)arg1;
- (id)reversedBoolFeatureValue:(id)arg1;
- (void)revertRestrictionPrefsIfNeeded;
- (void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCountryCode:(id)arg1 reload:(bool)arg2;
- (void)setExplicitEnabled:(id)arg1;
- (void)setFeatureValue:(id)arg1 specifier:(id)arg2;
- (void)setMcRestrictionFeatures:(id)arg1;
- (void)setReversedBoolFeatureValue:(id)arg1 specifier:(id)arg2;
- (id)siriContentRestrictionState:(id)arg1;
- (bool)siriContentRestrictionsLockedDown;
- (id)specifiers;
- (void)updateToggleState;
- (void)updateToggleStateAndReload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webContentRestrictionState:(id)arg1;
- (void)willBecomeActive;
- (void)willResignActive;

@end
