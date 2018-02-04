/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCSession : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
    NFWeakReference * _delegate;
    NFWeakReference * _exportedObject;
    NSXPCInterface * _exportedObjectInterface;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteObjectInterface;
}

- (bool)_connectIfNeeded;
- (id)_connection;
- (id)_connectionLock;
- (id)_exportedObjectClassName;
- (void)_invalidate;
- (void)_setConnection:(id)arg1;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
