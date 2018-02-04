/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {
    NSString * _aceHost;
    SiriCoreSiriBackgroundConnection * _activeBackgroundConnection;
    NSObject<OS_dispatch_group> * _activeConnectionGroup;
    NSString * _assistantIdentifier;
    NSMutableArray * _connMethodUsedHistory;
    NSString * _connectionId;
    SAConnectionPolicy * _connectionPolicy;
    NSMutableSet * _deadBackgroundConnections;
    <SiriCoreSiriConnectionDelegate> * _delegate;
    bool  _deviceIsInWalkaboutExperimentGroup;
    NWPathEvaluator * _evaluator;
    bool  _imposePolicyBan;
    bool  _isCanceled;
    bool  _isCanceledInternal;
    NSString * _languageCode;
    NSString * _peerAssistantIdentifier;
    Class  _peerProviderClass;
    NSString * _peerType;
    NSString * _peerVersion;
    NSMutableSet * _pendingBackgroundConnections;
    bool  _prefersWWAN;
    NSString * _productTypePrefix;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _savedPortForEvaluator;
    NSString * _savedURLHostForEvaluator;
    NSMutableSet * _scheduledRoutes;
    bool  _sendPings;
    bool  _siriConnectionUsesPeerManagedSync;
    bool  _skipEdge;
    bool  _skipPeer;
    NSError * _skipPeerError;
    double  _timeout;
    NSURL * _url;
    bool  _usesProxyConnection;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) SAConnectionPolicy *connectionPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriCoreSiriConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceIsInWalkaboutExperimentGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool imposePolicyBan;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic, retain) Class peerProviderClass;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic) bool prefersWWAN;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic) bool siriConnectionUsesPeerManagedSync;
@property (nonatomic) bool skipEdge;
@property (nonatomic) bool skipPeer;
@property (nonatomic, copy) NSError *skipPeerError;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool usesProxyConnection;

- (void).cxx_destruct;
- (void)_accessPotentiallyActiveConnections:(id /* block */)arg1;
- (id)_activeOrAnyPendingConnection;
- (id)_connectionInfoForRoute:(id)arg1;
- (void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(id /* block */)arg2;
- (id)_pathEvaluator:(id)arg1 port:(id)arg2;
- (void)_recordConnectionMethodForMetrics:(id)arg1;
- (void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2;
- (void)_startBackgroundConnectionWithRoute:(id)arg1;
- (void)_waitForActiveConnection:(id /* block */)arg1;
- (id)aceHost;
- (id)analysisInfo;
- (id)assistantIdentifier;
- (void)barrier:(id /* block */)arg1;
- (void)cancelSynchronously:(bool)arg1 completion:(id /* block */)arg2;
- (id)connectionId;
- (id)connectionPolicy;
- (void)dealloc;
- (id)delegate;
- (bool)deviceIsInWalkaboutExperimentGroup;
- (void)getAnalysisInfo:(id /* block */)arg1;
- (void)getConnectionMetrics:(id /* block */)arg1;
- (bool)imposePolicyBan;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)languageCode;
- (id)peerAssistantIdentifier;
- (Class)peerProviderClass;
- (id)peerType;
- (id)peerVersion;
- (bool)prefersWWAN;
- (void)probeConnection;
- (id)productTypePrefix;
- (void)sendCommand:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)setAceHost:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(bool)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setPeerAssistantIdentifier:(id)arg1;
- (void)setPeerProviderClass:(Class)arg1;
- (void)setPeerType:(id)arg1;
- (void)setPeerVersion:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProductTypePrefix:(id)arg1;
- (void)setSendPings:(bool)arg1;
- (void)setSiriConnectionUsesPeerManagedSync:(bool)arg1;
- (void)setSkipEdge:(bool)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerError:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
- (void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
- (void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
- (void)siriBackgroundConnectionDidClose:(id)arg1;
- (bool)siriConnectionUsesPeerManagedSync;
- (bool)skipEdge;
- (bool)skipPeer;
- (id)skipPeerError;
- (void)start;
- (double)timeout;
- (id)url;
- (bool)usesProxyConnection;

@end
