/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEClient : NSObject <WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    WPAWDL * _wpAirDrop;
    NSMutableSet * _wpAirDropDelegates;
    WPNearby * _wpNearby;
    NSMutableSet * _wpNearbyDelegates;
    WPPairing * _wpPairing;
    NSMutableSet * _wpPairingDelegates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)addAirDropDelegate:(id)arg1;
- (id)addNearbyDelegate:(id)arg1;
- (id)addPairingDelegate:(id)arg1;
- (void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (void)awdlAdvertisingPending:(id)arg1;
- (void)awdlDidUpdateState:(id)arg1;
- (void)awdlStartedAdvertising:(id)arg1;
- (void)awdlStartedScanning:(id)arg1;
- (id)init;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
- (void)pairingDidUpdateState:(id)arg1;
- (void)pairingStartedScanning:(id)arg1;
- (void)pairingStoppedScanning:(id)arg1;
- (void)removeAirDropDelegate:(id)arg1;
- (void)removeNearbyDelegate:(id)arg1;
- (void)removePairingDelegate:(id)arg1;

@end
