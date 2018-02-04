/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFRemoveProvisioningProfileRequest : CATTaskRequest {
    NSString * _managingProfileIdentifier;
    NSString * _profileIdentifier;
}

@property (nonatomic, copy) NSString *managingProfileIdentifier;
@property (nonatomic, copy) NSString *profileIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)managingProfileIdentifier;
- (id)profileIdentifier;
- (void)setManagingProfileIdentifier:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;

@end
