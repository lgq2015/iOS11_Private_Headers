/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDelayedOperation : NSObject {
    id /* block */  _block;
    long long  _clock;
    double  _delay;
    double  _lastExecution;
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _loggingName;
    long long  _mode;
    double  _nextScheduledExecution;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)_queue_executeBlockIfScheduled;
- (void)disableLogging;
- (void)enableLoggingWithName:(id)arg1 category:(id)arg2;
- (void)execute;
- (void)executeWithDelay:(double)arg1;
- (id)initWithMode:(long long)arg1 clock:(long long)arg2 queue:(id)arg3 delay:(double)arg4 block:(id /* block */)arg5;
- (id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(id /* block */)arg4;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(id /* block */)arg3;
- (void)invalidate;

@end
