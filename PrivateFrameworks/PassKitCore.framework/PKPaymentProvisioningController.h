/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate> {
    NSMutableArray * _associatedCredentials;
    NSSet * _automaticExpressModes;
    PKPaymentProvisioningControllerCredentialQueue * _credentialProvisioningQueue;
    PKPaymentCredential * _currentCredential;
    NSLock * _delegateLock;
    NSHashTable * _delegates;
    NSTimer * _descriptionTimer;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _localizedProgressDescription;
    NSArray * _moreInfoItems;
    PKPaymentSetupProductModel * _paymentSetupProductModel;
    NSString * _productIdentifier;
    PKPaymentRequest * _provisionAndReturnPaymentRequest;
    PKPaymentPass * _provisionedPass;
    NSString * _provisioningNonce;
    PKPaymentProvisioningResponse * _provisioningResponse;
    bool  _provisioningUserInterfaceIsVisible;
    bool  _proxyTargetDeviceWebServiceInUse;
    NSString * _referrerIdentifier;
    PKPaymentRequirementsResponse * _requirementsResponse;
    long long  _state;
    NSMutableSet * _tasks;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly, copy) NSArray *associatedCredentials;
@property (nonatomic, readonly) NSSet *automaticExpressModes;
@property (nonatomic, readonly) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedProgressDescription;
@property (nonatomic, readonly) NSArray *moreInfoItems;
@property (nonatomic, readonly) PKPaymentSetupProductModel *paymentSetupProductModel;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, retain) PKPaymentRequest *provisionAndReturnPaymentRequest;
@property (nonatomic, readonly) PKPaymentPass *provisionedPass;
@property (nonatomic, readonly) PKPaymentProvisioningResponse *provisioningResponse;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, readonly) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressDefaultCardholderNameField;
@property (nonatomic, readonly) PKPaymentWebService *webService;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (void)_addAssociatedCredential:(id)arg1;
- (void)_associateCredential:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_credentialIsValidForPaymentRequest:(id)arg1;
- (long long)_defaultResetState;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_downloadPassForPaymentCredential:(id)arg1;
- (void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2;
- (id)_filterPaymentSetupProducts:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1;
- (void)_passAlreadyProvisioned;
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1;
- (void)_provisioningNonceWithCompletion:(id /* block */)arg1;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerWhileRetrievingRemoteCredentials:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_setState:(long long)arg1 notify:(bool)arg2;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)_validatePreconditionsWhileRetrievingRemoteCredentials:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)acceptTerms;
- (void)addDelegate:(id)arg1;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)associatedCredentials;
- (id)associatedCredentialsForDefaultBehaviour;
- (id)automaticExpressModes;
- (id)credentialProvisioningQueue;
- (void)dealloc;
- (id)displayableErrorForError:(id)arg1;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)eligibilityResponse;
- (bool)hasCreditPaymentPass;
- (bool)hasDebitPaymentPass;
- (bool)hasPaymentPass;
- (id)initWithWebService:(id)arg1;
- (id)localizedProgressDescription;
- (id)moreInfoItems;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (id)passesWithPaymentMethodType:(unsigned long long)arg1;
- (id)paymentSetupProductModel;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
- (id)productIdentifier;
- (id)provisionAndReturnPaymentRequest;
- (id)provisionedPass;
- (id)provisioningResponse;
- (bool)provisioningUserInterfaceIsVisible;
- (id)referrerIdentifier;
- (void)registerDevice:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeProvisionedPass;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRemoteCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requirementsResponse;
- (void)reset;
- (void)resetForNewProvisioning;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)resolveRequirementsUsingProduct:(id)arg1;
- (void)retrieveRemoteCredentials:(id /* block */)arg1;
- (void)setProvisionAndReturnPaymentRequest:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (bool)suppressDefaultCardholderNameField;
- (void)updatePaymentSetupProductModelWithCompletionHandler:(id /* block */)arg1;
- (void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)validatePreconditions:(id /* block */)arg1;
- (void)validatePreconditionsAndRegister:(id /* block */)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(id /* block */)arg1;
- (id)webService;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)alertForDisplayableError:(id)arg1;
- (id)alertForDisplayableError:(id)arg1 earlyExitHandler:(id /* block */)arg2;

@end
