/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSContinuity : NSObject {
    _IDSContinuity * _internal;
}

@property (readonly) long long state;

- (void).cxx_destruct;
- (void)connectToPeer:(id)arg1;
- (void)dealloc;
- (void)disconnectFromPeer:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(bool)arg6 duplicates:(bool)arg7;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(bool)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(bool)arg5 duplicates:(bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startTrackingPeer:(id)arg1;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (long long)state;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)stopTrackingPeer:(id)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;

@end
