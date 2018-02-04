/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor> {
    double  _coalescingInterval;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    int  _keychainChangedNotificationToken;
    NSDate * _lastNotificationTime;
    NSMutableDictionary * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelCoalescingTimer;
- (void)_notifyKeychainUpdated;
- (void)_notifyObservers;
- (id)addObserverWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoalescingInterval:(double)arg1;
- (void)notifyModernKeychainUpdated;
- (void)removeObserverForToken:(id)arg1;
- (void)triggerExternalNotification;

@end
