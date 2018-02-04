/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTwitterAuthenticationRequest : NSObject {
    NSString * _password;
    id /* block */  _responseBlock;
    NSString * _username;
}

- (void).cxx_destruct;
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 withHandler:(id /* block */)arg3;
- (id)_consumerKey;
- (id)_consumerSecret;
- (void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
