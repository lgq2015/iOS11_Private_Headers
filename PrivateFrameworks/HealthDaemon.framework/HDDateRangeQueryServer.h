/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    bool  _resultsDirty;
    NSMutableSet * _sampleTypesToReFetch;
    NSMutableDictionary * _timePeriodsBySampleType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deliverErrorToClient:(id)arg1;
- (void)_queue_protectedDataBecameAvailable;
- (void)_queue_samplesAdded:(id)arg1;
- (void)_queue_samplesOfTypesWereRemoved:(id)arg1;
- (void)_queue_sendUpdatedResultsToClient;
- (void)_queue_start;
- (id)_queue_timePeriodForType:(id)arg1;
- (void)_queue_updateTimePeriodsForSampleTypes:(id)arg1;
- (id)_sampleTypeFromNumber:(id)arg1;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveAllSampleTypes;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)dateRangeClientProxy;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
