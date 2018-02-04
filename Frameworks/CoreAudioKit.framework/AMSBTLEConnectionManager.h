/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager * centralManager;
    long long  centralState;
    NSMutableArray * connectedAMSPeripherals;
    NSMutableArray * connectedBTPeripherals;
    NSTimer * connectionTimer;
    <BTLEConnectionTable> * controller;
    bool  isAdvertising;
    NSMutableArray * peripheralList;
    NSTimer * refreshTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *peripheralList;
@property (readonly) Class superclass;

- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (long long)bluetoothState;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)checkAlreadyConnectedPeripherals;
- (void)connectionTimerFired:(id)arg1;
- (void)createPeripheralList;
- (void)dealloc;
- (id)initWithUIController:(id)arg1;
- (bool)isLECapableHardware;
- (void)killTimer;
- (unsigned int)midiDeviceForUUID:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (bool)peripheralIsConnectedCentral:(id)arg1;
- (id)peripheralList;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;
- (void)setUIController:(id)arg1;
- (void)startScan;
- (void)startTimer;
- (void)stopScan;
- (void)timerFired:(id)arg1;
- (void)updateAdvertisingState:(id)arg1;

@end
