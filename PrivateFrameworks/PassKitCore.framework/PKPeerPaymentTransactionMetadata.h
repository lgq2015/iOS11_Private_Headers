/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding> {
    NSString * _dpanIdentifier;
    NSUUID * _requestDeviceScoreIdentifier;
    NSUUID * _sendDeviceScoreIdentifier;
    NSString * _serviceIdentifier;
}

@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSUUID *requestDeviceScoreIdentifier;
@property (nonatomic, copy) NSUUID *sendDeviceScoreIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentTransactionMetadata:(id)arg1;
- (id)requestDeviceScoreIdentifier;
- (id)sendDeviceScoreIdentifier;
- (id)serviceIdentifier;
- (void)setDPANIdentifier:(id)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setSendDeviceScoreIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end
