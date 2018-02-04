/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentAccountFeatureDescriptor : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSDecimalNumber * _maximumAmount;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    NSDecimalNumber * _minimumAmount;
    NSArray * _supportedNetworks;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDecimalNumber *maximumAmount;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSDecimalNumber *minimumAmount;
@property (nonatomic, copy) NSArray *supportedNetworks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)maximumAmount;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)minimumAmount;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumAmount:(id)arg1;
- (void)setMerchantCapabilities:(unsigned long long)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMinimumAmount:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (id)supportedNetworks;

@end
