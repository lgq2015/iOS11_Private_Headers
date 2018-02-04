/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface> {
    id /* block */  _completionHandler;
    bool  _hasDeliveredInitialResults;
    <HKQueryServerInterface> * _serverProxy;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id /* block */)completionHandler;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
