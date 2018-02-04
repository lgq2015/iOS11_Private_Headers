/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNetworkSessionProvider : NSObject <NSStreamDelegate, NSURLSessionDelegate, SiriCoreConnectionProvider> {
    id /* block */  _completion_block;
    bool  _connectByPOPEnabled;
    NSString * _connectionId;
    SiriCoreConnectionType * _connectionType;
    <SiriCoreConnectionProviderDelegate> * _delegate;
    bool  _enforceEV;
    NSInputStream * _inputStream;
    int  _interfaceIndex;
    NSString * _interfaceName;
    bool  _isCanceled;
    bool  _isEstablishing;
    bool  _isMPTCP;
    bool  _isReady;
    NSOperationQueue * _opQueue;
    NSObject<OS_dispatch_source> * _openTimer;
    NSOutputStream * _outputStream;
    bool  _prefersWWAN;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned char  _readBuffer;
    NSObject<OS_dispatch_group> * _readGroup;
    unsigned long long  _readWriteCounter;
    NSString * _resolvedHost;
    SAConnectionPolicyRoute * _route;
    NSObject<OS_dispatch_source> * _staleConnectionTimer;
    NSURLSessionStreamTask * _streamTask;
    NSURL * _url;
    NSURLSession * _urlSession;
    bool  _waitingOnReadGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)getMetricsContext:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)_cancelOpenTimer;
- (void)_cancelStaleConnectionTimer;
- (void)_closeWithError:(id)arg1;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (void)_setupOpenTimer;
- (void)_setupStaleConnectionTimer;
- (void)_streamDidBecomeUnviable;
- (id)analysisInfo;
- (void)close;
- (id)connectionType;
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
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (bool)supportsInitialPayload;
- (void)updateConnectionMetrics:(id)arg1 completion:(id /* block */)arg2;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
