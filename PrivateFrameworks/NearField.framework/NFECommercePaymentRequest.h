/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFECommercePaymentRequest : NSObject <NSSecureCoding> {
    NSString * _appletIdentifier;
    NSString * _countryCode;
    NSString * _currencyCode;
    unsigned char  _merchantCapabilities;
    NSData * _merchantData;
    NSDecimalNumber * _transactionAmount;
    NSDate * _transactionDate;
    unsigned int  _unpredictableNumber;
}

@property (nonatomic, retain) NSString *appletIdentifier;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) unsigned char merchantCapabilities;
@property (nonatomic, retain) NSData *merchantData;
@property (nonatomic, retain) NSDecimalNumber *transactionAmount;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic) unsigned int unpredictableNumber;

+ (bool)supportsSecureCoding;

- (id)appletIdentifier;
- (id)countryCode;
- (id)currencyCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned char)merchantCapabilities;
- (id)merchantData;
- (void)setAppletIdentifier:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantCapabilities:(unsigned char)arg1;
- (void)setMerchantData:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setUnpredictableNumber:(unsigned int)arg1;
- (id)transactionAmount;
- (id)transactionDate;
- (unsigned int)unpredictableNumber;

@end
