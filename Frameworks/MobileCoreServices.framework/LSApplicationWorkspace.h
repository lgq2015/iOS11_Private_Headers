/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspace : NSObject {
    NSMutableDictionary * _createdInstallProgresses;
    LSInstallProgressList * _observedInstallProgresses;
}

@property (readonly) NSMutableDictionary *createdInstallProgresses;
@property (readonly) LSInstallProgressList *observedInstallProgresses;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)_remoteObserver;
+ (id)activeManagedConfigurationRestrictionUUIDs;
+ (id)callbackQueue;
+ (id)defaultWorkspace;
+ (id)progressQueue;
+ (id)workspaceObserverProxy;

- (id)URLOverrideForURL:(id)arg1;
- (void)_LSClearSchemaCaches;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (bool)_LSPrivateDatabaseNeedsRebuild;
- (bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(bool)arg1 internal:(bool)arg2 user:(bool)arg3;
- (void)_LSPrivateSyncWithMobileInstallation;
- (void)_LSPrivateUpdateAppRemovalRestrictions;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allInstalledApplications;
- (bool)allowsAlternateIcons;
- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (bool)applicationIsInstalled:(id)arg1;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(bool)arg2;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (id)applicationsOfType:(unsigned long long)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithVPNPlugins;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)createdInstallProgresses;
- (void)dealloc;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (bool)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)enumerateApplicationsForSiriWithBlock:(id /* block */)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)establishConnection;
- (bool)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (bool)initiateProgressForApp:(id)arg1 withType:(unsigned long long)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedPlugins;
- (bool)invalidateIconCache:(id)arg1;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (bool)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (bool)ls_injectUTTypeWithDeclaration:(id)arg1 inDatabase:(void*)arg2 error:(id*)arg3;
- (void)ls_resetTestingDatabase;
- (void*)ls_testWithCleanDatabaseWithError:(id*)arg1;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)observedInstallProgresses;
- (id)observerProxy;
- (bool)openApplicationWithBundleID:(id)arg1;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)openURL:(id)arg1;
- (bool)openURL:(id)arg1 withOptions:(id)arg2;
- (bool)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)placeholderApplications;
- (void)placeholderInstalledForIdentifier:(id)arg1 filterDowngrades:(bool)arg2;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(id /* block */)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(id /* block */)arg4;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(id /* block */)arg4;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (bool)registerApplication:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (bool)registerBundleWithInfo:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3 progress:(id)arg4;
- (bool)registerPlugin:(id)arg1;
- (id)remoteObserver;
- (void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)removedSystemApplications;
- (bool)restoreSystemApplication:(id)arg1;
- (void)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2;
- (void)scanForApplicationStateChangesWithWhitelist:(id)arg1;
- (void)sendApplicationStateChangedNotificationsFor:(id)arg1;
- (id)syncObserverProxy;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)unregisterApplication:(id)arg1;
- (bool)unregisterPlugin:(id)arg1;
- (id)unrestrictedApplications;
- (bool)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failure:(unsigned long long)arg3 underlyingError:(id)arg4 source:(unsigned long long)arg5 outError:(id*)arg6;
- (bool)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 error:(id*)arg6;
- (bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_openURL:(id)arg1 inApplication:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_sf_openURL:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateInstalledApplicationsWithBlock:(id /* block */)arg1;
- (void)af_enumerateUserVisibleApplicationsWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

- (id)blacklistedApps;

@end
