/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {
    NSString * _coalescingNotificationName;
    CNCoalescingTimer * _coalescingTimer;
    double  _externalNotificationCoalescingDelay;
    NSMutableDictionary * _notificationForwardingMapping;
    NSMutableDictionary * _notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> * _notifierQueue;
    NSMapTable * _notifyingBlocks;
    NSMapTable * _removalBlocks;
    <CNSchedulerProvider> * _schedulerProvider;
    NSCountedSet * _supressedNotificationNames;
    bool  forwardsSelfGeneratedDistributedSaveNotifications;
}

@property (nonatomic, retain) NSString *coalescingNotificationName;
@property (nonatomic, retain) CNCoalescingTimer *coalescingTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double externalNotificationCoalescingDelay;
@property (nonatomic) bool forwardsSelfGeneratedDistributedSaveNotifications;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *notificationForwardingMapping;
@property (nonatomic, retain) NSMutableDictionary *notificationsToBeSentOnceAllowed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifierQueue;
@property (nonatomic, retain) NSMapTable *notifyingBlocks;
@property (nonatomic, retain) NSMapTable *removalBlocks;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSCountedSet *supressedNotificationNames;

- (void).cxx_destruct;
- (void)addListenerForNotificationName:(id)arg1 registration:(id /* block */)arg2 removal:(id /* block */)arg3;
- (void)addNotificationPoster:(id /* block */)arg1 forNotificationName:(id)arg2;
- (void)coalesceNotificationName:(id)arg1;
- (id)coalescingNotificationName;
- (id)coalescingTimer;
- (double)externalNotificationCoalescingDelay;
- (void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2;
- (bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)notificationForwardingMapping;
- (id)notificationsToBeSentOnceAllowed;
- (id)notifierQueue;
- (id)notifyingBlocks;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 isFromExternalProcess:(bool)arg4;
- (id /* block */)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 shouldForwardExternally:(bool)arg5 calledFromNotifierQueue:(bool)arg6 isFromExternalProcess:(bool)arg7;
- (void)receiveExternalNotificationName:(id)arg1;
- (id /* block */)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 calledFromNotifierQueue:(bool)arg5 isFromExternalProcess:(bool)arg6;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(bool)arg5;
- (id)removalBlocks;
- (void)removeAllRegisteredNotificationSources;
- (id)schedulerProvider;
- (void)setCoalescingNotificationName:(id)arg1;
- (void)setCoalescingTimer:(id)arg1;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(bool)arg1;
- (void)setNotificationsToBeSentOnceAllowed:(id)arg1;
- (void)setNotifierQueue:(id)arg1;
- (void)setNotifyingBlocks:(id)arg1;
- (void)setRemovalBlocks:(id)arg1;
- (void)setSupressedNotificationNames:(id)arg1;
- (void)stopSupressionOfNotificationName:(id)arg1;
- (void)supressNotificationName:(id)arg1;
- (id)supressedNotificationNames;
- (void)waitForCurrentTasksToFinish;

@end
