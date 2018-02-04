/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate> {
    <PKPeerPaymentWebServiceArchiver> * _archiver;
    PKPeerPaymentWebServiceContext * _context;
    PKPeerPaymentService * _peerPaymentService;
    PKSecureElement * _secureElement;
    bool  _sharedService;
    <PKPeerPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (nonatomic, readonly) <PKPeerPaymentWebServiceArchiver> *archiver;
@property (nonatomic, retain) PKPeerPaymentWebServiceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsRegistration;
@property (nonatomic, retain) PKPeerPaymentService *peerPaymentService;
@property (nonatomic, readonly) NSURL *peerPaymentServiceURL;
@property (getter=isSharedService, nonatomic) bool sharedService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKPeerPaymentWebServiceTargetDeviceProtocol> *targetDevice;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_archiveContext;
- (id)_deviceIdentifier;
- (id)_deviceMetadata;
- (void)_deviceRegistrationDataWithCompletion:(id /* block */)arg1;
- (void)_deviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_deviceScoreForEndpoint:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isValidResponse:(id)arg1 error:(id)arg2;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (id)archiver;
- (id)badRequestErrorWithResponse:(id)arg1;
- (bool)canBypassTrustExtendedValidation;
- (id)context;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (bool)isSharedService;
- (id)logFacility;
- (bool)needsRegistration;
- (unsigned long long)peerPaymentAcceptTermsWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentAccountWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentBankLookupWithCountryCode:(id)arg1 query:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)peerPaymentDocumentSubmissionRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentIdentityVerificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentPassDetailsWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentPerformAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)peerPaymentPerformQuoteWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentPreferencesWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentQuoteCertificatesForDestination:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentQuoteWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentReOpenAccountWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentRecipientForRecipientAddress:(id)arg1 senderAddress:(id)arg2 source:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (unsigned long long)peerPaymentRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)peerPaymentRequestStatementWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentRequestTokenWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentService;
- (id)peerPaymentServiceURL;
- (unsigned long long)peerPaymentStatusWithPaymentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)peerPaymentUnregisterWithCompletion:(id /* block */)arg1;
- (unsigned long long)peerPaymentUpdatePreferencesWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setContext:(id)arg1;
- (void)setPeerPaymentService:(id)arg1;
- (void)setSharedService:(bool)arg1;
- (void)sharedPeerPaymentServiceChanged:(id)arg1;
- (unsigned long long)submitDeviceScoreIdentifiersWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)targetDevice;

@end
