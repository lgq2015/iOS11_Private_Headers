/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCPrivateXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<WCPrivateXPCManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _listenerResumedToken;
    int  _privateServiceShouldConnectToken;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<WCPrivateXPCManagerDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int listenerResumedToken;
@property int privateServiceShouldConnectToken;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)privateClientInterface;
+ (id)privateDaemonInterface;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(id /* block */)arg1;
- (void)handlePingForExtensionBundleID:(id)arg1;
- (id)init;
- (void)isExtensionPrivileged:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)listenerResumedToken;
- (int)privateServiceShouldConnectToken;
- (void)setDelegate:(id)arg1;
- (void)setListenerResumedToken:(int)arg1;
- (void)setPrivateServiceShouldConnectToken:(int)arg1;
- (void)setupConnection;

@end
