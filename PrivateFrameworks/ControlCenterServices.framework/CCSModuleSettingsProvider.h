/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_source> * _configurationChangedSource;
    NSHashTable * _observers;
    NSArray * _orderedFixedModuleIdentifiers;
    NSArray * _orderedUserEnabledModuleIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *orderedFixedModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *orderedUserEnabledModuleIdentifiers;

+ (id)_configurationDirectoryURL;
+ (id)_configurationFileURL;
+ (id)_defaultEnabledModuleOrder;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_readOrderedIdentifiers;
+ (void)_writeOrderedIdentifiers:(id)arg1;
+ (void)initialize;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_handleConfigurationFileUpdate;
- (void)_loadSettings;
- (void)_runBlockOnListeners:(id /* block */)arg1;
- (void)_saveSettings;
- (void)_startMonitoringConfigurationUpdates;
- (void)_stopMonitoringConfigurationUpdates;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)orderedFixedModuleIdentifiers;
- (id)orderedUserEnabledModuleIdentifiers;
- (void)removeObserver:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;

@end
