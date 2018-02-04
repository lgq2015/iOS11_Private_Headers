/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding> {
    NSString * _accountNumber;
    NSData * _appleHash;
    NSString * _bankName;
    NSDecimalNumber * _currentBalance;
    NSString * _currentBalanceCurrency;
    NSString * _disclosureText;
    NSURL * _disclosureURL;
    NSData * _externalHash;
    NSString * _identifier;
    NSArray * _items;
    PKPeerPaymentRecipient * _recipient;
    NSString * _routingNumber;
    NSDecimalNumber * _totalFees;
    NSString * _totalFeesCurrency;
    NSDecimalNumber * _totalReceiveAmount;
    NSString * _totalReceiveAmountCurrency;
    NSDate * _validUntil;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, readonly, copy) NSData *appleHash;
@property (nonatomic, copy) NSString *bankName;
@property (nonatomic, readonly) PKCurrencyAmount *calculatedTotalAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *currentBalance;
@property (nonatomic, readonly, copy) NSString *currentBalanceCurrency;
@property (nonatomic, readonly, copy) NSString *disclosureText;
@property (nonatomic, readonly, copy) NSURL *disclosureURL;
@property (nonatomic, readonly, copy) NSData *externalHash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) PKPeerPaymentRecipient *recipient;
@property (nonatomic, copy) NSString *routingNumber;
@property (nonatomic, readonly, copy) NSDecimalNumber *totalFees;
@property (nonatomic, readonly, copy) NSString *totalFeesCurrency;
@property (nonatomic, readonly, copy) NSDecimalNumber *totalReceiveAmount;
@property (nonatomic, readonly, copy) NSString *totalReceiveAmountCurrency;
@property (nonatomic, readonly, copy) NSDate *validUntil;
@property (nonatomic, readonly) double validityDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)appleHash;
- (id)bankName;
- (id)calculatedTotalAmount;
- (id)currentBalance;
- (id)currentBalanceCurrency;
- (id)description;
- (id)disclosureText;
- (id)disclosureURL;
- (void)encodeWithCoder:(id)arg1;
- (id)externalHash;
- (id)firstQuoteItemOfType:(unsigned long long)arg1;
- (bool)hasExpired;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)recipient;
- (id)routingNumber;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (id)totalFees;
- (id)totalFeesCurrency;
- (id)totalReceiveAmount;
- (id)totalReceiveAmountCurrency;
- (id)validUntil;
- (double)validityDuration;

@end
