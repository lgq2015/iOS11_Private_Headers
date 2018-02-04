/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationAuthorizationAlertController : NSObject {
    NSMutableSet * _bundleIdentifersForActiveAlerts;
    NSMutableDictionary * _bundleIdentifiersToResultBlocks;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_main_requestUserAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(id /* block */)arg3;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_addResultBlock:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (bool)_queue_isAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)requestAuthorizationForApplication:(id)arg1 withResult:(id /* block */)arg2;

@end
