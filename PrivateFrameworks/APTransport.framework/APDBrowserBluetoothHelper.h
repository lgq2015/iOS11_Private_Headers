/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

@interface APDBrowserBluetoothHelper : NSObject {
    bool  _bluetoothPowerChangedListeningStarted;
    void * _eventHandlerContext;
    int (* _eventHandlerFunc;
    NSObject<OS_dispatch_queue> * _eventQueue;
    struct OpaqueAPDBluetoothHelper { } * _helperRef;
    bool  _isBluetoothPoweredOn;
    bool  _isInvalidated;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool bluetoothPowerChangedListeningStarted;
@property (nonatomic) void*eventHandlerContext;
@property (nonatomic) int (*eventHandlerFunc;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) struct OpaqueAPDBluetoothHelper { }*helperRef;
@property (nonatomic) bool isInvalidated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (bool)bluetoothPowerChangedListeningStarted;
- (void)dealloc;
- (int)dispatchEvent:(unsigned int)arg1 withEventInfo:(id)arg2;
- (int)ensureBluetoothPowerChangedListenerStopped;
- (int)ensureBluetoothPowerEventMonitorStarted;
- (void*)eventHandlerContext;
- (int (*)eventHandlerFunc;
- (id)eventQueue;
- (int)getBluetoothPowerOn:(bool*)arg1;
- (id)getEventString:(unsigned int)arg1;
- (void)handleBluetoothChangedNotificationInternal:(id)arg1;
- (struct OpaqueAPDBluetoothHelper { }*)helperRef;
- (id)init;
- (int)invalidate;
- (bool)isInvalidated;
- (int)queryBluetoothPower:(bool*)arg1;
- (id)queue;
- (int)setBluetoothPower:(bool)arg1;
- (void)setBluetoothPowerChangedListeningStarted:(bool)arg1;
- (int)setEventHandler:(int (*)arg1 context:(void*)arg2 helperRef:(struct OpaqueAPDBluetoothHelper { }*)arg3;
- (void)setEventHandlerContext:(void*)arg1;
- (void)setEventHandlerFunc:(int (*)arg1;
- (void)setHelperRef:(struct OpaqueAPDBluetoothHelper { }*)arg1;
- (void)setIsInvalidated:(bool)arg1;
- (int)setPowered:(bool)arg1;
- (int)startListeningToEvent:(unsigned int)arg1;
- (int)stopListeningToEvent:(unsigned int)arg1;

@end
