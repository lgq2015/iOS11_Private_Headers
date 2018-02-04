/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartRateDataAggregator : HDDataAggregator

- (id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2;
- (void)_queue_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4;
- (void)_queue_recomputeCollectorConfiguration;
- (bool)_queue_shouldRequestActiveCollectionForConfiguration:(id)arg1;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (void)dealloc;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (void)queue_configurationDidChange;
- (void)queue_registeredCollectorsDidChange;
- (void)workoutManagerStateChanged:(id)arg1;

@end
