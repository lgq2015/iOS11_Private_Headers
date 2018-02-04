/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureRemoteStreamInternal : HMFObject {
    unsigned char  _cipherReadKey;
    unsigned char  _cipherReadNonce;
    unsigned char  _cipherWriteKey;
    unsigned char  _cipherWriteNonce;
    unsigned long long  _clientIdleTimeoutNanos;
    bool  _commitResponded;
    unsigned long long  _commitTimeoutNanos;
    id /* block */  _findPeerHandler;
    id /* block */  _getLocalIdentityHandler;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id /* block */  _internalRequestHandler;
    const char * _label;
    unsigned char  _pairVerifyDone;
    struct PairingSessionPrivate { } * _pairVerifySession;
    NSMutableDictionary * _prepareRequests;
    bool  _prepareResponded;
    id /* block */  _requestHandler;
    unsigned long long  _sendInternalTimeoutNanos;
    unsigned long long  _sendUserTimeoutNanos;
    unsigned long long  _serverIdleTimeoutNanos;
    NSString * _sessionID;
    bool  _started;
    id /* block */  _startedHandler;
    int  _state;
    id /* block */  _stoppedHandler;
    NSMutableDictionary * _transactions;
    id /* block */  _transportSendMessage;
    long long  _type;
    NSObject<OS_dispatch_queue> * _userQueue;
    NSMutableArray * _userTransactions;
}

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy) id /* block */ findPeerHandler;
@property (copy) id /* block */ getLocalIdentityHandler;
@property (copy) id /* block */ internalRequestHandler;
@property (copy) id /* block */ requestHandler;
@property (readonly) double requestTimeout;
@property (copy) id /* block */ startedHandler;
@property (copy) id /* block */ stoppedHandler;
@property (copy) id /* block */ transportSendMessage;

- (void).cxx_destruct;
- (int)_clientHandleCommitResponse:(id)arg1;
- (int)_clientHandlePrepareResponse:(id)arg1;
- (int)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (int)_clientSendCommitRequest:(id)arg1;
- (int)_clientSendPrepareRequest:(id)arg1;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_runStateMachine;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (int)_serverHandleCommitRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (int)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1 options:(id)arg2;
- (int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_serverPairVerifyExchange:(id)arg1 options:(id)arg2;
- (void)_serverRunStateMachine;
- (int)_setupEncryption;
- (void)_start;
- (void)_stop:(int)arg1;
- (void)_transportReceivedMessage:(id)arg1 options:(id)arg2;
- (int)_updateIdleTimer;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)findPeerHandler;
- (id /* block */)getLocalIdentityHandler;
- (id)init;
- (id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6;
- (id /* block */)internalRequestHandler;
- (id /* block */)requestHandler;
- (double)requestTimeout;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setFindPeerHandler:(id /* block */)arg1;
- (void)setGetLocalIdentityHandler:(id /* block */)arg1;
- (void)setInternalRequestHandler:(id /* block */)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setStartedHandler:(id /* block */)arg1;
- (void)setStoppedHandler:(id /* block */)arg1;
- (void)setTransportSendMessage:(id /* block */)arg1;
- (void)start;
- (id /* block */)startedHandler;
- (void)stop;
- (id /* block */)stoppedHandler;
- (void)transportReceivedMessage:(id)arg1 options:(id)arg2;
- (id /* block */)transportSendMessage;

@end
