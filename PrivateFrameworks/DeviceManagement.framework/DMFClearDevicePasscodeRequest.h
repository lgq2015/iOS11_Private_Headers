/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFClearDevicePasscodeRequest : CATTaskRequest {
    NSString * _secret;
    NSData * _unlockTokenData;
}

@property (nonatomic, copy) NSString *secret;
@property (nonatomic, copy) NSData *unlockTokenData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secret;
- (void)setSecret:(id)arg1;
- (void)setUnlockTokenData:(id)arg1;
- (id)unlockTokenData;

@end
