/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic, retain) SAMLConditions *conditions;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, readonly) SAMLRequestedAuthNContext *context;
@property (nonatomic, retain) NSString *destination;
@property (nonatomic) bool forceAuthN;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isPassive;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, retain) NSString *issuer;
@property (nonatomic, retain) SAMLNameIdPolicy *nameIdPolicy;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, retain) SAMLScoping *scoping;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, retain) SAMLSubject *subject;

+ (id)createElement:(id*)arg1;

- (id)conditions;
- (id)consent;
- (id)context;
- (id)destination;
- (bool)forceAuthN;
- (id)identifier;
- (bool)isPassive;
- (id)issueInstant;
- (id)issuer;
- (id)nameIdPolicy;
- (id)providerName;
- (id)scoping;
- (void)setConditions:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setForceAuthN:(bool)arg1;
- (void)setIsPassive:(bool)arg1;
- (void)setIssuer:(id)arg1;
- (void)setNameIdPolicy:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setScoping:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)signature;
- (id)subject;

@end
