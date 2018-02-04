/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextScheduler : NSObject {
    double  _delay;
    NSObject<OS_dispatch_queue> * _queue;
    NSLock * _scheduledLock;
    id /* block */  _updateBlock;
    id /* block */  _updateCompletionBlock;
    bool  _updateScheduled;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) bool isScheduled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) id /* block */ updateBlock;
@property (nonatomic, readonly, copy) id /* block */ updateCompletionBlock;

+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(id /* block */)arg3;
+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(id /* block */)arg3;
+ (id)schedulerWithQueue:(id)arg1 updateBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_queue_performUpdate;
- (double)delay;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(id /* block */)arg3 updateCompletionBlock:(id /* block */)arg4;
- (bool)isScheduled;
- (void)performImmediately;
- (id)queue;
- (void)schedule;
- (id /* block */)updateBlock;
- (id /* block */)updateCompletionBlock;

@end
