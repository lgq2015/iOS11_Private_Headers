/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary * _allModuleMetadataByIdentifier;
    NSSet * _availableModuleIdentifiers;
    NSArray * _directoryURLs;
    bool  _ignoreWhitelist;
    NSSet * _interestingBundleIdentifiers;
    NSObject<BSDefaultObserver> * _internalDefaultsObserver;
    NSSet * _loadableModuleIdentifiers;
    struct MGNotificationTokenStruct { } * _mobileGestaltNotificationToken;
    NSHashTable * _observers;
    NSSet * _whitelistedModuleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreWhitelist;
@property (nonatomic, readonly, copy) NSSet *loadableModuleIdentifiers;
@property (readonly) Class superclass;

+ (id)_defaultModuleDirectories;
+ (id)_defaultModuleIdentifierWhitelist;
+ (id)_deviceFamily;
+ (id)repositoryWithDefaults;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (bool)_arrayContainsInterestingApplicationProxy:(id)arg1;
- (id)_associatedBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;
- (id)_filterModuleMetadataByGestalt:(id)arg1;
- (id)_filterModuleMetadataByVisibilityPreference:(id)arg1;
- (id)_gestaltQuestionsForModuleMetadata:(id)arg1;
- (id)_initWithDirectoryURLs:(id)arg1 whitelistedModuleIdentifiers:(id)arg2;
- (id)_loadAllModuleMetadata;
- (id)_moduleIdentifiersForMetadata:(id)arg1;
- (void)_registerForInternalPreferenceChanges;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_runBlockOnObservers:(id /* block */)arg1;
- (void)_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(id /* block */)arg2;
- (void)_stopObservingGestaltQuestions;
- (void)_unregisterForInternalPreferenceChanges;
- (void)_unregisterForVisiblityPreferenceChanges;
- (void)_updateAllModuleMetadata;
- (void)_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateAvailableModuleMetadata;
- (void)_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateGestaltQuestionsForModuleMetadata:(id)arg1;
- (void)_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;
- (void)_updateLoadableModuleMetadata;
- (void)_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (bool)ignoreWhitelist;
- (id)loadableModuleIdentifiers;
- (id)moduleMetadataForModuleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setIgnoreWhitelist:(bool)arg1;

@end
