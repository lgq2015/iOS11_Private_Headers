/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteMessageLink : ATMessageLink <ATSocketDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _completionHandlersByRequestID;
    NSMutableDictionary * _completionHandlersByResponseID;
    int  _endpointType;
    NSString * _guid;
    NSObject<OS_dispatch_queue> * _handlerAccessQueue;
    NSString * _identifier;
    long long  _idleTimeoutExceptionCount;
    bool  _initialized;
    long long  _keepAliveExceptionCount;
    double  _lastActivityTime;
    unsigned int  _nextMessageID;
    NSHashTable * _observers;
    bool  _open;
    NSMapTable * _outputStreamsToInputStreams;
    ATMessageParser * _parser;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _receivedRequestsByID;
    NSMutableDictionary * _receivedResponsesByID;
    NSMutableDictionary * _requestHandlersByDataClass;
    NSObject<OS_dispatch_source> * _requestTimeoutTimer;
    NSMutableDictionary * _requestWritersByID;
    NSMutableDictionary * _responseWritersByID;
    NSMutableDictionary * _sentRequestsByID;
    ATSignatureProvider * _signatureProvider;
    ATSocket * _socket;
    NSMutableDictionary * _streamReadersByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpointType;
@property (nonatomic, readonly, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInitialized, nonatomic) bool initialized;
@property (nonatomic) double lastActivityTime;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) ATSignatureProvider *signatureProvider;
@property (nonatomic, readonly) ATSocket *socket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkMessageTimeouts;
- (id)_getObservers;
- (void)_invokeCompletionHandlerForResponseID:(unsigned long long)arg1 withError:(id)arg2;
- (unsigned int)_nextRequestID;
- (void)_prepareStreamReaderForMessage:(id)arg1 withProgress:(id /* block */)arg2;
- (void)_processIncomingDataRequest:(id)arg1;
- (void)_processIncomingDataResponse:(id)arg1;
- (void)_processIncomingMessage:(id)arg1;
- (void)_processIncomingPartialResponse:(id)arg1;
- (void)_processIncomingRequest:(id)arg1;
- (void)_processIncomingResponse:(id)arg1;
- (bool)_sendMessage:(id)arg1 error:(id*)arg2;
- (void)addKeepAliveException;
- (void)addObserver:(id)arg1;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)addTimeoutException;
- (void)close;
- (void)dealloc;
- (id)description;
- (int)endpointType;
- (id)guid;
- (id)identifier;
- (bool)idleTimeoutEnabled;
- (id)initWithSocket:(id)arg1;
- (bool)isInitialized;
- (bool)isOpen;
- (double)lastActivityTime;
- (id)observers;
- (bool)open;
- (void)removeKeepAliveException;
- (void)removeObserver:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)removeTimeoutException;
- (void)sendPartialResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setEndpointType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setLastActivityTime:(double)arg1;
- (void)setObservers:(id)arg1;
- (void)setSignatureProvider:(id)arg1;
- (id)signatureProvider;
- (id)socket;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(id)arg1;

@end
