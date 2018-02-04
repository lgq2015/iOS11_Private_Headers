/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

@interface ANAccountNotifier : NSObject <ANClientCallbackProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _bulletinResponseListener;
    NSString * _callbackMachService;
    NSXPCConnection * _daemonConnection;
    <ANAccountNotifierDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANAccountNotifierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDaemonConnection;
- (id)_daemonConnection;
- (void)_daemonConnectionWasInterrupted;
- (void)_daemonConnectionWasInvalidated;
- (void)_disconnectFromDaemon;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1;
- (void)_stopNotificationCallbackListener;
- (void)addNotification:(id)arg1;
- (void)addSectionSubtypeWithDescriptor:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCallbackMachService:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notificationWasActivated:(id)arg1;
- (void)notificationWasCleared:(id)arg1;
- (void)notificationWasDismissed:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)removeNotificationsWithEventIdentifier:(id)arg1;
- (void)removeSectionSubtypeWithDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
