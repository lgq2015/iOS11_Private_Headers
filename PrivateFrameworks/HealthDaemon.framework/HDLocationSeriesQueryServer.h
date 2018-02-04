/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesQueryServer : HDQueryServer {
    NSObject<OS_dispatch_queue> * _batchQueue;
    unsigned long long  _batchThreshold;
    HKWorkoutRoute * _locationSeries;
}

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;
- (void)unitTest_setBatchThreshold:(unsigned long long)arg1;

@end
