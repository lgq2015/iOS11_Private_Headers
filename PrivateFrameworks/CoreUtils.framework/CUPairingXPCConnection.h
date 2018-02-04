/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface> {
    CUPairingDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _monitoring;
    bool  _pmEntitledDeleteIdentity;
    bool  _pmEntitledHomeKit;
    bool  _pmEntitledRead;
    bool  _pmEntitledRemoveAdmin;
    bool  _pmEntitledRemovePeer;
    bool  _pmEntitledWrite;
    NSXPCConnection * _xpcCnx;
}

- (void).cxx_destruct;
- (int)_entitled:(id)arg1 state:(bool*)arg2 label:(id)arg3;
- (void)connectionInvalidated;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)showWithCompletion:(id /* block */)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;

@end
