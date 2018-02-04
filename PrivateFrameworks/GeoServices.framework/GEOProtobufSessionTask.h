/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {
    bool  _completedAsCancelled;
    <GEODataSessionTask> * _dataTask;
    <GEOProtobufSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSError * _error;
    int  _requestKind;
    unsigned int  _requestTypeCode;
    PBCodable * _response;
    Class  _responseClass;
    GEOProtobufSession * _session;
    unsigned long long  _taskIdentifier;
}

@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) bool completedAsCancelled;
@property (nonatomic) bool completedAsCancelled;
@property (nonatomic, retain) <GEODataSessionTask> *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOProtobufSessionTaskDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) int requestKind;
@property (nonatomic, readonly) unsigned int requestTypeCode;
@property (nonatomic, readonly) PBCodable *response;
@property (nonatomic, retain) PBCodable *response;
@property (nonatomic, readonly) Class responseClass;
@property (nonatomic) GEOProtobufSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long taskIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)clientMetrics;
- (void)completeWithCancelled:(bool)arg1 error:(id)arg2 response:(id)arg3;
- (void)completeWithErrorCode:(long long)arg1;
- (bool)completedAsCancelled;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)dataTask;
- (id)debugDescription;
- (id)delegate;
- (id)delegateQueue;
- (id)error;
- (unsigned long long)incomingPayloadSize;
- (id)init;
- (id)initWithSession:(id)arg1 taskIdentifier:(unsigned long long)arg2 requestTypeCode:(unsigned int)arg3 responseClass:(Class)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 requestKind:(int)arg7;
- (unsigned long long)outgoingPayloadSize;
- (id)parseInnerProtobufFromData:(id)arg1;
- (bool)parsePreambleWithReader:(id)arg1;
- (bool)parseProtocolVersionWithReader:(id)arg1;
- (id)parseResponseFromResponseData:(id)arg1;
- (bool)parseResponseTypeWithReader:(id)arg1;
- (id)remoteAddressAndPort;
- (int)requestKind;
- (unsigned int)requestTypeCode;
- (id)response;
- (Class)responseClass;
- (id)session;
- (void)setCompletedAsCancelled:(bool)arg1;
- (void)setDataTask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)start;
- (unsigned long long)taskIdentifier;
- (void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(id /* block */)arg3;

@end
