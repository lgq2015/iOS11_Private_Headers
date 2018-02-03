/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACOAuthSigner : NSObject {
    ACAccount * _account;
    NSXPCConnection * _connection;
    <ACDOAuthSignerProtocol> * _proxyShim;
    bool  _shouldIncludeAppIdInRequest;
}

@property (nonatomic) bool shouldIncludeAppIdInRequest;

- (void).cxx_destruct;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1;
- (void)dealloc;
- (void)disconnectFromRemoteOAuthSigner;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2;
- (void)setShouldIncludeAppIdInRequest:(bool)arg1;
- (bool)shouldIncludeAppIdInRequest;
- (id)signedURLRequestWithURLRequest:(id)arg1;
- (id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3;

@end