/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDispatchTimer : NSObject <AXAccessQueueTimer> {
    bool  _active;
    bool  _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    id /* block */  _cancelBlock;
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _dispatchTimer;
    NSString * _label;
    bool  _pending;
    id /* block */  _processBlock;
    bool  _useWallTime;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic, copy) id /* block */ cancelBlock;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *dispatchTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *label;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic, copy) id /* block */ processBlock;
@property (readonly) Class superclass;
@property (nonatomic) bool useWallTime;

- (void).cxx_destruct;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(id /* block */)arg2;
- (void)afterDelay:(double)arg1 processBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (id /* block */)cancelBlock;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)dispatchTimer;
- (id)init;
- (id)initWithTargetSerialQueue:(id)arg1;
- (bool)isActive;
- (bool)isCancelled;
- (bool)isPending;
- (id)label;
- (id /* block */)processBlock;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchTimer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setProcessBlock:(id /* block */)arg1;
- (void)setUseWallTime:(bool)arg1;
- (bool)useWallTime;

@end
