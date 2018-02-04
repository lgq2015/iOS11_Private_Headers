/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {
    bool  _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    id /* block */  _cancelBlock;
    AXThreadTimerTask * _task;
    NSThread * _thread;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPending, nonatomic, readonly) bool pending;
@property (readonly) Class superclass;
@property (nonatomic, retain) AXThreadTimerTask *task;

- (void).cxx_destruct;
- (void)_runAfterDelay:(id)arg1;
- (void)afterDelay:(double)arg1 processBlock:(id /* block */)arg2;
- (void)afterDelay:(double)arg1 processBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (id)initWithThread:(id)arg1;
- (bool)isActive;
- (bool)isCancelled;
- (bool)isPending;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
