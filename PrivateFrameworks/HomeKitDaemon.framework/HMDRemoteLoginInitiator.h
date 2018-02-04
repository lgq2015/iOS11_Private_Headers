/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate> {
    HMDRemoteLoginAnisetteDataProviderBridge * _anisetteProviderBridge;
    HMDRemoteLoginInitiatorSession * _loginSession;
    HMDRemoteLoginMessageSender * _remoteMessageSender;
}

@property (nonatomic, retain) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDRemoteLoginInitiatorSession *loginSession;
@property (nonatomic, retain) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;
- (void)_handleRemoteLoginSignout:(id)arg1;
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(id /* block */)arg4;
- (id)anisetteProviderBridge;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;
- (id)loginSession;
- (void)registerForMessages;
- (id)remoteMessageSender;
- (void)setAnisetteProviderBridge:(id)arg1;
- (void)setLoginSession:(id)arg1;
- (void)setRemoteMessageSender:(id)arg1;

@end
