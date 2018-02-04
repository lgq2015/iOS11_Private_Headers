/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface HTTPSASLClientSession : NSObject {
    id /* block */  _authCompletionHandler;
    NSString * _authMechanism;
    NSString * _authPassword;
    NSURLSession * _authSession;
    NSURL * _authURL;
    NSString * _authUsername;
    NSString * _authenticatedCookie;
    PinnedHTTPSSessionDelegate * _authenticatedSessionDelegate;
    struct srp_context { } * _srpContext;
}

@property (retain) NSString *authMechanism;
@property (nonatomic, retain) NSString *authenticatedCookie;
@property (nonatomic, retain) PinnedHTTPSSessionDelegate *authenticatedSessionDelegate;

- (void).cxx_destruct;
- (void)_authStep:(id)arg1 state:(int)arg2;
- (void)_completeSRP:(id)arg1;
- (void)_startAuthWithURL:(id)arg1 mechanism:(id)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_stepPLAIN:(id)arg1;
- (void)_stepSRP:(id)arg1;
- (void)_tryAuthFallbackIfAllowed:(id)arg1;
- (void)addAuthenticationToRequest:(id)arg1;
- (id)authMechanism;
- (id)authenticatedCookie;
- (id)authenticatedSessionDelegate;
- (void)restoreCachedAuthenticatedCookie:(id)arg1 andTrustedCertData:(id)arg2;
- (void)setAuthMechanism:(id)arg1;
- (void)setAuthenticatedCookie:(id)arg1;
- (void)setAuthenticatedSessionDelegate:(id)arg1;
- (void)startAuthWithURL:(id)arg1 username:(id)arg2 password:(id)arg3 completionHandler:(id /* block */)arg4;

@end
