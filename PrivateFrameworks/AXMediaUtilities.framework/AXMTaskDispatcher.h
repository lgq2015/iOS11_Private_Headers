/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTaskDispatcher : NSObject {
    <AXMTaskDispatcherDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _processQueueSource;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_taskIsBeingProcessed;
    NSMutableArray * _queue_taskList;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic) <AXMTaskDispatcherDelegate> *delegate;
@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (long long)_queue_count;
- (id)_queue_dequeueTask;
- (void)_queue_processNextTask;
- (void)_queue_scheduleTask:(id)arg1;
- (void)_queue_unscheduleAllTasks;
- (long long)count;
- (id)delegate;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (bool)isEmpty;
- (void)scheduleTask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unscheduleAllTasks;

@end
