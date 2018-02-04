/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate> {
    <PKPaymentWebServiceArchiver> * _archiver;
    PKPaymentWebServiceBackgroundContext * _backgroundContext;
    <PKPaymentWebServiceBackgroundDelegate> * _backgroundDelegate;
    NSObject<OS_dispatch_queue> * _backgroundDownloadQueue;
    NSURLSession * _backgroundSession;
    PKPaymentWebServiceContext * _context;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSHashTable * _delegates;
    NSMutableDictionary * _passesByLocalURL;
    PKPaymentDevice * _paymentDevice;
    bool  _sharedService;
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (retain) <PKPaymentWebServiceArchiver> *archiver;
@property (retain) PKPaymentWebServiceBackgroundContext *backgroundContext;
@property <PKPaymentWebServiceBackgroundDelegate> *backgroundDelegate;
@property (retain) PKPaymentWebServiceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool needsConfiguration;
@property (readonly) bool needsRegistration;
@property (readonly) int paymentSetupSupportedInRegion;
@property (readonly) NSURL *primaryBrokerURL;
@property (nonatomic) bool sharedService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;

+ (id)sharedService;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_addVerificationRequestRecord:(id)arg1;
- (void)_archiveBackgroundContext;
- (void)_archiveContext;
- (bool)_canRegisterForPeerPayment;
- (void)_canRegisterForPeerPaymentWithCompletion:(id /* block */)arg1;
- (void)_cleanupPassDownloadCache;
- (void)_deviceConfigurationDataWithCompletion:(id /* block */)arg1;
- (void)_deviceProvisioningDataWithCompletion:(id /* block */)arg1;
- (void)_deviceRegistrationDataWithCompletion:(id /* block */)arg1;
- (id)_downloadCacheLocation;
- (unsigned long long)_downloadPassAtURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_downloadPassesWithURLs:(id)arg1;
- (id)_errorWithResult:(unsigned long long)arg1 data:(id)arg2;
- (id)_fakeVerificationChannelsWithRealChannels:(id)arg1;
- (void)_handlePassDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRemoteAssetDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)_hasConfiguration;
- (bool)_isSandboxAccount;
- (id)_movePassToDownloadCache:(id)arg1;
- (unsigned long long)_nonceForPass:(id)arg1 serviceURL:(id)arg2 completion:(id /* block */)arg3;
- (void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)_passWithFileURL:(id)arg1;
- (id)_paymentDevice;
- (unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)_recentConfiguration:(id /* block */)arg1;
- (void)_removeVerificationRequestRecord:(id)arg1;
- (unsigned long long)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(id /* block */)arg3;
- (unsigned long long)_resultForUnexpectedStatusCode:(long long)arg1;
- (void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_updateContextWithRegistrationResponse:(id)arg1;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)archiver;
- (unsigned long long)availableDevicesWithCompletion:(id /* block */)arg1;
- (unsigned long long)availableProductsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)backgroundContext;
- (id)backgroundDelegate;
- (void)backgroundDownloadPassAtURL:(id)arg1;
- (void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(bool)arg2;
- (void)backgroundDownloadPassesSinceLastUpdatedTag:(bool)arg1;
- (void)backgroundDownloadRemotePassAssets:(id)arg1;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2;
- (void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (bool)canBypassTrustExtendedValidation;
- (unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(id /* block */)arg5;
- (unsigned long long)configurePaymentServiceWithCompletion:(id /* block */)arg1;
- (id)context;
- (void)dealloc;
- (id)delegates;
- (unsigned long long)deprovisionForRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)devicePassesSinceLastUpdatedTag:(bool)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)eligibilityForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(id /* block */)arg2;
- (unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (void)invalidateBackgroundSession;
- (unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)logFacility;
- (unsigned long long)moreInfoItemAtURL:(id)arg1 withMetadata:(id)arg2 completion:(id /* block */)arg3;
- (bool)needsConfiguration;
- (bool)needsRegistration;
- (unsigned long long)networkManifestWithCompletion:(id /* block */)arg1;
- (unsigned long long)passActionWithRemoteContentPassAction:(id)arg1 forPass:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)passAtURL:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)passesWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)paymentProvisioningNonceWithCompletion:(id /* block */)arg1;
- (int)paymentSetupSupportedInRegion;
- (unsigned long long)performAction:(id)arg1 onServiceProviderPurchase:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)performNotifificationActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)performServiceProviderPayment:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)prepareTransactionDetailsForMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 completion:(id /* block */)arg5;
- (id)primaryBrokerURL;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)provisionForRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)provisionRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyData:(id)arg2 retries:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (unsigned long long)registerDeviceWithCompletion:(id /* block */)arg1;
- (unsigned long long)registerDeviceWithConsistencyData:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDelegate:(id)arg1;
- (unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)requirementsForRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(id /* block */)arg6;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 completion:(id /* block */)arg7;
- (unsigned long long)serviceProviderNonceForPass:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)serviceProviderPurchaseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)serviceProviderPurchasesWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setArchiver:(id)arg1;
- (void)setBackgroundContext:(id)arg1;
- (void)setBackgroundDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setSharedService:(bool)arg1;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (bool)sharedService;
- (void)signNonce:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(id /* block */)arg4;
- (id)targetDevice;
- (unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (unsigned long long)updateRegistrationDataWithCompletion:(id /* block */)arg1;
- (unsigned long long)updateVerification:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)verificationChannelsForPass:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)verificationRecordForPass:(id)arg1;

@end
