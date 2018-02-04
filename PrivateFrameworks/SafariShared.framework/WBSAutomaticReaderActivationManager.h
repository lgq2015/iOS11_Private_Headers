/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceBinaryToggleItemManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreferenceValue * _automaticallyEnableReaderOnLoad;
    WBSPerSitePreferenceValue * _doNotAutomaticallyEnableReaderOnLoad;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
    WBSPerSitePreference * _readerPreference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (nonatomic, readonly) WBSPerSitePreference *readerPreference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultPreferenceValue;
- (id)_perSitePreferenceValue:(bool)arg1;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(id /* block */)arg1;
- (void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)perSitePreferencesStore;
- (id)preferences;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)readerPreference;
- (void)setAutomaticReaderEnabled:(bool)arg1 forDomain:(id)arg2;
- (void)setAutomaticReaderEnabledByDefault:(bool)arg1 removingExistingPreferencesForSites:(bool)arg2;
- (void)submitOptInOutStateForAnalytics;
- (id)valuesForPreference:(id)arg1;

@end
