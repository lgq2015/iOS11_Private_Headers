/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession {
    id /* block */  _completion;
    HMDRemoteLoginInitiatorAuthentication * _remoteAuthentication;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteAuthentication;

@end
