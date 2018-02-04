/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
    SEL * _possibleHandlers;
    unsigned long long  _possibleHandlersCount;
}

- (id)_forwardDistributedNotificationNameForHandler:(SEL)arg1;
- (bool)_handleForwardDistributedNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3;
- (id)_notificationTypeDescription;
- (id)_prefixForForwardDistributedNotificationName;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3 possibleHandlers:(SEL)arg4;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3 startObserving:(bool)arg4;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;
- (void)processHandler:(SEL)arg1;

@end
