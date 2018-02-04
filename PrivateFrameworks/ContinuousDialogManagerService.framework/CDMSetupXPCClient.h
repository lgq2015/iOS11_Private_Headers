/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
 */

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (id)_remoteObjectProxy;
- (void)connect;
- (void)disconnect;
- (void)getClientFlowStatusWithReply:(id /* block */)arg1;
- (void)getNLAssetStatusForType:(id)arg1 withReply:(id /* block */)arg2;
- (id)init;
- (void)invalidateClientFlowCacheWithCompletion:(id /* block */)arg1;

@end
