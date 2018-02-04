/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFPeerPaymentTransferRequest : NSObject <NSSecureCoding> {
    NSString * _appleTransactionHash;
    NSData * _nonce;
    NSString * _publicTransactionHash;
    NSDecimalNumber * _transactionAmount;
    NSString * _transactionCountry;
    NSString * _transactionCurrency;
    NSDate * _transactionDate;
}

@property (nonatomic, copy) NSString *appleTransactionHash;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, copy) NSString *publicTransactionHash;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) NSString *transactionCountry;
@property (nonatomic, copy) NSString *transactionCurrency;
@property (nonatomic, copy) NSDate *transactionDate;

+ (bool)supportsSecureCoding;

- (id)appleTransactionHash;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)nonce;
- (id)publicTransactionHash;
- (void)setAppleTransactionHash:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPublicTransactionHash:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionCountry:(id)arg1;
- (void)setTransactionCurrency:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionCountry;
- (id)transactionCurrency;
- (id)transactionDate;

@end
