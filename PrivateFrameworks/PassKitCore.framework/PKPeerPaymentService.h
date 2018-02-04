/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentService : NSObject {
    PKPeerPaymentAccount * _account;
    long long  _accountChangedNotificationSuspensionCount;
    NSObject<OS_dispatch_queue> * _accountQueue;
    PKXPCService * _remoteService;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, retain) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountChanged:(id)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)account;
- (void)accountWithCompletion:(id /* block */)arg1;
- (void)balanceForPass:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAccountWithCompletion:(id /* block */)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)noteAccountDeleted;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 orientation:(id)arg4 completion:(id /* block */)arg5;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)registrationStatusWithCompletion:(id /* block */)arg1;
- (void)resumeAccountChangedNotifications;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1;
- (id)sharedPeerPaymentWebServiceContext;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (void)suspendAccountChangedNotifications;
- (void)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (void)updateMemo:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* block */)arg2;

@end
