/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPassData:(id)arg1 completion:(id /* block */)arg2;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)downloadAllPaymentPasses;
- (void)getConfigurationDataWithCompletion:(id /* block */)arg1;
- (void)getContextWithCompletion:(id /* block */)arg1;
- (void)getProvisioningDataWithCompletion:(id /* block */)arg1;
- (void)getRegistrationDataWithAuthToken:(id)arg1 completion:(id /* block */)arg2;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(id /* block */)arg1;
- (void)handlePotentialExpressPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithWebService:(id)arg1 connection:(id)arg2;
- (void)invalidateRemoteProxyTargetDevice;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)passesOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)paymentSupportedInCurrentRegion:(id /* block */)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removePass:(id)arg1 completion:(id /* block */)arg2;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(id /* block */)arg1;
- (void)setNewAuthRandom:(id /* block */)arg1;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)supportsPeerPaymentRegistrationWithCompletion:(id /* block */)arg1;
- (void)validateAddPreconditionsWithCompletion:(id /* block */)arg1;
- (void)validateTransferPreconditionsWithCompletion:(id /* block */)arg1;

@end
