/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _clients;
    NSXPCListener * _connectionListener;
    id /* block */  _errorHandler;
    MTXPCConnectionInfo * _info;
    NSString * _requiredEntitlement;
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) NSMutableSet *clients;
@property (nonatomic, readonly) NSArray *connectedClients;
@property (nonatomic, retain) NSXPCListener *connectionListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTXPCConnectionInfo *info;
@property (nonatomic, copy) NSString *requiredEntitlement;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_connectedClients;
- (id)_currentClientForConnection:(id)arg1;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_performBlockOnClientInfos:(id /* block */)arg1 excludingClient:(id)arg2;
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;
- (id)clients;
- (id)connectedClients;
- (id)connectionListener;
- (id)currentClient;
- (void)dealloc;
- (id)description;
- (id /* block */)errorHandler;
- (id)info;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performBlockOnAllClients:(id /* block */)arg1;
- (void)performBlockOnAllClients:(id /* block */)arg1 excludingClient:(id)arg2;
- (void)performBlockOnAllClients:(id /* block */)arg1 excludingCurrent:(bool)arg2;
- (void)performBlockOnClientInfos:(id /* block */)arg1 excludeCurrent:(bool)arg2;
- (void)performBlockOnCurrentClient:(id /* block */)arg1;
- (void)removeClientConnection:(id)arg1;
- (id)requiredEntitlement;
- (id)serializer;
- (void)setClients:(id)arg1;
- (void)setConnectionListener:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (void)setRequiredEntitlement:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
