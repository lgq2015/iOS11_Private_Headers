/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate> {
    HMDRemoteLoginReceiverSession * _loginSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDRemoteLoginReceiverSession *loginSession;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_auditLoggedInAccount;
- (void)_authenticate:(id)arg1 message:(id)arg2;
- (void)_callCompletion:(id)arg1;
- (void)_handleCompanionAuthenticationRequest:(id)arg1;
- (void)_handleProxyAuthenticationRequest:(id)arg1;
- (void)_handleProxyDeviceRequest:(id)arg1;
- (void)_handleSignoutRequest:(id)arg1;
- (void)auditLoggedInAccount;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;
- (id)loginSession;
- (void)registerForMessages;
- (void)setLoginSession:(id)arg1;

@end
