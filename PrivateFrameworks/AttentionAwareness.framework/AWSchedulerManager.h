/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWSchedulerManager : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    <AWScheduler> * _scheduler;
    NSMutableSet * _semaphores;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)createSemaphore;
- (id)init;
- (void)interruptOperationsWithError:(id)arg1;
- (void)removeSemaphore:(id)arg1;
- (id)scheduler;

@end
