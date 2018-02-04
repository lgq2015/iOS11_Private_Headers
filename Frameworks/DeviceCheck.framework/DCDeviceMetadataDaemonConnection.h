/* made by EzioChiu
   Image: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
 */

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection * _conn;
    NSLock * _connLock;
}

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)remoteObjectProxy:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxy:(id /* block */)arg1;

@end
