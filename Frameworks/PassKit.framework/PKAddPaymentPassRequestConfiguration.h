/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {
    NSArray * _cardDetails;
    NSString * _cardholderName;
    NSString * _encryptionScheme;
    NSString * _localizedDescription;
    NSString * _paymentNetwork;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountSuffix;
    bool  _requiresFelicaSecureElement;
}

@property (nonatomic, copy) NSArray *cardDetails;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, readonly, copy) NSString *encryptionScheme;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *paymentNetwork;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountSuffix;
@property (nonatomic) bool requiresFelicaSecureElement;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardDetails;
- (id)cardholderName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionScheme;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)localizedDescription;
- (id)paymentNetwork;
- (id)primaryAccountIdentifier;
- (id)primaryAccountSuffix;
- (bool)requiresFelicaSecureElement;
- (void)setCardDetails:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountSuffix:(id)arg1;
- (void)setRequiresFelicaSecureElement:(bool)arg1;

@end
