/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLRSAKeyValue : SAMLBaseElement

@property (nonatomic, readonly) NSData *exponent;
@property (nonatomic, readonly) NSData *modulus;

+ (id)createElement:(id*)arg1;

- (id)exponent;
- (id)modulus;

@end
