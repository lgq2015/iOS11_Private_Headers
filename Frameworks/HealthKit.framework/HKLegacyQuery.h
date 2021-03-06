/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLegacyQuery : HKQuery {
    int  _batchCount;
    double  _collectionInterval;
    <HKQueryDelegate> * _delegate;
    NSMutableArray * _deletedObjects;
    NSPredicate * _predicate;
    bool  _receivedInitialResults;
    NSMutableArray * _sampleObjects;
}

@property (setter=_setBatchCount:, nonatomic) int batchCount;
@property (getter=_collectionInterval, setter=_setCollectionInterval:, nonatomic) double collectionInterval;
@property (getter=_hasReceivedInitialResults, nonatomic, readonly) bool receivedInitialResults;

+ (Class)_queryServerDataObjectClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_client_receivedInitialResults;
- (double)_collectionInterval;
- (void)_dispatchAsyncToResourceQueue:(id /* block */)arg1;
- (void)_dispatchSyncToResourceQueue:(id /* block */)arg1;
- (void)_dispatchToClientForUUID:(id)arg1 block:(id /* block */)arg2;
- (bool)_hasReceivedInitialResults;
- (id)_initWithDataType:(id)arg1 predicate:(id)arg2;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 server:(id)arg2 handler:(id /* block */)arg3;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (bool)_requiresValidSampleType;
- (void)_setBatchCount:(int)arg1;
- (void)_setCollectionInterval:(double)arg1;
- (bool)_shouldStayAliveAfterInitialResults;
- (int)batchCount;
- (void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (void)deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 forQuery:(id)arg5;
- (void)deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverResultsResetWithAnchor:(id)arg1 final:(bool)arg2 forQuery:(id)arg3;
- (void)deliverSampleBatch:(id)arg1 deletedBatch:(id)arg2 final:(bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (void)deliverStatisticsBatch:(id)arg1 initialDelivery:(bool)arg2 finalBatch:(bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)resetStatisticsForQuery:(id)arg1;

@end
