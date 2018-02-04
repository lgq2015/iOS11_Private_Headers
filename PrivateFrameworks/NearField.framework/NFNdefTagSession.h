/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFNdefTagSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)didEndUnexpectedly;
- (void)didTagStateChange:(unsigned int)arg1;
- (bool)enableWrite:(bool)arg1;
- (bool)enableWrite:(bool)arg1 error:(id*)arg2;
- (void)endSession;
- (id)getTagData;
- (id)getTagDataWithError:(id*)arg1;
- (id)getTagMessage;
- (id)getTagMessageWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setTagData:(id)arg1;
- (bool)setTagData:(id)arg1 error:(id*)arg2;
- (bool)setTagMessage:(id)arg1;
- (bool)setTagMessage:(id)arg1 error:(id*)arg2;
- (bool)startBluetoothLEPairingWithDeviceAddress:(id)arg1 role:(unsigned char)arg2 optionalOOBData:(id)arg3;
- (bool)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg1 optionalOOBData:(id)arg2;
- (bool)startBluetoothLESecureConnectionWithOOBData:(id)arg1;
- (bool)startEmulation:(id)arg1;
- (bool)startEmulation:(id)arg1 error:(id*)arg2;
- (bool)startEmulationWithNdefMessage:(id)arg1;
- (bool)startEmulationWithNdefMessage:(id)arg1 error:(id*)arg2;
- (bool)stopEmulation;
- (bool)stopEmulationWithError:(id*)arg1;

@end
