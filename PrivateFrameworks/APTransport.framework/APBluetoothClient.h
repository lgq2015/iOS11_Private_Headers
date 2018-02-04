/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate> {
    <APBluetoothClientDelegate> * _delegate;
    bool  _isFirstCycle;
    bool  _isSourcePresenceAdvertising;
    bool  _isStartAdvertisingPending;
    bool  _isStopAdvertisingPending;
    NSMutableDictionary * _nearbyDevices;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _sourcePresenceAdvertisingData;
    NSObject<OS_dispatch_source> * _sourcePresenceAdvertisingTimer;
    NSObject<OS_dispatch_source> * _sourcePresenceWaitingTimer;
    WPAirPlaySolo * _wpAirPlaySolo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFirstCycle;
@property (nonatomic) bool isSourcePresenceAdvertising;
@property (nonatomic) bool isStartAdvertisingPending;
@property (nonatomic) bool isStopAdvertisingPending;
@property (nonatomic, retain) NSMutableDictionary *nearbyDevices;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSDictionary *sourcePresenceAdvertisingData;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) WPAirPlaySolo *wpAirPlaySolo;

- (void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
- (void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloAdvertisingPending:(id)arg1;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isFirstCycle;
- (bool)isSourcePresenceAdvertising;
- (bool)isStartAdvertisingPending;
- (bool)isStopAdvertisingPending;
- (id)nearbyDevices;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setIsFirstCycle:(bool)arg1;
- (void)setIsSourcePresenceAdvertising:(bool)arg1;
- (void)setIsStartAdvertisingPending:(bool)arg1;
- (void)setIsStopAdvertisingPending:(bool)arg1;
- (void)setNearbyDevices:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSourcePresenceAdvertisingData:(id)arg1;
- (void)setSourcePresenceAdvertisingTimer:(id)arg1;
- (void)setSourcePresenceWaitingTimer:(id)arg1;
- (void)setWpAirPlaySolo:(id)arg1;
- (id)sourcePresenceAdvertisingData;
- (id)sourcePresenceAdvertisingTimer;
- (id)sourcePresenceWaitingTimer;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)startSourcePresenceAdvertisingCycle;
- (void)startSourcePresenceConnectionlessAdvertising;
- (void)startSourcePresenceWaitingCycle;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (long long)state;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)stopSourcePresenceAdvertisingCycle;
- (void)stopSourcePresenceConnectionlessAdvertising;
- (void)stopSourcePresenceWaitingCycle;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (id)wpAirPlaySolo;

@end
