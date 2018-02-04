/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol> {
    <SFAirDropTransferObserverDelegate> * _delegate;
    NSMutableDictionary * _transferIdentifierToTransfer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAirDropTransferObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *transferIdentifierToTransfer;

- (void).cxx_destruct;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (id)delegate;
- (id)exportedInterface;
- (id)init;
- (id)machServiceName;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteObjectInterface;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)removedTransfer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTransferIdentifierToTransfer:(id)arg1;
- (bool)shouldEscapeXpcTryCatch;
- (id)transferIdentifierToTransfer;
- (void)updateActionHandlersOnTransfer:(id)arg1;
- (void)updatedTransfer:(id)arg1;

@end
