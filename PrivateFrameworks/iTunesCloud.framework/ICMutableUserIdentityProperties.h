/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, copy) ICDelegateToken *delegateToken;
@property (getter=isDelegated, nonatomic) bool delegated;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (getter=isManagedAppleID, nonatomic) bool managedAppleID;
@property (getter=isSandboxed, nonatomic) bool sandboxed;
@property (nonatomic, copy) NSString *storefrontIdentifier;
@property (nonatomic, copy) NSString *username;

- (void)setAlternateDSID:(id)arg1;
- (void)setCarrierBundleDeviceIdentifier:(id)arg1;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setDSID:(id)arg1;
- (void)setDelegateToken:(id)arg1;
- (void)setDelegated:(bool)arg1;
- (void)setFirstName:(id)arg1;
- (void)setICloudPersonID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setManagedAppleID:(bool)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;

@end
