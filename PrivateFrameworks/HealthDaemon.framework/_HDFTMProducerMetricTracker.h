/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDFTMProducerMetricTracker : NSObject {
    bool  _metricAvailable;
    bool  _paused;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _timeoutHandler;
    _HKExpiringCompletionTimer * _timer;
}

@property (nonatomic, readonly) bool metricAvailable;

- (void).cxx_destruct;
- (void)_startTimer;
- (id)initWithTimeoutHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)metricAvailable;
- (void)metricReceived;
- (void)pause;
- (void)resume;

@end
