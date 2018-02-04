/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
 */

@interface PPDiscoveryManager : NSObject <CBCentralManagerDelegate> {
    bool  _bluetoothIsScanning;
    CBCentralManager * _central;
    <PPDiscoveryManagerDelegate> * _discoveryDelegate;
    NSObject<OS_dispatch_queue> * _discoveryQueue;
    long long  _signalLimitOverride;
}

@property (nonatomic) bool bluetoothIsScanning;
@property (nonatomic, retain) CBCentralManager *central;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PPDiscoveryManagerDelegate> *discoveryDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long signalLimitOverride;
@property (readonly) Class superclass;

+ (bool)isBluetoothConnected:(long long)arg1;
+ (bool)isBluetoothPoweredOn:(long long)arg1;
+ (id)sharedDiscoveryManager;

- (void).cxx_destruct;
- (void)begin;
- (void)beginDiscovery;
- (bool)bluetoothIsScanning;
- (id)central;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)discoveryDelegate;
- (id)discoveryQueue;
- (void)end;
- (void)forceEndDiscovery;
- (id)init;
- (void)setBluetoothIsScanning:(bool)arg1;
- (void)setCentral:(id)arg1;
- (void)setDiscoveryDelegate:(id)arg1;
- (void)setDiscoveryQueue:(id)arg1;
- (void)setSignalLimitOverride:(long long)arg1;
- (long long)signalLimitOverride;
- (void)updateFromBTState:(long long)arg1;

@end
