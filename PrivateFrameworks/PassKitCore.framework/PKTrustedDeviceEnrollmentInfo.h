/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding> {
    NSString * _deviceName;
    NSString * _deviceSerialNumber;
    NSString * _deviceUDID;
    NSString * _productType;
    NSString * _secureElementIdentifier;
    bool  _supportsAccessExpressMode;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *deviceSerialNumber;
@property (nonatomic, retain) NSString *deviceUDID;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSString *secureElementIdentifier;
@property (nonatomic) bool supportsAccessExpressMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceName;
- (id)deviceSerialNumber;
- (id)deviceUDID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productType;
- (id)secureElementIdentifier;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setDeviceUDID:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSupportsAccessExpressMode:(bool)arg1;
- (bool)supportsAccessExpressMode;

@end
