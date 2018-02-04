/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam {
    long long  _kind;
    id  _object;
}

@property (nonatomic, readonly) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (nonatomic) long long kind;
@property (nonatomic, retain) id object;
@property (nonatomic, readonly) PKPayment *payment;
@property (nonatomic, readonly) PKPaymentMethod *paymentMethod;
@property (nonatomic, readonly) PKServiceProviderPurchase *purchase;
@property (nonatomic, readonly) CNContact *shippingContact;
@property (nonatomic, readonly) PKShippingMethod *shippingMethod;

+ (id)paramWithCallbackKind:(long long)arg1 object:(id)arg2;

- (void).cxx_destruct;
- (id)authorizedPeerPaymentQuote;
- (id)description;
- (long long)kind;
- (id)object;
- (id)payment;
- (id)paymentMethod;
- (id)purchase;
- (void)setKind:(long long)arg1;
- (void)setObject:(id)arg1;
- (id)shippingContact;
- (id)shippingMethod;

@end
