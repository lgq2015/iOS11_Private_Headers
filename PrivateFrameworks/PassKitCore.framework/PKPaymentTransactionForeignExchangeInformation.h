/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    PKCurrencyAmount * _destinationCurrencyAmount;
    NSDecimalNumber * _exchangeRate;
}

@property (nonatomic, copy) PKCurrencyAmount *destinationCurrencyAmount;
@property (nonatomic, copy) NSDecimalNumber *exchangeRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationCurrencyAmount;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exchangeRate;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToForeignExchangeInformation:(id)arg1;
- (bool)isValid;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)recordTypesAndNames;
- (void)setDestinationCurrencyAmount:(id)arg1;
- (void)setExchangeRate:(id)arg1;

@end
