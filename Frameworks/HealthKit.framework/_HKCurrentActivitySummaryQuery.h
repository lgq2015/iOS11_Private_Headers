/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCurrentActivitySummaryQuery : HKQuery <HKCurrentActivitySummaryQueryClientInterface> {
    NSDictionary * _collectionIntervals;
    id /* block */  _updateHandler;
}

@property (getter=_collectionIntervals, setter=_setCollectionIntervals:, nonatomic, copy) NSDictionary *collectionIntervals;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)_collectionIntervals;
- (void)_setCollectionIntervals:(id)arg1;
- (void)client_deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
