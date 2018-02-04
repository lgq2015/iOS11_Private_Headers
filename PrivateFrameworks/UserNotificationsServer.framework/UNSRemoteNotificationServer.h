/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _apsQueue;
    UNSAttachmentsService * _attachmentsService;
    NSSet * _backgroundAppRefreshBlackList;
    NSMutableSet * _bundleIdentifiersNeedingToken;
    NSMutableDictionary * _bundleIdentifiersToAppDescriptions;
    NSMutableDictionary * _bundleIdentifiersToClients;
    <_DASActivityScheduler> * _duetActivityScheduler;
    NSMutableDictionary * _environmentsToConnections;
    NSObject<OS_dispatch_queue> * _extensionQueue;
    NSMutableSet * _foregroundBundleIdentifiers;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSettingsService * _notificationSettingsService;
    <UNSRemoteNotificationServerObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _runningBundleIdentifiers;
    NSMutableSet * _userNotificationEnabledBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UNSRemoteNotificationServerObserver> *observer;
@property (readonly) Class superclass;

+ (id)_environmentFromAuditToken:(struct { unsigned int x1[8]; }*)arg1;
+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
+ (id)environmentFromAuditToken:(struct { unsigned int x1[8]; }*)arg1;

- (void).cxx_destruct;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 queue:(id)arg4 extensionQueue:(id)arg5 apsQueue:(id)arg6 duetActivityScheduler:(id)arg7;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_queue_addApplicationDescriptions:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (id)_queue_appDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_applicationDidBecomeBackground:(id)arg1;
- (void)_queue_applicationDidBecomeForeground:(id)arg1;
- (void)_queue_applicationDidLaunch:(id)arg1;
- (void)_queue_applicationDidTerminate:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (void)_queue_calculateTopics;
- (bool)_queue_canDeliverMessageToBundle:(id)arg1;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (bool)_queue_isApplicationForeground:(id)arg1;
- (bool)_queue_isApplicationRunning:(id)arg1;
- (bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (bool)_queue_isContentAvailableRemoteNotificationSupportedForBundleIdentifier:(id)arg1;
- (bool)_queue_isPushedEnabledForApplication:(id)arg1;
- (bool)_queue_isUserNotificationEnabled:(id)arg1;
- (bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (void)_queue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4;
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(bool)arg3;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)_queue_removeAppDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_requestTokenForClient:(id)arg1 withBundleIdentifier:(id)arg2;
- (void)_queue_setBackgroundAppRefreshAllowed:(bool)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(bool)arg2;
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)backgroundRefreshApplicationsDidChange;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (id)observer;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setObserver:(id)arg1;

@end
