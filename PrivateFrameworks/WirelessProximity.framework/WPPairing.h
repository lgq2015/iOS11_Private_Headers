/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPPairing : WPClient {
    bool  _allowScreenOffScanning;
    <WPPairingDelegate> * _delegate;
    NSMutableSet * _ignoredDevices;
}

@property bool allowScreenOffScanning;
@property (nonatomic) <WPPairingDelegate> *delegate;
@property (retain) NSMutableSet *ignoredDevices;

- (void).cxx_destruct;
- (bool)allowScreenOffScanning;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)ignoreDeviceUntilNextUnlock:(id)arg1 ignoreDevice:(bool)arg2;
- (id)ignoredDevices;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (void)invalidate;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setAllowScreenOffScanning:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoredDevices:(id)arg1;
- (void)startProximityPairingServiceScanning;
- (void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(bool)arg2;
- (void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(bool)arg2 scanMode:(long long)arg3;
- (void)stateDidChange:(long long)arg1;
- (void)stopProximityPairingServiceScanning;

@end