/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationWiFiSetup : NSObject {
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    double  _metricSeconds;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricSeconds;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)activate;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricSeconds;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
