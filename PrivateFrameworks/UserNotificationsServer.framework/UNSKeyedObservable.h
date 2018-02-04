/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSKeyedObservable : NSObject {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableDictionary * _observersByKey;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_observersForKey:(id)arg1;
- (void)_queue_addObserver:(id)arg1 forKey:(id)arg2;
- (void)_queue_removeObserver:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1 callOutQueue:(id)arg2;
- (void)notifyObserversKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;

@end