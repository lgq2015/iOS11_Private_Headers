/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDirectRequestOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    NSString * _containerName;
    id /* block */  _criticalNodeFailureTest;
    FCNetworkEvent * _networkEvent;
    long long  _networkEventType;
    bool  _operationFailsOnRequestFailure;
    bool  _production;
    id /* block */  _requestCompletionHandler;
    long long  _requestType;
    NSString * _requestUUID;
    NSArray * _requests;
    NSError * _resultError;
    NSMutableDictionary * _resultErrorsByRequestID;
    NSMutableArray * _resultResponses;
    double  _timeoutIntervalForRequest;
}

@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) id /* block */ criticalNodeFailureTest;
@property (nonatomic, retain) FCNetworkEvent *networkEvent;
@property (nonatomic) long long networkEventType;
@property (nonatomic) bool operationFailsOnRequestFailure;
@property (nonatomic) bool production;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic) long long requestType;
@property (nonatomic, copy) NSString *requestUUID;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRequestID;
@property (nonatomic, retain) NSMutableArray *resultResponses;
@property (nonatomic) double timeoutIntervalForRequest;

+ (id)URLSession;
+ (bool)_enableDebugLogLevel;
+ (id)_headersImpactingEdgeCache;

- (void).cxx_destruct;
- (id)_bundleIDToReport;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_mmeClientInfo;
- (void)_processResponseData:(id)arg1;
- (id)_requestBodyData;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)additionalRequestHTTPHeaders;
- (id)containerName;
- (id /* block */)criticalNodeFailureTest;
- (id)generateHTTPRequest;
- (id)init;
- (id)networkEvent;
- (long long)networkEventType;
- (bool)operationFailsOnRequestFailure;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)production;
- (id /* block */)requestCompletionHandler;
- (long long)requestType;
- (id)requestUUID;
- (id)requests;
- (id)resultError;
- (id)resultErrorsByRequestID;
- (id)resultResponses;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setCriticalNodeFailureTest:(id /* block */)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setNetworkEventType:(long long)arg1;
- (void)setOperationFailsOnRequestFailure:(bool)arg1;
- (void)setProduction:(bool)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultErrorsByRequestID:(id)arg1;
- (void)setResultResponses:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (bool)validateOperation;

@end
