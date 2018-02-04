/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPeerPaymentService : PDXPCService <PDPeerPaymentServiceExportedInterface> {
    PDDatabaseManager * _databaseManager;
    PDPeerPaymentWebServiceCoordinator * _peerPaymentWebServiceCoordinator;
    PDRemoteInterfacePresenter * _remoteInterfacePresenter;
    PKEntitlementWhitelist * _whitelist;
}

@property (nonatomic, retain) PDDatabaseManager *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (nonatomic, retain) PDRemoteInterfacePresenter *remoteInterfacePresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountWithCompletion:(id /* block */)arg1;
- (void)balanceForPass:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (id)databaseManager;
- (void)deleteAccountWithCompletion:(id /* block */)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(id /* block */)arg1;
- (void)noteAccountDeletedWithCompletion:(id /* block */)arg1;
- (id)peerPaymentWebServiceCoordinator;
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 orientation:(id)arg3 completion:(id /* block */)arg4;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 orientation:(id)arg4 completion:(id /* block */)arg5;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)registrationStatusWithCompletion:(id /* block */)arg1;
- (id)remoteInterfacePresenter;
- (void)setDatabaseManager:(id)arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)setPeerPaymentWebServiceCoordinator:(id)arg1;
- (void)setRemoteInterfacePresenter:(id)arg1;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 handler:(id /* block */)arg2;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(id /* block */)arg1;
- (void)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (void)updateMemo:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* block */)arg2;

@end
