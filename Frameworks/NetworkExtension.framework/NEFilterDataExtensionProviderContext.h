/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterDataExtensionProviderHostProtocol, NEFilterDataExtensionProviderProtocol> {
    NSDictionary * _URLAppendStringMap;
    NSMutableDictionary * _browserFlows;
    NSMutableDictionary * _channelFlows;
    NSObject<OS_xpc_object> * _clientListener;
    bool  _controlProviderExists;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSMutableArray * _pendingConnections;
    NSDictionary * _remediationMap;
    NSMutableArray * _socketExceptions;
    NSMutableDictionary * _socketFlows;
    NSObject<OS_dispatch_source> * _source;
}

@property (retain) NSDictionary *URLAppendStringMap;
@property (retain) NSMutableDictionary *browserFlows;
@property (retain) NSMutableDictionary *channelFlows;
@property (retain) NSObject<OS_xpc_object> *clientListener;
@property bool controlProviderExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSMutableArray *pendingConnections;
@property (retain) NSDictionary *remediationMap;
@property (nonatomic, retain) NSMutableArray *socketExceptions;
@property (retain) NSMutableDictionary *socketFlows;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)URLAppendStringMap;
- (void)acceptNewClientConnection:(id)arg1;
- (bool)blessClient:(id)arg1;
- (id)browserFlows;
- (void)channelContentFilterWriteMessageForFlowUUID:(id)arg1 client_connection:(id)arg2 xpc_object_t:(id)arg3 drop:(bool)arg4 inboundPassOffset:(unsigned long long)arg5 inboundPeekOffset:(unsigned long long)arg6 outboundPassOffset:(unsigned long long)arg7 outboundPeekOffset:(unsigned long long)arg8;
- (id)channelFlows;
- (id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3;
- (id)clientListener;
- (void)closeBrowserFilterFlow:(id)arg1 forUUID:(id)arg2;
- (void)closeChannelFlow:(id)arg1 flowUUID:(id)arg2;
- (void)closePendingConnections;
- (void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2;
- (bool)controlProviderExists;
- (void)dispose;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleChannelMessageFlowFinish:(id)arg1 forConnection:(id)arg2;
- (void)handleChannelMessageMoreData:(id)arg1 forConnection:(id)arg2;
- (void)handleChannelSourceEventAttachComplete:(id)arg1 flowUUID:(id)arg2 sendNewFlowReply:(id /* block */)arg3;
- (void)handleClientMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewChannelFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessageComplete:(id)arg1 forConnection:(id)arg2 flow:(id)arg3 flowUUID:(const char *)arg4 direction:(long long)arg5;
- (void)handleRemediationMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleRulesChanged;
- (void)handleSocketSourceEventAttachComplete:(id)arg1 socketID:(unsigned long long)arg2 sendNewFlowReply:(id /* block */)arg3;
- (void)handleSocketSourceEventWithSocket:(int)arg1;
- (id)listenerEndpoint;
- (id)pendingConnections;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (id)remediationMap;
- (void)report:(id)arg1;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3;
- (id)sanitizeRemediationButtonText:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)setBrowserFlows:(id)arg1;
- (void)setChannelFlows:(id)arg1;
- (void)setClientListener:(id)arg1;
- (void)setControlProviderExists:(bool)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setPendingConnections:(id)arg1;
- (void)setRemediationMap:(id)arg1;
- (void)setSocketExceptions:(id)arg1;
- (void)setSocketFlows:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setURLAppendStringMap:(id)arg1;
- (void)setupSocketContentFilterWithControlSocket:(int)arg1;
- (void)setupSocketSourceWithControlSocket:(int)arg1;
- (bool)socketContentFilterWriteMessageWithControlSocket:(int)arg1 socketID:(unsigned long long)arg2 drop:(bool)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7;
- (id)socketExceptions;
- (id)socketFlows;
- (id)source;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;
- (void)teardownSocketSource;
- (id)trimURLFromFlow:(id)arg1;

@end
