/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFServiceSession : SFSession {
    CUPairingSession * _pairSetupSession;
    unsigned int  _pairSetupXID;
    CUPairingSession * _pairVerifySession;
    unsigned long long  _sendLastTicks;
    SFService * _service;
}

@property (nonatomic) unsigned long long sendLastTicks;
@property (nonatomic, retain) SFService *service;

- (void).cxx_destruct;
- (void)_hearbeatTimer;
- (int)_pairSetupCompleted:(int)arg1;
- (int)_pairVerifyCompleted:(int)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_receivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_receivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)_sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (void)activate;
- (void)clearEncryptionInfo;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)pairSetup:(id)arg1 start:(bool)arg2;
- (void)pairVerify:(id)arg1 start:(bool)arg2;
- (bool)pairingContainsACL:(id)arg1;
- (id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2;
- (void)receivedEncryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)receivedStartRequest:(id)arg1;
- (void)receivedUnencryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)sendEncryptedObject:(id)arg1;
- (void)sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (unsigned long long)sendLastTicks;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (id)service;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4;
- (void)setSendLastTicks:(unsigned long long)arg1;
- (void)setService:(id)arg1;

@end
