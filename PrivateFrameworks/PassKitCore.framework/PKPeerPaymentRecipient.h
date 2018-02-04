/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRecipient : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsFormalPaymentRequests;
    NSDate * _cacheUntil;
    NSString * _displayName;
    NSString * _identifier;
    NSDecimalNumber * _maximumReceiveAmount;
    NSDecimalNumber * _minimumReceiveAmount;
    NSString * _phoneOrEmail;
    NSString * _receiveCurrency;
    unsigned long long  _receiveMethod;
    unsigned long long  _status;
}

@property (nonatomic) bool allowsFormalPaymentRequests;
@property (nonatomic, copy) NSDate *cacheUntil;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDecimalNumber *maximumReceiveAmount;
@property (nonatomic, copy) NSDecimalNumber *minimumReceiveAmount;
@property (nonatomic, copy) NSString *phoneOrEmail;
@property (nonatomic, copy) NSString *receiveCurrency;
@property (nonatomic) unsigned long long receiveMethod;
@property (nonatomic) unsigned long long status;

+ (id)recipientWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsFormalPaymentRequests;
- (id)cacheUntil;
- (id)cacheableCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumReceiveAmount;
- (id)minimumReceiveAmount;
- (id)phoneOrEmail;
- (id)receiveCurrency;
- (unsigned long long)receiveMethod;
- (void)setAllowsFormalPaymentRequests:(bool)arg1;
- (void)setCacheUntil:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumReceiveAmount:(id)arg1;
- (void)setMinimumReceiveAmount:(id)arg1;
- (void)setPhoneOrEmail:(id)arg1;
- (void)setReceiveCurrency:(id)arg1;
- (void)setReceiveMethod:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
