/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alternateDSID;
    NSString * _carrierBundleDeviceIdentifier;
    bool  _cloudBackupEnabled;
    ICDelegateToken * _delegateToken;
    bool  _delegated;
    NSNumber * _dsid;
    NSString * _firstName;
    NSString * _iCloudPersonID;
    NSString * _lastName;
    bool  _managedAppleID;
    bool  _sandboxed;
    NSString * _storefrontIdentifier;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *alternateDSID;
@property (nonatomic, readonly, copy) NSString *carrierBundleDeviceIdentifier;
@property (getter=isCloudBackupEnabled, nonatomic) bool cloudBackupEnabled;
@property (nonatomic, readonly, copy) ICDelegateToken *delegateToken;
@property (getter=isDelegated, nonatomic, readonly) bool delegated;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (setter=setICloudPersonID:, nonatomic, copy) NSString *iCloudPersonID;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (getter=isSandboxed, nonatomic, readonly) bool sandboxed;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;
@property (nonatomic, readonly, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)alternateDSID;
- (id)carrierBundleDeviceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateToken;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)iCloudPersonID;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudBackupEnabled;
- (bool)isDelegated;
- (bool)isManagedAppleID;
- (bool)isSandboxed;
- (id)lastName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setICloudPersonID:(id)arg1;
- (id)storefrontIdentifier;
- (id)username;

@end
