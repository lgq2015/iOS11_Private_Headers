/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate> {
    NSMutableArray * _clientConnections;
    <HMDHTTPServerMessageTransportDelegate> * _delegate;
    NSUUID * _identifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMFHTTPServer * _server;
}

@property (nonatomic, readonly, copy) NSDictionary *TXTRecord;
@property (nonatomic, readonly) NSArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property <HMDHTTPServerMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMFHTTPServer *server;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)TXTRecord;
- (void)__registerPingHandler;
- (void)__registerReceiveMessageHandler;
- (void)__registerSendMessageHandler;
- (void)__registerSendResponseHandler;
- (id)_clientConnectionForDevice:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)addClientConnection:(id)arg1;
- (id)clientConnections;
- (void)confirmDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)devices;
- (id)identifier;
- (id)init;
- (id)initWithServerIdentifier:(id)arg1;
- (id)propertyQueue;
- (void)removeAllClientConnections;
- (void)removeClientConnection:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)server;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (bool)server:(id)arg1 shouldAcceptConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end
