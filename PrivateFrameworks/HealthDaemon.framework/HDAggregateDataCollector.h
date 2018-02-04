/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAggregateDataCollector : HDDataCollector {
    bool  _didReceiveSensorDatum;
    bool  _fetchingHistoricalData;
    _HKDelayedOperation * _historicalFetchOperation;
    NSDictionary * _lastReceivedSecondaryContext;
    <HDSensorDatum> * _lastReceivedSensorDatum;
    double  _maxDatumDuration;
    bool  _needsHistoricalFetch;
}

@property double maxDatumDuration;
@property (nonatomic, readonly) bool requiresSampleAggregation;

- (void).cxx_destruct;
- (double)_queue_aggregationInterval;
- (void)_queue_beginStreaming;
- (void)_queue_beginUpdates;
- (void)_queue_executeHistoricalFetchOperation;
- (void)_queue_fetchHistoricalDataForcedUpdate:(bool)arg1 completion:(id /* block */)arg2;
- (void)_queue_fetchHistoricalDataWithCompletion:(id /* block */)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_handleUpdatingHistoricalDataForcedUpdate:(bool)arg1 completion:(id /* block */)arg2;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(id /* block */)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_maxDatumDuration;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(id /* block */)arg3;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id*)arg3;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithProfile:(id)arg1;
- (double)maxDatumDuration;
- (bool)requiresSampleAggregation;
- (void)setMaxDatumDuration:(double)arg1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataForcedUpdate:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateHistoricalDataWithCompletion:(id /* block */)arg1;
- (void)willPersistHKObjects:(id)arg1;

@end
