/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable> {
    id /* block */  _computeNextAdmissibleDateForScheduling;
    NSObject<OS_dispatch_source> * _delay;
    BRCFairScheduler * _fairScheduler;
    bool  _isCancelled;
    bool  _isResumed;
    long long  _lastSchedule;
    long long  _leeway;
    BRCMinHeap * _minHeap;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    BRCFairSource * _source;
}

@property (nonatomic) long long coalescingLeeway;
@property (nonatomic, copy) id /* block */ computeNextAdmissibleDateForScheduling;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCFairScheduler *fairScheduler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_schedule;
- (bool)_setupTimerRequiredForDeadline:(long long)arg1 now:(long long)arg2;
- (void)addSource:(id)arg1 deadline:(long long)arg2;
- (void)cancel;
- (void)close;
- (long long)coalescingLeeway;
- (id /* block */)computeNextAdmissibleDateForScheduling;
- (void)dealloc;
- (id)fairScheduler;
- (id)initWithName:(id)arg1 fairScheduler:(id)arg2;
- (bool)isCancelled;
- (id)queue;
- (void)resume;
- (void)runDeadlineSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCoalescingLeeway:(long long)arg1;
- (void)setComputeNextAdmissibleDateForScheduling:(id /* block */)arg1;
- (void)signal;
- (void)suspend;

@end
