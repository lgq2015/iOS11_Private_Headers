/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPXPCServer : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _connectionsQueue;
    id /* block */  _defaultMessageHandler;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSMutableDictionary * _handlerMap;
    double  _idleTimerInterval;
    bool  _shutdown;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, copy) id /* block */ defaultMessageHandler;
@property (nonatomic, copy) id /* block */ disconnectHandler;

- (void).cxx_destruct;
- (void)_handleNewConnection:(id)arg1;
- (id /* block */)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)dealloc;
- (id /* block */)defaultMessageHandler;
- (id /* block */)disconnectHandler;
- (id)initListenerWithServiceName:(id)arg1;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)setDefaultMessageHandler:(id /* block */)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id /* block */)arg2;
- (bool)shutdown;
- (void)startListening;

@end
