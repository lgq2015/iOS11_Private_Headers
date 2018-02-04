/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    NSString * _companionSerialNumber;
    bool  _devSigned;
    NSDictionary * _enrollmentData;
    NSString * _signedAuthToken;
}

@property (nonatomic, copy) NSString *companionSerialNumber;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSDictionary *enrollmentData;
@property (nonatomic, copy) NSString *signedAuthToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)companionSerialNumber;
- (id)description;
- (bool)devSigned;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1;
- (void)setCompanionSerialNumber:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setEnrollmentData:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (id)signedAuthToken;

@end