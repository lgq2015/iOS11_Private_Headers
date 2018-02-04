/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTEventMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)enumerateObservers:(id /* block */)arg1;
- (void)enumerateObserversInQueue:(id /* block */)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
