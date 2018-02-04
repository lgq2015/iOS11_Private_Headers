/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPFullServiceIdentitySigning : IDSMPIdentity

@property (nonatomic, readonly) long long identityServiceType;
@property (nonatomic, readonly) NSString *identityServiceTypeName;

+ (id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id*)arg3;
+ (id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id*)arg3;

- (id)dataRepresentationWithError:(id*)arg1;
- (long long)identityServiceType;
- (id)identityServiceTypeName;
- (id)publicServiceIdentitySigningWithError:(id*)arg1;

@end
