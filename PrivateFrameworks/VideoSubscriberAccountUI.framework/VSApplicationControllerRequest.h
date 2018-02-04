/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationControllerRequest : NSObject {
    NSString * _SAMLRequest;
    NSArray * _attributeNames;
    NSString * _authenticationToken;
    NSString * _requestorVerificationToken;
    long long  _type;
}

@property (nonatomic, copy) NSString *SAMLRequest;
@property (nonatomic, copy) NSArray *attributeNames;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *requestorVerificationToken;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)SAMLRequest;
- (id)attributeNames;
- (id)authenticationToken;
- (id)requestorVerificationToken;
- (void)setAttributeNames:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setRequestorVerificationToken:(id)arg1;
- (void)setSAMLRequest:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
