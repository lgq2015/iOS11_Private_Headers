/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCentralMessageDispatcher : HMFMessageDispatcher {
    HMDAdminEnforcementMessageFilter * _adminMsgFilter;
    HMDHomeManager * _homeManager;
    HMDMessageFilterChain * _msgFilterChain;
    HMFMessageDispatcher * _notificationDispatcher;
    HMFMessageDispatcher * _recvDispatcher;
    NSMutableArray * _relayedMessages;
    NSMutableDictionary * _remoteGateways;
}

@property (nonatomic, retain) HMDAdminEnforcementMessageFilter *adminMsgFilter;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMFMessageDispatcher *notificationDispatcher;
@property (nonatomic, retain) HMFMessageDispatcher *recvDispatcher;
@property (nonatomic, readonly) NSMutableArray *relayedMessages;
@property (nonatomic, retain) NSMutableDictionary *remoteGateways;
@property (nonatomic, readonly) HMDSecureRemoteMessageTransport *secureRemoteTransport;

+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(bool)arg4;
+ (bool)isWhitelistedLocalMessage:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2;
- (void)_handleLocalMessage:(id)arg1 targetUUID:(id)arg2;
- (void)_handleRelayedIDSMessage:(id)arg1 handledLocally:(bool)arg2;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(bool)arg3;
- (id)adminMsgFilter;
- (void)configureHTTPTransport:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)disableMessageServer;
- (void)dispatchMessage:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)enableMessageServer;
- (void)handleSecureSessionError:(id)arg1;
- (id)homeManager;
- (id)httpMessageTransport;
- (id)initWithSecureRemoteTransport:(id)arg1 messageFilterChain:(id)arg2;
- (id)msgFilterChain;
- (id)notificationDispatcher;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (id)recvDispatcher;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)relayInternalMessage:(id)arg1;
- (void)relayMessage:(id)arg1;
- (id)relayedMessages;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (id)remoteGateways;
- (void)removeHome:(id)arg1;
- (void)reset;
- (id)secureRemoteTransport;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)setAdminMsgFilter:(id)arg1;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNotificationDispatcher:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)setRemoteGateways:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
- (void)updateLocalAdministratorName;

@end
