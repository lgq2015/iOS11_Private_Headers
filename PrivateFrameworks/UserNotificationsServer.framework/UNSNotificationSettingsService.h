/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationSettingsService : NSObject {
    UNSNotificationAuthorizationAlertController * _authorizationAlertController;
    UNSDefaultDataProviderFactory * _dataProviderFactory;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_queue_isAuthorizationModificationRestrictedForApplication:(id)arg1;
- (bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDataProviderFactory:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
