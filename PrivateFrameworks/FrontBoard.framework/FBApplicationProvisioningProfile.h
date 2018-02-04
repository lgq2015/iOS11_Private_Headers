/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProvisioningProfile : NSObject {
    NSString * _UUID;
    NSString * _allowedApplicationIdentifierEntitlement;
    bool  _appleInternalProfile;
    bool  _beta;
    NSDate * _expirationDate;
    bool  _freeDeveloperProfile;
    bool  _provisionsAllDevices;
    bool  _provisionsThisDevice;
    NSString * _signerIdentity;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (getter=isAppleInternalProfile, nonatomic, readonly) bool appleInternalProfile;
@property (getter=isBeta, nonatomic, readonly) bool beta;
@property (nonatomic, readonly, retain) NSDate *expirationDate;
@property (getter=isFreeDeveloperProfile, nonatomic, readonly) bool freeDeveloperProfile;
@property (nonatomic, readonly) bool provisionsAllDevices;
@property (nonatomic, readonly) bool provisionsThisDevice;
@property (nonatomic, readonly, copy) NSString *signerIdentity;

- (id)UUID;
- (bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expirationDate;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;
- (bool)isAppleInternalProfile;
- (bool)isBeta;
- (bool)isFreeDeveloperProfile;
- (bool)provisionsAllDevices;
- (bool)provisionsThisDevice;
- (id)signerIdentity;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
