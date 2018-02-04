/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {
    HDDataCollectionManager * _dataCollectionManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queue_collectorRegistry;
    HDDataAggregatorConfiguration * _queue_configuration;
    bool  _queue_hasStartedCollectors;
}

@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKObjectType *objectType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyValueDomain;
- (void)_queue_startCollector:(id)arg1;
- (void)_queue_startCollectors;
- (void)daemonReady:(id)arg1;
- (id)dataCollectionManager;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (id)queue;
- (id)queue_allCollectors;
- (id)queue_configuration;
- (void)queue_configurationDidChange;
- (bool)queue_didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (bool)queue_persistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id*)arg6;
- (void)queue_registeredCollectorsDidChange;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)setConfiguration:(id)arg1;
- (void)unregisterDataCollector:(id)arg1;

@end
