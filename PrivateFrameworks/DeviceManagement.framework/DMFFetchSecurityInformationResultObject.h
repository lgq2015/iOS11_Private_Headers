/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject {
    DMFSecurityInformation * _securityInformation;
}

@property (nonatomic, readonly, copy) DMFSecurityInformation *securityInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityInformation:(id)arg1;
- (id)securityInformation;

@end
