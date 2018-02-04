/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPXPCConnection : NSObject {
    NSString * _bundleID;
    NSObject<OS_xpc_object> * _conn;
    id  _context;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    id /* block */  _messageHandler;
    bool  _ownsQueue;
}

@property (readonly) NSString *bundleID;
@property (nonatomic, retain) id context;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (readonly) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id /* block */)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)barrier:(id /* block */)arg1;
- (id)bundleID;
- (id)context;
- (void)dealloc;
- (id /* block */)disconnectHandler;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)messageHandler;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (id)serviceName;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)shutdown;

@end
