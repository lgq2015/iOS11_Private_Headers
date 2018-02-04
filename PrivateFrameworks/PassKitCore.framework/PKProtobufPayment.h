/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPayment : PBCodable <NSCopying> {
    NSData * _billingContact;
    NSData * _shippingContact;
    PKProtobufShippingMethod * _shippingMethod;
    PKProtobufPaymentToken * _token;
}

@property (nonatomic, retain) NSData *billingContact;
@property (nonatomic, readonly) bool hasBillingContact;
@property (nonatomic, readonly) bool hasShippingContact;
@property (nonatomic, readonly) bool hasShippingMethod;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSData *shippingContact;
@property (nonatomic, retain) PKProtobufShippingMethod *shippingMethod;
@property (nonatomic, retain) PKProtobufPaymentToken *token;

- (void).cxx_destruct;
- (id)billingContact;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBillingContact;
- (bool)hasShippingContact;
- (bool)hasShippingMethod;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)setToken:(id)arg1;
- (id)shippingContact;
- (id)shippingMethod;
- (id)token;
- (void)writeTo:(id)arg1;

@end
