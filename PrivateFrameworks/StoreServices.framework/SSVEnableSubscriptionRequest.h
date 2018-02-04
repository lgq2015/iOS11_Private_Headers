/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVEnableSubscriptionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
}

@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
