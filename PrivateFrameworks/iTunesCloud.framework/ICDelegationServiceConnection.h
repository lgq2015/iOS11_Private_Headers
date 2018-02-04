/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationServiceConnection : NSObject <ICDelegationServicePairingSessionDelegate, MSVMessageParserDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    long long  _connectionRole;
    <ICDelegationServiceConnectionDelegate> * _delegate;
    bool  _isPaired;
    bool  _isStarted;
    MSVMessageParser * _messageParser;
    unsigned int  _nextRequestID;
    ICDelegationServicePairingSession * _pairingSession;
    NSMutableDictionary * _pendingRequestIDToRequestContext;
    ICDelegationServiceSecuritySettings * _securitySettings;
    MSVStreamReader * _streamReader;
    NSObject<OS_dispatch_queue> * _streamReaderQueue;
    MSVStreamWriter * _streamWriter;
    NSObject<OS_dispatch_queue> * _streamWriterQueue;
}

@property (nonatomic, readonly) long long connectionRole;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICDelegationServiceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPendingRequestsWithError:(id)arg1;
- (unsigned int)_nextRequestUniqueID;
- (void)_sendMessage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_streamDidClose;
- (void)_streamDidParseMessage:(id)arg1;
- (void)_streamEncounteredError:(id)arg1;
- (void)close;
- (long long)connectionRole;
- (void)dealloc;
- (id)delegate;
- (void)delegationServicePairingSession:(id)arg1 sendData:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithConnectionRole:(long long)arg1 inputStream:(id)arg2 outputStream:(id)arg3 securitySettings:(id)arg4;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (id)securitySettings;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
