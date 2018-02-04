/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWSchedulerSemaphore : NSObject {
    NSError * _error;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _sema;
    bool  _signaled;
}

- (void).cxx_destruct;
- (id)init;
- (void)interruptWithError:(id)arg1;
- (void)signalWithError:(id)arg1;
- (id)wait;

@end
