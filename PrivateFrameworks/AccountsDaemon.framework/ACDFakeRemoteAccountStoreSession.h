/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject * _proxy;
}

- (void).cxx_destruct;
- (id)initWithFakeProxy:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
