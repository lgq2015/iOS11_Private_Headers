/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineSource : NSObject {
    bool  _cancelled;
    long long  _deadline;
    id /* block */  _eventHandler;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    BRCDeadlineScheduler * _scheduler;
    bool  _signaled;
    int  _suspendCount;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id /* block */)eventHandler;
- (id)initWithScheduler:(id)arg1 name:(id)arg2;
- (id)queue;
- (void)resume;
- (void)runEventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)suspend;
- (bool)willRunEvenHandler;

@end
