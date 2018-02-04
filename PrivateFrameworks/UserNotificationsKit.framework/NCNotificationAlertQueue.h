/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestination, NCNotificationAlertDestinationDelegate> {
    NCNotificationRequest * _coalescingRequest;
    <NCNotificationAlertDestinationDelegate> * _delegate;
    NCNotificationDestinationsRegistry * _destinationsRegistry;
    NCNotificationCollapsingQueue * _queue;
    NCNotificationStore * _store;
}

@property (nonatomic, retain) NCNotificationRequest *coalescingRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationDestinationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NCNotificationCollapsingQueue *queue;
@property (nonatomic, retain) NCNotificationStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;
- (bool)_performDestinationOperationForRequest:(id)arg1 block:(id /* block */)arg2;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;
- (void)_postNextNotificationRequest;
- (void)_postNextNotificationRequestPassingTest:(id /* block */)arg1;
- (bool)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;
- (bool)_readyToReceiveForNotificationRequest:(id)arg1;
- (bool)canReceiveNotificationRequest:(id)arg1;
- (id)coalescingRequest;
- (id)delegate;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(bool)arg3;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (id)destinationsForRequestDestinations:(id)arg1;
- (id)destinationsRegistry;
- (id)identifier;
- (id)init;
- (id)initWithNotificationStore:(id)arg1;
- (bool)isRegisteredDestination:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)queue;
- (void)registerDestination:(id)arg1;
- (void)setCoalescingRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(bool)arg2;
- (void)setDestination:(id)arg1 ready:(bool)arg2;
- (void)setDestinationsRegistry:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)unregisterDestination:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

@end
