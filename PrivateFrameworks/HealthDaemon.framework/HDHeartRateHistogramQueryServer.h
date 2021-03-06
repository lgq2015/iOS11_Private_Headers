/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartRateHistogramQueryServer : HDQueryServer {
    _HKHeartRateHistogramQueryServerConfiguration * _heartRateQueryServerConfiguration;
}

@property (nonatomic, readonly) _HKHeartRateHistogramQueryServerConfiguration *heartRateQueryServerConfiguration;

- (void).cxx_destruct;
- (id)_intervalsForContextStyle:(long long)arg1 errorOut:(id*)arg2;
- (id)_queue_fetchHistogramDataWithError:(id*)arg1;
- (void)_queue_start;
- (id)_sqlitePredicateForObjectType:(id)arg1 errorOut:(id*)arg2;
- (bool)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 errorOut:(id*)arg3 handler:(id /* block */)arg4;
- (bool)_walkSampleValuesWithPredicate:(id)arg1 errorOut:(id*)arg2 handler:(id /* block */)arg3;
- (id)heartRateQueryServerConfiguration;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end
