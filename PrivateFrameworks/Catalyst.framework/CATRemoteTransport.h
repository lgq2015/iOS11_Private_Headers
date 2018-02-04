/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate> {
    <CATRemoteTransportDelegate> * _remoteTransportDelegate;
    CATRemoteConnection * mConnection;
    bool  mConnectionHasOpened;
    NSMutableDictionary * mOperationByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __SecTrust { }*peerTrust;
@property (nonatomic) <CATRemoteTransportDelegate> *remoteTransportDelegate;
@property (readonly) Class superclass;

+ (void)createRemoteTransportPairWithTransport:(id*)arg1 andTransport:(id*)arg2;
+ (id)new;

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)connectionDidSecure:(id)arg1;
- (void)connectionWillSecure:(id)arg1;
- (id)init;
- (id)initWithRemoteConnection:(id)arg1;
- (void)invalidateConnection;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (struct __SecTrust { }*)peerTrust;
- (id)remoteTransportDelegate;
- (void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2;
- (void)resumeConnection;
- (void)setName:(id)arg1;
- (void)setRemoteTransportDelegate:(id)arg1;
- (void)suspendConnection;

@end
