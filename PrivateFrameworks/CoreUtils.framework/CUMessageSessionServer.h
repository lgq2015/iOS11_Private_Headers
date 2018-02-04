/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate> {
    id /* block */  _deregisterRequestHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    id /* block */  _registerRequestHandler;
    id /* block */  _sendRequestHandler;
    CUMessageSession * _templateSession;
    struct NSMutableSet { Class x1; } * _xpcConnections;
    NSXPCListenerEndpoint * _xpcEndpoint;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deregisterRequestHandler;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ registerRequestHandler;
@property (nonatomic, copy) id /* block */ sendRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) CUMessageSession *templateSession;

- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)arg1;
- (void)activate;
- (id /* block */)deregisterRequestHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id /* block */)registerRequestHandler;
- (id /* block */)sendRequestHandler;
- (void)setDeregisterRequestHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRegisterRequestHandler:(id /* block */)arg1;
- (void)setSendRequestHandler:(id /* block */)arg1;
- (void)setTemplateSession:(id)arg1;
- (id)templateSession;

@end
