/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    NSData * _advertisingAddress;
    CBXpcConnection * _connection;
    CBPairingAgent * _pairingAgent;
    long long  _state;
}

@property (nonatomic, copy) NSData *advertisingAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) CBPairingAgent *sharedPairingAgent;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisingAddress;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (void)dealloc;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)initInternal;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)peerWithInfo:(id)arg1;
- (bool)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (bool)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setAdvertisingAddress:(id)arg1;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (id)sharedPairingAgent;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (long long)state;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end
