/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLiveDataCollector : HDDataCollector

- (void)_queue_beginStreaming;
- (void)_queue_handleSensorDatum:(id)arg1 context:(id)arg2;
- (void)beginUpdatesWithHandler:(id /* block */)arg1;
- (id)hkObjectsFromSensorDatum:(id)arg1 context:(id)arg2;

@end
