/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartbeatSequenceDataAggregator : HDPassiveDataAggregator

- (bool)_associateSubsampleFromSensorDatum:(id)arg1 sampleUUID:(id)arg2 error:(id*)arg3;
- (id)_metadataForSensorDatum:(id)arg1;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (id)objectType;
- (bool)queue_didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (Class)sensorDatumClass;

@end
