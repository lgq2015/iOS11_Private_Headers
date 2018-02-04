/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDBTLEHeartRateDataCollector * _blteHeartRateDataCollector;
    NSMutableArray * _builtinCollectors;
    NSMutableDictionary * _dataAggregatorsByType;
    NSMutableDictionary * _dataCollectorsByType;
    HDDemoManager * _demoManager;
    NSDate * _lastLaunchUpdate;
    NSMutableDictionary * _observersByType;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HDBTLEHeartRateDataCollector *blteHeartRateDataCollector;
@property (nonatomic, retain) NSMutableDictionary *dataCollectorsByType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HDDemoManager *demoManager;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *observersByType;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_aggregatorClassForObjectType:(id)arg1;
- (id)_dataCollectorsDiagnosticDescription;
- (bool)_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(bool)arg3 error:(id*)arg4;
- (void)_demoObjectsReceived:(id)arg1 completion:(id /* block */)arg2;
- (id)_observersDescription;
- (void)_queue_addDataCollector:(id)arg1;
- (void)_queue_adjustDataCollectionForType:(id)arg1 block:(id /* block */)arg2;
- (id)_queue_aggregatorForType:(id)arg1;
- (void)_queue_alertCollectorsOfTypesWithObservers;
- (struct { double x1; bool x2; bool x3; bool x4; })_queue_collectionStateForType:(id)arg1;
- (void)_queue_createBuiltinCollectors;
- (double)_queue_defaultCollectionIntervalForType:(id)arg1;
- (id)_queue_demoManagerCreatingIfNecessary;
- (id)_queue_observerMapForType:(id)arg1;
- (void)_queue_setupUnprotectedDataDependantState;
- (void)_updateDataCollectorsWithPrivacySettings;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (void)addDataCollector:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (id)blteHeartRateDataCollector;
- (id)btleHeartRateDataCollector;
- (void)daemonReady:(id)arg1;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2;
- (id)dataCollectorsByType;
- (void)dealloc;
- (double)defaultCollectionIntervalForType:(id)arg1;
- (id)demoManager;
- (id)diagnosticDescription;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)immediateUpdateForType:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1;
- (id)observersByType;
- (void)periodicUpdate;
- (id)pluginDataCollectors;
- (id)profile;
- (id)queue;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (bool)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id*)arg3;
- (void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)setBlteHeartRateDataCollector:(id)arg1;
- (void)setDataCollectorsByType:(id)arg1;
- (void)setDemoManager:(id)arg1;
- (void)setObserversByType:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)stopFakingData;
- (void)updateCollectionInterval:(double)arg1 type:(id)arg2 observer:(id)arg3;

@end
