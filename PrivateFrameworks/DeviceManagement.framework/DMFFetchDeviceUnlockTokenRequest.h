/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchDeviceUnlockTokenRequest : CATTaskRequest {
    NSString * _secret;
}

@property (nonatomic, copy) NSString *secret;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secret;
- (void)setSecret:(id)arg1;

@end
