/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest {
    NSData * _FPInfo;
    NSString * _cardholderName;
    long long  _cardholderNameInputMethod;
    NSData * _encryptedCardData;
    NSString * _encryptionVersion;
    NSData * _ephemeralPublicKey;
    NSString * _expiration;
    long long  _expirationInputMethod;
    NSString * _hostApplicationIdentifier;
    NSString * _hostApplicationVersion;
    NSString * _issuerIdentifier;
    NSString * _nonce;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
    long long  _primaryAccountNumberInputMethod;
    NSString * _productIdentifier;
    NSData * _publicKeyHash;
    NSString * _referrerIdentifier;
    long long  _source;
    NSData * _wrappedKey;
}

@property (nonatomic, copy) NSData *FPInfo;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic) long long cardholderNameInputMethod;
@property (nonatomic, copy) NSData *encryptedCardData;
@property (nonatomic, copy) NSString *encryptionVersion;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic) long long expirationInputMethod;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, copy) NSString *hostApplicationVersion;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic) long long primaryAccountNumberInputMethod;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, readonly) long long source;
@property (nonatomic, copy) NSData *wrappedKey;

- (void).cxx_destruct;
- (id)FPInfo;
- (unsigned long long)_requestHTTPMethod;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)cardholderName;
- (long long)cardholderNameInputMethod;
- (id)encryptedCardData;
- (id)encryptionVersion;
- (id)ephemeralPublicKey;
- (id)expiration;
- (long long)expirationInputMethod;
- (id)hostApplicationIdentifier;
- (id)hostApplicationVersion;
- (id)init;
- (id)initWithPaymentCredential:(id)arg1;
- (id)initWithSource:(long long)arg1;
- (id)issuerIdentifier;
- (id)nonce;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (long long)primaryAccountNumberInputMethod;
- (id)productIdentifier;
- (id)publicKeyHash;
- (id)referrerIdentifier;
- (bool)requiresNonce;
- (void)setCardholderName:(id)arg1;
- (void)setCardholderNameInputMethod:(long long)arg1;
- (void)setEncryptedCardData:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setExpirationInputMethod:(long long)arg1;
- (void)setFPInfo:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setHostApplicationVersion:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setPrimaryAccountNumberInputMethod:(long long)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setWrappedKey:(id)arg1;
- (long long)source;
- (id)wrappedKey;

@end
