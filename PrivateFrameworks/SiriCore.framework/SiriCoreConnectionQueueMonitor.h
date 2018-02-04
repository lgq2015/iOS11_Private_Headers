/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreConnectionQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _watcher;
}

- (void).cxx_destruct;
- (void)_signalWatcher;
- (void)_startWatcher;
- (void)dealloc;
- (id)init;
- (void)signalWatcher;
- (void)startWatcher;

@end
