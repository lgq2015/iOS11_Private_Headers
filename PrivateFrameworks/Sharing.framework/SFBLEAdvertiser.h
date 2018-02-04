/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate> {
    bool  _activateCalled;
    long long  _advertiseRate;
    long long  _advertiseState;
    id /* block */  _advertiseStateChangedHandler;
    id /* block */  _bluetoothStateChangedHandler;
    id /* block */  _connectionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSArray * _lePipeDevices;
    NSData * _payloadDataCurrent;
    NSData * _payloadDataPrevious;
    NSDictionary * _payloadFields;
    NSString * _payloadIdentifier;
    long long  _payloadType;
    CURetrier * _startRetrier;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    WPNearby * _wpNearby;
    long long  _wpNearbyType;
}

@property (nonatomic) long long advertiseRate;
@property (nonatomic, copy) id /* block */ advertiseStateChangedHandler;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, copy) id /* block */ connectionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSArray *lePipeDevices;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (int)_preparePayload:(bool)arg1;
- (id)_preparePayloadNearbyAction:(int*)arg1;
- (id)_preparePayloadNearbyInfo:(int*)arg1;
- (void)_restartIfNeeded:(bool)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (long long)advertiseRate;
- (id /* block */)advertiseStateChangedHandler;
- (id /* block */)bluetoothStateChangedHandler;
- (id /* block */)connectionHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)lePipeDevices;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)setAdvertiseRate:(long long)arg1;
- (void)setAdvertiseStateChangedHandler:(id /* block */)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setConnectionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLePipeDevices:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setPayloadFields:(id)arg1;

@end
