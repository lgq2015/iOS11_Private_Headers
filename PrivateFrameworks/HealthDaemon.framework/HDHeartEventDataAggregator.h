/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator

- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (id)objectType;
- (bool)queue_didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (Class)sensorDatumClass;

@end
