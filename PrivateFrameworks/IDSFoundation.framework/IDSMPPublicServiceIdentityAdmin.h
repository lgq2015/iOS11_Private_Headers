/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPPublicServiceIdentityAdmin : IDSMPIdentity

+ (id)publicServiceIdentityAdminWithDataRepresentation:(id)arg1 publicAccountIdentity:(id)arg2 error:(id*)arg3;
+ (id)publicServiceIdentitySigningWithDataRepresentation:(id)arg1 publicAccountIdentity:(id)arg2 error:(id*)arg3;

- (id)dataRepresentationWithError:(id*)arg1;

@end
