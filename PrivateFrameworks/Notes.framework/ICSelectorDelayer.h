/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSelectorDelayer : NSObject {
    double  _delay;
    bool  _forceMainThread;
    SEL  _selector;
    id  _target;
    NSTimer * _timer;
    bool  _waitToFireUntilRequestsStop;
}

@property double delay;
@property (nonatomic) bool forceMainThread;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;
@property (retain) NSTimer *timer;
@property (nonatomic) bool waitToFireUntilRequestsStop;

- (void).cxx_destruct;
- (void)cancelPreviousFireRequests;
- (double)delay;
- (void)fireImmediately;
- (bool)forceMainThread;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(bool)arg4;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(bool)arg4 forceMainThread:(bool)arg5;
- (void)internalCancelFireRequests;
- (void)internalFireImmediately;
- (bool)internalIsScheduledToFire;
- (void)internalRequestFire;
- (bool)isScheduledToFire;
- (void)requestFire;
- (SEL)selector;
- (void)setDelay:(double)arg1;
- (void)setForceMainThread:(bool)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWaitToFireUntilRequestsStop:(bool)arg1;
- (id)target;
- (id)timer;
- (bool)waitToFireUntilRequestsStop;

@end
