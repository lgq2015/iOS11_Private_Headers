/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer {
    HAPAccessoryServerBrowserBTLE * _browser;
    unsigned char  _connectReason;
    unsigned char  _connectionIdleTime;
    unsigned long long  _hapBLEProtocolVersion;
    bool  _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    unsigned long long  _resumeSessionID;
    bool  _stateChanged;
    NSNumber * _stateNumber;
}

@property (nonatomic, readonly) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectReason;
@property (nonatomic) unsigned char connectionIdleTime;
@property (nonatomic, readonly) unsigned long long hapBLEProtocolVersion;
@property (nonatomic) bool notifyingCharacteristicUpdated;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (nonatomic) bool stateChanged;
@property (nonatomic, retain) NSNumber *stateNumber;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;

- (void).cxx_destruct;
- (id)browser;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned char)connectReason;
- (unsigned char)connectionIdleTime;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;
- (long long)linkType;
- (void)notifyDelegateUdpatedStateNumber;
- (bool)notifyingCharacteristicUpdated;
- (id)peripheral;
- (unsigned long long)resumeSessionID;
- (void)setConnectReason:(unsigned char)arg1;
- (void)setConnectionIdleTime:(unsigned char)arg1;
- (void)setNotifyingCharacteristicUpdated:(bool)arg1;
- (void)setStateChanged:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (bool)stateChanged;
- (id)stateNumber;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)updatePeripheral:(id)arg1;
- (bool)updatePeripheralIdentifier:(id*)arg1;
- (bool)updateResumeSessionID:(unsigned long long)arg1;

@end
