/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMerchantSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _domain;
    unsigned long long  _epochTimestamp;
    NSString * _merchantIdentifier;
    NSString * _nonce;
    NSString * _retryNonce;
    NSString * _sessionIdentifier;
    NSData * _signature;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) unsigned long long epochTimestamp;
@property (nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSData *signature;

+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)epochTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 sessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentMerchantSession:(id)arg1;
- (id)merchantIdentifier;
- (id)nonce;
- (id)protobuf;
- (id)retryNonce;
- (id)sessionIdentifier;
- (void)setRetryNonce:(id)arg1;
- (id)signature;
- (bool)supportsURL:(id)arg1;

@end
