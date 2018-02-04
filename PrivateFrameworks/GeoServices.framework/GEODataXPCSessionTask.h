/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataXPCSessionTask : NSObject <GEODataSessionTask, GEODataXPCSessionTaskQueueTask, GEOStateCapturing> {
    NSObject<OS_os_activity> * _activity;
    bool  _canceled;
    <GEODataSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didNotifyDelegate;
    double  _endTime;
    NSError * _error;
    float  _priority;
    NSData * _receivedData;
    GEODataRequest * _request;
    GEODataXPCSession * _session;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    double  _startTime;
    unsigned long long  _stateCaptureHandle;
    unsigned int  _taskIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEODataSessionTaskDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didNotifyDelegate;
@property (readonly) double elapsedTime;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool failedDueToCancel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property float priority;
@property (nonatomic, readonly) bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) GEODataRequest *request;
@property (nonatomic, readonly) GEODataXPCSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int taskIdentifier;
@property (nonatomic, readonly) unsigned int taskQueue;
@property (nonatomic, readonly) float taskQueuePriority;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcRequest;
@property (nonatomic, readonly) unsigned long long xpcRequestIdentifier;

- (void).cxx_destruct;
- (id)activity;
- (void)cancel;
- (id)captureStateWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)clientMetrics;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)didNotifyDelegate;
- (double)elapsedTime;
- (id)error;
- (bool)failedDueToCancel;
- (unsigned long long)incomingPayloadSize;
- (id)init;
- (id)initWithSession:(id)arg1 request:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (bool)isCancelled;
- (void)notifyDelegate;
- (unsigned long long)outgoingPayloadSize;
- (float)priority;
- (bool)processFailedReplyXPCDictionary:(id)arg1;
- (bool)processReplyXPCDictionary:(id)arg1;
- (void)processResult:(int)arg1 xpcReply:(id)arg2;
- (void)processTaskCancelled;
- (void)processXPCReply:(id)arg1;
- (bool)protocolBufferHasPreamble;
- (id)receivedData;
- (id)remoteAddressAndPort;
- (id)request;
- (id)session;
- (id)sessionIsolation;
- (void)setDidNotifyDelegate:(bool)arg1;
- (void)setPriority:(float)arg1;
- (void)start;
- (unsigned int)taskIdentifier;
- (unsigned int)taskQueue;
- (float)taskQueuePriority;
- (unsigned long long)updateXPCRequestIdentifier;
- (id)xpcRequest;
- (unsigned long long)xpcRequestIdentifier;

@end
