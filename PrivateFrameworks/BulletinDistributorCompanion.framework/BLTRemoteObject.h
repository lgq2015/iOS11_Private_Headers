/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _connectionStatusQueue;
    <BLTAbstractIDSDevice> * _defaultPairedDevice;
    bool  _full;
    NSMutableDictionary * _idsFileIDToResponseHandler;
    NSObject<OS_dispatch_queue> * _idsQueue;
    NSMutableDictionary * _idsRequestMessageTypeToSelector;
    NSMutableDictionary * _idsSendIDToCompletionHandler;
    NSMutableDictionary * _idsSendIDToResponseHandler;
    unsigned long long  _lastKnownConnectionStatus;
    double  _lastTimeRaisedBadIDSProtobuf;
    bool  _pairedDeviceReady;
    BLTPBProtobufSequenceNumberManager * _sequenceNumberManager;
    NSLock * _sequenceNumberSendLock;
    <BLTAbstractIDSService> * _service;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastKnownConnectionStatus;
@property (getter=isPairedDeviceReady) bool pairedDeviceReady;
@property (nonatomic, readonly) BLTPBProtobufSequenceNumberManager *sequenceNumberManager;
@property (nonatomic, readonly) <BLTAbstractIDSService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_callSendCompletionHandlerWithSuccess:(bool)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_deviceConnectionStatusChanged:(id)arg1;
- (void)_handleDebugException;
- (void)_handleNewSessionState:(unsigned long long)arg1;
- (bool)_idsQueueCallSendCompletionHandlerWithSuccess:(bool)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_queueHandleIDSProtobuf:(id)arg1;
- (void)_queuePerformSend:(id /* block */)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8;
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8 didQueue:(id /* block */)arg9;
- (void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(bool)arg1;
- (void)_removeAndHandleResponseHandler:(id)arg1;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned long long)arg2;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(bool)arg2 sessionState:(unsigned long long*)arg3;
- (void)_sendAssertForSession;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8 didQueue:(id /* block */)arg9;
- (bool)_sequenceErrorDidHappenAndHandled:(long long)arg1 service:(id)arg2 incomingIdentifier:(id)arg3;
- (void)_setStandaloneTestModeEnabled:(bool)arg1;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3;
- (void)_updateConnectionStatus;
- (void)_updateConnectionStatusWithResetDefaulteDevice:(bool)arg1;
- (id)_wrapError:(id)arg1 identifier:(id)arg2;
- (id)clientQueue;
- (unsigned long long)connectionStatus;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleIDSProtobuf:(id)arg1;
- (void)handleIncomingMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (bool)isPairedDeviceReady;
- (unsigned long long)lastKnownConnectionStatus;
- (void)registerProtobufHandlers;
- (void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 responseHandlers:(id)arg4 didSend:(id /* block */)arg5 didQueue:(id /* block */)arg6;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(id /* block */)arg4 didQueue:(id /* block */)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(id /* block */)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id /* block */)arg6 andResponse:(id /* block */)arg7;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7;
- (id)sequenceNumberManager;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setLastKnownConnectionStatus:(unsigned long long)arg1;
- (void)setPairedDeviceReady:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
