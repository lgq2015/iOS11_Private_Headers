/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {
    IKJSInspectorNetworkAgent * _agent;
    RWIProtocolNetworkDomainEventDispatcher * _dispatcher;
    NSString * _frameId;
    NSString * _loaderId;
    NSMutableDictionary * _requestURLMap;
    NSMutableDictionary * _responseBodyDataMap;
}

@property (nonatomic, readonly) IKJSInspectorNetworkAgent *agent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *dispatcher;
@property (nonatomic, retain) NSString *frameId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *loaderId;
@property (nonatomic, readonly) NSMutableDictionary *requestURLMap;
@property (nonatomic, readonly) NSMutableDictionary *responseBodyDataMap;
@property (readonly) Class superclass;

+ (long long)_protocolResourceTypeForType:(unsigned long long)arg1;
+ (id)normalizedRequestIdWithLoaderId:(id)arg1 requestId:(id)arg2;
+ (id)requestWithURLRequest:(id)arg1;
+ (id)responseWithURLResponse:(id)arg1 timingData:(id)arg2 referenceStartDate:(id)arg3;
+ (id)timingWithTimingData:(id)arg1 referenceStartDate:(id)arg2;

- (void).cxx_destruct;
- (id)agent;
- (void)dataReceived:(id)arg1 withIdentifier:(id)arg2;
- (id)dispatcher;
- (id)frameId;
- (id)initWithNetworkAgent:(id)arg1 dispatcher:(id)arg2;
- (id)loaderId;
- (void)loadingCompletedFromCacheWithResponseBody:(id)arg1 mimeType:(id)arg2 resourceType:(unsigned long long)arg3 forIdentifier:(id)arg4;
- (void)loadingCompletedWithResponseBody:(id)arg1 forIdentifier:(id)arg2;
- (void)loadingError:(id)arg1 withIdentifier:(id)arg2;
- (void)request:(id)arg1 willBeSentWithIdentifier:(id)arg2;
- (id)requestURLMap;
- (id)responseBodyDataMap;
- (void)responseReceived:(id)arg1 timingData:(id)arg2 resourceType:(unsigned long long)arg3 withIdentifier:(id)arg4;
- (void)setFrameId:(id)arg1;
- (void)setLoaderId:(id)arg1;

@end