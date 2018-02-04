/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLSubject : SAMLBaseElement

@property (nonatomic, readonly) SAMLNameId *nameId;
@property (nonatomic, readonly) NSArray *subjectConfirmations;

+ (id)createElement:(id*)arg1;

- (id)nameId;
- (id)subjectConfirmations;

@end
