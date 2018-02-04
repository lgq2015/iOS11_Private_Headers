/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider> {
    NSArray * _attemptedEndpoints;
    bool  _connectByPOPEnabled;
    NSObject<OS_nw_connection> * _connection;
    NSString * _connectionId;
    SiriCoreConnectionType * _connectionType;
    <SiriCoreConnectionProviderDelegate> * _delegate;
    NSObject<OS_nw_endpoint> * _endpoint;
    bool  _enforceEV;
    int  _interfaceIndex;
    bool  _isCanceled;
    bool  _isEstablishing;
    bool  _isMPTCP;
    bool  _isReady;
    id /* block */  _openCompletion;
    NSObject<OS_dispatch_source> * _openTimer;
    bool  _prefersWWAN;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _readWriteCounter;
    NSString * _resolvedHost;
    SAConnectionPolicyRoute * _route;
    NSObject<OS_dispatch_source> * _staleConnectionTimer;
    NSURL * _url;
    bool  _usingTLS;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)getMetricsContext:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_cancelOpenTimer;
- (void)_cancelStaleConnectionTimer;
- (void)_closeWithError:(id)arg1;
- (void)_configureConnection:(id)arg1;
- (bool)_connectByPOPMethod;
- (id)_connectionId;
- (id)_getAttemptedEndpoints;
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(id /* block */)arg2;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (id)_queue;
- (id)_sendBufferBytesRemaining:(id)arg1;
- (id)_setParametersForHost:(const char *)arg1 useTLS:(bool)arg2 initialPayload:(id)arg3;
- (void)_setupOpenTimer;
- (void)_setupStaleConnectionTimer;
- (id)_url;
- (id)analysisInfo;
- (void)close;
- (id)connectionType;
- (void)dealloc;
- (id)delegate;
- (bool)hasActiveConnection;
- (id)headerData;
- (id)initWithQueue:(id)arg1;
- (bool)isCanceled;
- (bool)isEstablishing;
- (bool)isMultipath;
- (bool)isNetworkDownError:(id)arg1;
- (bool)isPeerConnectionError:(id)arg1;
- (bool)isPeerNotNearbyError:(id)arg1;
- (bool)isReady;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(id /* block */)arg4;
- (bool)providerStatsIndicatePoorLinkQuality;
- (void)readData:(id /* block */)arg1;
- (id)resolvedHost;
- (void)setConnectByPOPMethod:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnforceExtendedValidation:(bool)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (bool)shouldFallbackFromError:(id)arg1;
- (bool)shouldFallbackQuickly;
- (bool)supportsInitialPayload;
- (void)updateConnectionMetrics:(id)arg1 completion:(id /* block */)arg2;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
