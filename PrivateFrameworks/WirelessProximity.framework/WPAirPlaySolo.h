/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAirPlaySolo : WPClient {
    <WPAirPlaySoloDelegate> * _delegate;
}

@property (nonatomic) <WPAirPlaySoloDelegate> *delegate;

+ (unsigned char)puckStringToType:(id)arg1;
+ (id)puckTypeToString:(unsigned char)arg1;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessAdvertising:(id)arg1;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;

@end
