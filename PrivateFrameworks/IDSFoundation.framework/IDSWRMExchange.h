/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSWRMExchange : NSObject {
    unsigned long long  _activeLinkType;
    unsigned long long  _activeRecommendationType;
    unsigned short  _connectCount;
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _delegateBlock;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _isConnected;
    bool  _isNearby;
    bool  _isPaired;
    int  _isPairedNotifyToken;
    IDSWRMMetricContainer * _metrics;
    unsigned long long  _nearbyOverWiFi;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _recommendedLinkType;
    bool  _registered;
    unsigned long long  _reportInterval;
    bool  _shouldSendReport;
    bool  _subscribed;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dispatchAfter:(double)arg1 block:(id /* block */)arg2;
- (bool)_isXPCDictionary:(id)arg1;
- (id)_newMetricReportMessage;
- (id)_newPrefSubscribeMessage:(bool)arg1;
- (id)_newRegisterMessage;
- (id)_newSubscribeMessage;
- (id)_newSubscribeStatusUpdateMessage;
- (id)_newSubscribeStatusUpdateMessage:(bool)arg1 nearby:(bool)arg2;
- (id)_newUnsubscribeMessage;
- (void)_notifyDelegate;
- (bool)_processLinkPreferenceNotificationEvent:(id)arg1;
- (bool)_processMetricsConfigEvent:(id)arg1;
- (void)_processXPCEvent:(id)arg1;
- (bool)_processXPCMessage:(id)arg1;
- (void)_reconnectUntilTimeout;
- (void)_registerWithWRM;
- (void)_resetLocalMetric;
- (void)_restartClient;
- (void)_restartSubscriptionIfNeeded;
- (void)_sendMetricReport;
- (void)_sendMetricReportPeriodically;
- (void)_sendXPCMessage:(id)arg1;
- (bool)_setRecommendedLinkType:(unsigned long long)arg1;
- (void)_setReportInterval:(unsigned long long)arg1;
- (void)_startXPCConnection;
- (void)_stopXPCConnection;
- (void)_submitBlockAsync:(id /* block */)arg1;
- (void)_updateLocalMetric:(id)arg1;
- (void)dealloc;
- (void)handleActiveLinkChange:(unsigned long long)arg1;
- (void)handleNetworkStateChangeUpdate:(bool)arg1 nearby:(bool)arg2;
- (id)init;
- (bool)isBTRecommended;
- (bool)isWiFiRecommended;
- (unsigned long long)recommendedLinkType;
- (void)submitMetric:(id)arg1;
- (void)subscribeForRecommendation:(id)arg1 recommendationType:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)unsubscribeForRecommendation;

@end
