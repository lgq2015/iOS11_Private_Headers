/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol> {
    UNSApplicationLauncher * _applicationLauncher;
    UNSAttachmentsService * _attachmentsService;
    NSMapTable * _bundleIdentifiersByConnection;
    UNSNotificationCategoryRepository * _categoryRepository;
    NSMutableDictionary * _connectionsByBundleIdentifier;
    NSXPCListener * _listener;
    UNSLocationMonitor * _locationMonitor;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSNotificationSettingsService * _notificationSettingsService;
    NSObject<OS_dispatch_queue> * _queue;
    UNSRemoteNotificationServer * _remoteNotificationService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_currentConnection;
- (void)_localNotificationsDidChange:(id)arg1;
- (void)_notificationRepsitoryDidSave:(id)arg1;
- (id)_notificationRequestsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_notificationsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue__notificationRepsitoryDidSave:(id)arg1;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_delegateConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_localNotificationsDidChange:(id)arg1;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithCategoryRepository:(id)arg1 notificationSchedulingService:(id)arg2 notificationSettingsService:(id)arg3 notificationRepository:(id)arg4 remoteNotificationService:(id)arg5 applicationLauncher:(id)arg6 attachmentsService:(id)arg7 locationMonitor:(id)arg8;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(id)arg2;

@end
