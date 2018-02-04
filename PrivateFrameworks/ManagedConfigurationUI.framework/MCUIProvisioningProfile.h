/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIProvisioningProfile : NSObject {
    NSString * _UUID;
    NSString * _allowedApplicationIdentifierEntitlement;
    bool  _isAppleInternal;
    bool  _isBeta;
    bool  _isFreeDeveloperProvisioningProfile;
    bool  _isUniversalProvisioningProfile;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSString *allowedApplicationIdentifierEntitlement;
@property (nonatomic) bool isAppleInternal;
@property (nonatomic) bool isBeta;
@property (nonatomic) bool isFreeDeveloperProvisioningProfile;
@property (nonatomic) bool isUniversalProvisioningProfile;

- (void).cxx_destruct;
- (id)UUID;
- (id)allowedApplicationIdentifierEntitlement;
- (bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)initWithProfile:(struct _MISProfile { }*)arg1;
- (bool)isAppleInternal;
- (bool)isBeta;
- (bool)isFreeDeveloperProvisioningProfile;
- (bool)isUniversalProvisioningProfile;
- (void)setAllowedApplicationIdentifierEntitlement:(id)arg1;
- (void)setIsAppleInternal:(bool)arg1;
- (void)setIsBeta:(bool)arg1;
- (void)setIsFreeDeveloperProvisioningProfile:(bool)arg1;
- (void)setIsUniversalProvisioningProfile:(bool)arg1;
- (void)setUUID:(id)arg1;

@end
