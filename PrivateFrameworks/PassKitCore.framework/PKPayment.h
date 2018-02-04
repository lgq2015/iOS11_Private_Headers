/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPayment : NSObject <NSSecureCoding> {
    NSMutableDictionary * _authKitAuthenticationResults;
    PKContact * _billingContact;
    long long  _biometricAuthorizationAttempts;
    NSData * _credential;
    PKContact * _shippingContact;
    PKShippingMethod * _shippingMethod;
    PKPaymentToken * _token;
}

@property (nonatomic, retain) NSMutableDictionary *authKitAuthenticationResults;
@property (nonatomic, readonly) const void*billingAddress;
@property (nonatomic, retain) PKContact *billingContact;
@property (nonatomic) long long biometricAuthorizationAttempts;
@property (nonatomic, retain) NSData *credential;
@property (nonatomic, readonly) const void*shippingAddress;
@property (nonatomic, retain) PKContact *shippingContact;
@property (nonatomic, retain) PKShippingMethod *shippingMethod;
@property (nonatomic, retain) PKPaymentToken *token;

+ (id)paymentWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)authKitAuthenticationResults;
- (const void*)billingAddress;
- (id)billingContact;
- (long long)biometricAuthorizationAttempts;
- (id)credential;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)protobuf;
- (void)setAuthKitAuthenticationResults:(id)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setBiometricAuthorizationAttempts:(long long)arg1;
- (void)setCredential:(id)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)setToken:(id)arg1;
- (const void*)shippingAddress;
- (id)shippingContact;
- (id)shippingMethod;
- (id)token;

@end
