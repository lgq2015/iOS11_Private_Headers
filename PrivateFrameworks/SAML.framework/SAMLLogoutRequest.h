/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLLogoutRequest : XMLWrapperDoc {
    SAMLLogoutRequestElement * _requestElement;
    NSData * _schemaData;
}

@property (nonatomic, retain) NSString *issuer;
@property (nonatomic, retain) NSDate *notOnOrAfter;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) SAMLLogoutRequestElement *requestElement;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)issuer;
- (id)notOnOrAfter;
- (id)reason;
- (id)requestElement;
- (void)setIssuer:(id)arg1;
- (void)setNotOnOrAfter:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestElement:(id)arg1;

@end
