/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATXPCConnection : NSObject {
    bool  _assertionHeld;
    NSObject<OS_xpc_object> * _conn;
    id  _context;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    id /* block */  _lockdownHandler;
    id /* block */  _messageHandler;
    NSMutableSet * _outstandingMessages;
}

@property (nonatomic) bool assertionHeld;
@property (nonatomic, retain) id context;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, copy) id /* block */ lockdownHandler;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (readonly) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleLockdownMessage:(void*)arg1;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (unsigned long long)_outstandingMessages;
- (void)_registerMessage:(id)arg1;
- (void)_removeMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id /* block */)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (bool)assertionHeld;
- (id)context;
- (void)dealloc;
- (id /* block */)disconnectHandler;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)lockdownHandler;
- (id /* block */)messageHandler;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (id)serviceName;
- (void)setAssertionHeld:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setLockdownHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)shutdown;

@end
