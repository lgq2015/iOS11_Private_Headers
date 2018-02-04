/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval * _dateInterval;
    unsigned long long  _mergeStrategy;
    unsigned long long  _statisticsOptions;
}

@property (nonatomic, readonly) unsigned long long mergeStrategy;
@property (nonatomic, readonly) unsigned long long statisticsOptions;

- (void).cxx_destruct;
- (id)_queue_fetchStatisticsWithError:(id*)arg1;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned long long)mergeStrategy;
- (id)requiredEntitlements;
- (unsigned long long)statisticsOptions;

@end
