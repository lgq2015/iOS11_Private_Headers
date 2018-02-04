/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModuleSettingsManager : NSObject <CCSModuleSettingsProviderObserver> {
    NSHashTable * _observers;
    NSDictionary * _settingsByIdentifier;
    CCSModuleSettingsProvider * _settingsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadSettings;
- (void)_runBlockOnListeners:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)moduleSettingsForModuleIdentifier:(id)arg1 prototypeSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg2;
- (id)orderedEnabledModuleIdentifiers;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sortModuleIdentifiers:(id)arg1 forInterfaceOrientation:(long long)arg2;

@end
