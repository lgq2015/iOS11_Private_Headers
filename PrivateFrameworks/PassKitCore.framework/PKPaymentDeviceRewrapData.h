/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding> {
    PKSecureElementCertificateSet * _certificates;
    NSString * _deviceIdentifier;
}

@property (nonatomic, copy) PKSecureElementCertificateSet *certificates;
@property (nonatomic, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;

@end
