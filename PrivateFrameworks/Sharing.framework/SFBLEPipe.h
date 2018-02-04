/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEPipe : NSObject <CBCentralManagerDelegate, CBScalablePipeManagerDelegate> {
    bool  _activateCalled;
    id /* block */  _bluetoothStateChangedHandler;
    CBCentralManager * _btCentral;
    struct channel { } * _btChannel;
    bool  _btConnected;
    bool  _btConnecting;
    bool  _btEndpointRegistered;
    bool  _btEndpointRegistering;
    int  _btFD;
    CBScalablePipe * _btPipe;
    CBScalablePipeManager * _btPipeManager;
    unsigned char  _btReadHeader;
    unsigned long long  _btReadLen;
    unsigned long long  _btReadOffset;
    NSMutableData * _btReadPayload;
    struct channel_ring_desc { } * _btReadRing;
    NSObject<OS_dispatch_source> * _btReadSource;
    NSData * _btWriteData;
    SFBLEData * _btWriteItem;
    unsigned long long  _btWriteLen;
    unsigned long long  _btWriteOffset;
    const char * _btWritePtr;
    struct NSMutableArray { Class x1; } * _btWriteQueue;
    struct channel_ring_desc { } * _btWriteRing;
    NSObject<OS_dispatch_source> * _btWriteSource;
    bool  _btWriteSuspended;
    id /* block */  _connectionStateChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _frameHandler;
    struct NSMutableDictionary { Class x1; } * _frameHandlers;
    NSString * _identifier;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    bool  _manualConnect;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, copy) id /* block */ connectionStateChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ frameHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool manualConnect;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (id)_defaultPairedDeviceBluetoothIdentifier;
- (void)_frameHandler:(unsigned char)arg1 data:(id)arg2;
- (void)_invalidate;
- (void)_readHandler;
- (void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)_setupIfNeeded;
- (void)_setupPipe:(id)arg1;
- (void)_tearDownPipe;
- (void)_writeHandler;
- (void)activate;
- (void)addFrameHandlerForType:(unsigned char)arg1 handler:(id /* block */)arg2;
- (id /* block */)bluetoothStateChangedHandler;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (long long)connectionState;
- (id /* block */)connectionStateChangedHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id /* block */)frameHandler;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)manualConnect;
- (void)removeFrameHandlerForType:(unsigned char)arg1;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setConnectionStateChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFrameHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setManualConnect:(bool)arg1;

@end
