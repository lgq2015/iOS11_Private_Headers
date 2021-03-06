/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPowerMonitor : NSObject {
    NSHashTable * _lock_observers;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _notifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _rootDomainConnect;
    BSZeroingWeakReference * _weakSelf;
}

+ (id)sharedInstance;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
