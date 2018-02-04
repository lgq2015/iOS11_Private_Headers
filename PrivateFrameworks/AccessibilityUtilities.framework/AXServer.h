/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXServer : NSObject {
    AXDispatchTimer * _assertionRetryTimer;
    NSMutableArray * _assertionWorkBacklog;
    NSObject<OS_dispatch_queue> * _assertionWorkQueue;
    AXIPCClient * _client;
    AXIPCServer * _server;
    NSString * _serverIdentifier;
    bool  _shouldRegisterClientCallbackSourceOnMainRunloop;
}

@property (nonatomic, retain) AXDispatchTimer *assertionRetryTimer;
@property (nonatomic, retain) NSMutableArray *assertionWorkBacklog;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (nonatomic, retain) AXIPCClient *client;
@property (nonatomic, retain) AXIPCServer *server;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic) bool shouldRegisterClientCallbackSourceOnMainRunloop;

- (void).cxx_destruct;
- (bool)_connectIfNecessary;
- (void)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_initializeAssertionBookkeeping;
- (void)_processAssertionBacklog;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)assertionRetryTimer;
- (id)assertionWorkBacklog;
- (id)assertionWorkQueue;
- (id)client;
- (void)dealloc;
- (id)init;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(id /* block */)arg3;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (bool)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (bool)sendSimpleMessageWithResult:(id)arg1;
- (id)server;
- (id)serverIdentifier;
- (void)setAssertionRetryTimer:(id)arg1;
- (void)setAssertionWorkBacklog:(id)arg1;
- (void)setAssertionWorkQueue:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(bool)arg1;
- (bool)shouldRegisterClientCallbackSourceOnMainRunloop;

@end
