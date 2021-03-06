/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenEndpoint : NSObject {
    long long  _clientCount;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _sessionMap;
    TKToken * _token;
    NSError * _tokenError;
    NSString * _tokenID;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) TKToken *token;
@property (readonly) NSString *tokenID;

- (void).cxx_destruct;
- (void)acceptNewConnection:(id)arg1;
- (void)addClientWithReplyNotification:(id /* block */)arg1;
- (void)dealloc;
- (id)endpoint;
- (id)initWithTokenID:(id)arg1;
- (void)resumeWithToken:(id)arg1 tokenError:(id)arg2;
- (id)sessionForEvent:(id)arg1 error:(id*)arg2;
- (void)terminateAfterRemovingClientWithNotification:(id /* block */)arg1;
- (id)token;
- (id)tokenID;

@end
