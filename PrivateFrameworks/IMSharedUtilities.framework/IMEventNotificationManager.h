/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate> {
    long long  _busyCount;
    IMEventListenerList * _eventListeners;
    double  _eventTimeout;
    IMAutomaticEventNotificationQueue * _notificationQueue;
    NSMutableArray * _registeredNotificationQueues;
}

@property (getter=isBusy, readonly) bool busy;
@property long long busyCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IMEventListenerList *eventListeners;
@property double eventTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMAutomaticEventNotificationQueue *notificationQueue;
@property (nonatomic, readonly) NSMutableArray *registeredNotificationQueues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(id /* block */)arg2;
- (void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* block */)arg3;
- (long long)busyCount;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForEventHandler:(id)arg1;
- (id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (void)eventListenerDidFinish:(id)arg1;
- (id)eventListeners;
- (void)eventNotificationQueue:(id)arg1 didChangeBusyState:(bool)arg2;
- (double)eventTimeout;
- (id)init;
- (bool)isBusy;
- (id)notificationQueue;
- (void)pauseEventNotifications:(bool)arg1;
- (void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(id /* block */)arg2;
- (void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* block */)arg3;
- (void)registerEventListener:(id)arg1;
- (void)registerNotificationQueue:(id)arg1;
- (id)registeredNotificationQueues;
- (void)setBusyCount:(long long)arg1;
- (void)setEventTimeout:(double)arg1;

@end
