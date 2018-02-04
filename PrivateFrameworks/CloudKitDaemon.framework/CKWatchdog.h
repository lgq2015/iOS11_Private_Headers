/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKWatchdog : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _interval;
    NSString * _mode;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSRunLoop * _runLoop;
    bool  _running;
    bool  _scheduled;
    id /* block */  _timeoutCallback;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double interval;
@property (nonatomic, retain) NSString *mode;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSRunLoop *runLoop;
@property (nonatomic) bool running;
@property (nonatomic) bool scheduled;
@property (nonatomic, copy) id /* block */ timeoutCallback;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)_cancelTimeout;
- (double)_intervalForPlatform;
- (void)_invokeCallback;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (double)_timeoutIntervalForPlatform;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (double)interval;
- (id)mode;
- (id)operationQueue;
- (id)queue;
- (void)resume;
- (id)runLoop;
- (bool)running;
- (void)scheduleInDispatchQueue:(id)arg1;
- (void)scheduleInOperationQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (bool)scheduled;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setMode:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setScheduled:(bool)arg1;
- (void)setTimeoutCallback:(id /* block */)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)suspend;
- (id /* block */)timeoutCallback;
- (double)timeoutInterval;
- (id)timer;

@end
