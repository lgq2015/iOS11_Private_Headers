/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {
    UNSApplicationLauncher * _applicationLauncher;
    UNSApplicationService * _applicationService;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    UNSAttachmentsService * _attachmentsService;
    UNSNotificationCategoryRepository * _categoryRepository;
    UNSDefaultDataProviderFactory * _dataProviderFactory;
    UNSLocationMonitor * _locationMonitor;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSNotificationSettingsService * _notificationSettingsService;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    UNSRemoteNotificationServer * _remoteNotificationService;
    FBSSystemService * _systemService;
    UNSUserNotificationServerConnectionListener * _userNotificationServerConnectionListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserverForApplicationStateMonitor;
- (void)_addObserverForApplicationStateRestore;
- (void)_addObserverForApplicationWorkspaceChanges;
- (void)_addObserverForBackgroundRefreshApplicationChanges;
- (void)_addObserverForDataProviderFactoryChanges;
- (void)_addObserverForLocaleChanges;
- (void)_addObserverForRemoteNotificationServiceChanges;
- (void)_addObserverForSignificantTimeChanges;
- (void)_applicationStateDidRestore;
- (void)_applicationsDidInstall:(id)arg1;
- (void)_backgroundRefreshApplicationsDidChange;
- (void)_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_ensureAttachmentsIntegrity;
- (void)_localeDidChange;
- (void)_migrateNotificationCategories;
- (void)_migrateNotificationRepository;
- (void)_migratePendingNotificationRequests;
- (void)_registerLoggers;
- (void)_timeDidChangeSignificantly;
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
