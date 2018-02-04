/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDXpcServer : HMFMessageDispatcher <HMDApplicationMonitorDelegate, HMFMessageReceiver, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_group> * _activeMessageTracker;
    HMDApplicationMonitor * _appMonitor;
    HMDApplicationRegistry * _appRegistry;
    HMDBackgroundAppMessageFilter * _backgroundAppMsgFilter;
    HMDLostModeMessageFilter * _lostModeMessageFilter;
    HMDCentralMessageDispatcher * _recvDispatcher;
    NSUUID * _uuid;
    NSMutableSet * _xpcClients;
    NSXPCListener * _xpcListener;
    NSObject<OS_dispatch_queue> * _xpcWorkQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *activeMessageTracker;
@property (nonatomic) HMDApplicationMonitor *appMonitor;
@property (nonatomic, retain) HMDApplicationRegistry *appRegistry;
@property (nonatomic, retain) HMDBackgroundAppMessageFilter *backgroundAppMsgFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDLostModeMessageFilter *lostModeMessageFilter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDCentralMessageDispatcher *recvDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSMutableSet *xpcClients;
@property (nonatomic, retain) NSXPCListener *xpcListener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcWorkQueue;

- (void).cxx_destruct;
- (void)_handleResumeXPCConnectionRequest:(id)arg1;
- (void)_handleSuspendXPCConnectionRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_sendMessage:(id)arg1 andInvokeCompletionHandler:(id /* block */)arg2 withDeliveryCompletion:(id /* block */)arg3;
- (id)activeMessageTracker;
- (id)appMonitor;
- (id)appRegistry;
- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(bool)arg1;
- (void)applicationMonitorDidChangeAppState:(id)arg1;
- (id)backgroundAppMsgFilter;
- (void)dealloc;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)endPoint;
- (id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 messageFilterChain:(id)arg3 registerAsMachService:(bool)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)lostModeMessageFilter;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)recvDispatcher;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)reset;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(id /* block */)arg4;
- (void)setActiveMessageTracker:(id)arg1;
- (void)setAppMonitor:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setBackgroundAppMsgFilter:(id)arg1;
- (void)setLostModeMessageFilter:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClients:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)setXpcWorkQueue:(id)arg1;
- (bool)start;
- (bool)stop;
- (id)uuid;
- (id)xpcClients;
- (id)xpcListener;
- (id)xpcWorkQueue;

@end
