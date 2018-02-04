/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPC : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _listener;
    id /* block */  _messageHandler;
}

@property (readonly) bool connected;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (copy) id /* block */ messageHandler;

- (void).cxx_destruct;
- (bool)connected;
- (id)connection;
- (void)handleMessage:(id)arg1 withHandler:(id /* block */)arg2;
- (id)listener;
- (void)logMessageType:(unsigned int)arg1 data:(id)arg2 actionString:(id)arg3;
- (id /* block */)messageHandler;
- (bool)sendMessageWithType:(unsigned int)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)setConnection:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setupMessageHandlingWithQueue:(id)arg1;
- (id)startInListenModeWithQueue:(id)arg1 messageHandler:(id /* block */)arg2;
- (void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)stop;

@end
