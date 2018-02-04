/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {
    NSData * _activationData;
    NSString * _cardSecurityCode;
    NSString * _cardholderName;
    NSArray * _certChain;
    PKDSPContext * _context;
    bool  _devSigned;
    PKPaymentDeviceProvisioningData * _deviceData;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _nonce;
    NSNumber * _primaryJSBLSequenceCounter;
    NSString * _referrerIdentifier;
}

@property (nonatomic, copy) NSData *activationData;
@property (nonatomic, copy) NSString *cardSecurityCode;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) PKDSPContext *context;
@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (void)_deviceScoreWithCompletion:(id /* block */)arg1;
- (void)_requestBodyWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateContextUsingWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)activationData;
- (id)cardSecurityCode;
- (id)cardholderName;
- (id)context;
- (id)eligibilityResponse;
- (id)initWithEligibilityResponse:(id)arg1;
- (id)nonce;
- (id)referrerIdentifier;
- (void)setActivationData:(id)arg1;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEligibilityResponse:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;

@end
