/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController {
    NSString * _easEndPoint;
    NSString * _redirectURI;
}

@property (nonatomic, copy) NSString *easEndPoint;
@property (nonatomic, copy) NSString *redirectURI;

- (void).cxx_destruct;
- (id)_accountDescription;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(id /* block */)arg2;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (id)authURLForUsername:(id)arg1;
- (id)easEndPoint;
- (void)exchangeAuthCode:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithAuthURI:(id)arg1 easEndPoint:(id)arg2 username:(id)arg3;
- (id)initialRedirectURL;
- (id)redirectURI;
- (void)setEasEndPoint:(id)arg1;
- (void)setRedirectURI:(id)arg1;

@end
