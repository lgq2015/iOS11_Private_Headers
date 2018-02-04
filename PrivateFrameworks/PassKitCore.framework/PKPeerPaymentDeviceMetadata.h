/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentDeviceMetadata : NSObject <NSSecureCoding> {
    NSString * _deviceName;
    NSString * _phoneNumber;
    NSString * _secureElementIdentifier;
    NSString * _serialNumber;
    NSString * _uniqueDeviceIdentifier;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *uniqueDeviceIdentifier;

+ (id)deviceMetadataForCurrentDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentDeviceMetadata:(id)arg1;
- (id)phoneNumber;
- (id)secureElementIdentifier;
- (id)serialNumber;
- (void)setDeviceName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;

@end
