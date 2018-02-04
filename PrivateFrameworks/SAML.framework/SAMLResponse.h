/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLResponse : XMLWrapperDoc {
    SAMLResponseElement * _responseElement;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) SAMLResponseElement *responseElement;
@property (nonatomic, readonly) NSString *selectedProvider;

- (void).cxx_destruct;
- (bool)assertionMeetsConditions:(id*)arg1;
- (id)assertions;
- (id)attributeValuesForName:(id)arg1;
- (id)attributes;
- (id)authenticationSessionId;
- (id)authenticationTTL;
- (id)authorizationStatusForResource:(id)arg1;
- (long long)expectedAction;
- (bool)hasValidAuthentication;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (bool)isValid:(id*)arg1;
- (id)primaryStatusCode;
- (id)responseElement;
- (id)selectedProvider;
- (void)setResponseElement:(id)arg1;
- (id)statusCodes;
- (id)subject;
- (id)userName;

@end
