/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {
    bool  _connected;
    id /* block */  _connectedHandler;
    GKAsyncSocket * _connectionSocket;
    double  _connectionTimeoutInSeconds;
    unsigned int  _currentSequenceNumber;
    NSMutableData * _dataReceived;
    NSMutableData * _dataToSendHoldingQueue;
    double  _heartbeatIntervalInSeconds;
    GKSimpleTimer * _heartbeatTimeoutTimer;
    GKSimpleTimer * _heartbeatTimer;
    NSString * _localServiceName;
    NSMutableArray * _messageReceiptHandlerHoldingQueue;
    NSMutableArray * _messageReceiptHandlerList;
    id /* block */  _receiveDataHandler;
    NSMutableArray * _receivedDataHoldingQueue;
    NSString * _remoteServiceName;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    GKSimpleTimer * _timeoutTimer;
}

@property (nonatomic, copy) id /* block */ connectedHandler;
@property (nonatomic, copy) NSString *localServiceName;
@property (nonatomic, copy) id /* block */ receiveDataHandler;
@property (nonatomic, copy) NSString *remoteServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;

+ (void)checkConstants;
+ (unsigned long long)receiveDataLimit;
+ (unsigned long long)sendDataLimit;

- (void)attachSocketDescriptor:(int)arg1;
- (void)connectToSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;
- (id /* block */)connectedHandler;
- (void)dealloc;
- (id)initWithLocalServiceName:(id)arg1;
- (void)invalidate;
- (id)localServiceName;
- (id /* block */)receiveDataHandler;
- (id)remoteServiceName;
- (void)sendData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setConnectedHandler:(id /* block */)arg1;
- (void)setLocalServiceName:(id)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg1;
- (void)setRemoteServiceName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (bool)shouldDecideAboutConnection;
- (void)syncAcceptedConnection;
- (void)syncCloseConnectionNow;
- (void)syncConnected:(id)arg1;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (id)syncQueue;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendAccept;
- (void)syncSendHello;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (bool)syncSetupNewSocket;
- (id)targetQueue;
- (void)timeout:(id)arg1;

@end
