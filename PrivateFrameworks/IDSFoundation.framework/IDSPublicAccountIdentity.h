/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey> {
    IDSMPPublicAccountIdentity * _accountIdentity;
    IDSMPPublicServiceIdentityAdmin * _adminIdentity;
    IDSMPPublicServiceIdentitySigning * _signingIdentity;
}

@property (nonatomic, readonly) IDSMPPublicAccountIdentity *accountIdentity;
@property (nonatomic, readonly) IDSMPPublicServiceIdentityAdmin *adminIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSMPPublicServiceIdentitySigning *signingIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)adminIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)signingIdentity;

@end
