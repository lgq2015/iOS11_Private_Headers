/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface> {
    bool  _includeDocumentData;
    unsigned long long  _limit;
    id /* block */  _resultsHandler;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool includeDocumentData;
@property (readonly) unsigned long long limit;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;

- (void).cxx_destruct;
- (void)client_deliverDocument:(id)arg1 query:(id)arg2;
- (bool)includeDocumentData;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(bool)arg5 resultsHandler:(id /* block */)arg6;
- (unsigned long long)limit;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id /* block */)resultsHandler;
- (void)setResultsHandler:(id /* block */)arg1;
- (id)sortDescriptors;

@end
