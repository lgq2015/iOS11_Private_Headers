/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineDataProducer : NSObject {
    HKQuantity * _averageHeartRate;
    bool  _heartRateEnabled;
    _HDFTMProducerMetricTracker * _heartRateTracker;
    HKQuantity * _latestHeartRate;
    HDEurotasData * _previousEurotasData;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sessionIdentifier;
    HKQuantity * _totalActiveEnergy;
    HKQuantity * _totalBasalEnergy;
}

@property (nonatomic, readonly) bool connected;
@property (nonatomic, readonly) HDHealthServiceManager *healthServiceManager;
@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (id)_queue_generateEurotasData;
- (void)_queue_metricsAddedToWorkout:(id)arg1;
- (void)_queue_quantitiesAddedToWorkout:(id)arg1;
- (void)_queue_sendEurotasData:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_updateFitnessMachine;
- (void)_queue_updateFitnessMachineWithCompletion:(id /* block */)arg1 forcing:(bool)arg2;
- (void)_readHeartRateEnabledPreference;
- (void)connectToHealthServiceSession:(unsigned long long)arg1;
- (bool)connected;
- (void)dealloc;
- (void)deliverFinalValues:(id /* block */)arg1;
- (void)disconnectHealthServiceSession;
- (id)healthServiceManager;
- (id)initWithProfile:(id)arg1;
- (void)metricsAddedToWorkout:(id)arg1;
- (void)pauseCurrentSession;
- (id)profile;
- (void)quantitiesAddedToWorkout:(id)arg1;
- (void)quantitiesResetForWorkout:(id)arg1;
- (void)resumeCurrentSession;
- (void)setProfile:(id)arg1;

@end
