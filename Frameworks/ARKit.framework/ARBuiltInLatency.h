/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARBuiltInLatency : ARTechnique {
    long long  _latencyResultCount;
    long long  _latencyResultsNeeded;
    NSObject<OS_dispatch_queue> * _requestsQueue;
    double  _resultTimeoutInterval;
    NSMutableArray * _results;
    NSObject<OS_dispatch_semaphore> * _resultsAvailableSemaphore;
    long long  _resultsAvailableSemaphoreWaitResult;
    NSObject<OS_dispatch_semaphore> * _resultsSemaphore;
}

@property (nonatomic, readonly) long long latencyResultCount;

- (void).cxx_destruct;
- (id)initWithResultLatency:(long long)arg1 timeoutInterval:(double)arg2;
- (long long)latencyResultCount;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
