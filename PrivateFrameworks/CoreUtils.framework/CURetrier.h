/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CURetrier : NSObject {
    id /* block */  _action;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _interval;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    double  _leeway;
    NSObject<OS_dispatch_source> * _retryTimer;
    double  _startTime;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double interval;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) double leeway;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)dispatchQueue;
- (void)failed;
- (void)failedDirect;
- (id)init;
- (double)interval;
- (void)invalidate;
- (void)invalidateDirect;
- (id /* block */)invalidationHandler;
- (double)leeway;
- (void)setAction:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLeeway:(double)arg1;
- (void)start;
- (void)startDirect;
- (void)succeeded;
- (void)succeededDirect;

@end
