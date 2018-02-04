/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineStateTimer : NSObject {
    unsigned long long  _duration;
    id /* block */  _handler;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

+ (id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)begin;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)duration;
- (id /* block */)handler;
- (id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (bool)isValid;
- (id)name;
- (id)queue;
- (id)timer;

@end
