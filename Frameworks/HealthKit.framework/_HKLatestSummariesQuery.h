/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLatestSummariesQuery : HKQuery <HKLatestSummariesQueryClientInterface> {
    NSCalendar * _calendar;
    id /* block */  _resultsHandler;
    NSDate * _summaryDate;
    NSSet * _typeFilters;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ resultsHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverResetSummaries:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverSummaries:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverUpdatedSummaries:(id)arg1 forQuery:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (id /* block */)resultsHandler;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
