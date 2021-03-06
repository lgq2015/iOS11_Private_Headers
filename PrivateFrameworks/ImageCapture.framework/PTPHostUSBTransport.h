/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPHostUSBTransport : PTPTransport {
    struct __CFRunLoopSource { } * _CFRunLoopSource;
    unsigned char  _bulkPipeIn;
    unsigned char  _bulkPipeOut;
    bool  _connected;
    NSMutableData * _eventData;
    char * _eventDataBuffer;
    unsigned int  _eventDataBufferSize;
    struct IOUSBInterfaceStruct300 {} ** _interfaceInterfaceRef;
    unsigned char  _interruptPipeIn;
    unsigned int  _locationID;
    int  _maxPacketSizeBulkIn;
    int  _maxPacketSizeBulkOut;
    int  _maxPacketSizeInterruptIn;
    unsigned short  _productID;
    char * _readBuffer;
    unsigned int  _readBufferSize;
    NSString * _usbSerialNumberString;
    unsigned short  _vendorID;
    char * _writeBuffer;
    unsigned int  _writeBufferSize;
}

- (void)abortPendingIO;
- (unsigned short)cancelRequest:(id)arg1;
- (void)cancelTransaction:(id)arg1;
- (void)clearBulkInPipeStall;
- (void)clearPipeStall:(unsigned char)arg1;
- (bool)connected;
- (void)dealloc;
- (id)description;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (void)dumpData:(void*)arg1 length:(int)arg2 comment:(id)arg3;
- (bool)handleBulkData:(unsigned long long)arg1 result:(int)arg2;
- (void)handleInterruptData:(unsigned long long)arg1;
- (id)initWithLocationID:(unsigned int)arg1 delegate:(id)arg2;
- (unsigned int)locationID;
- (unsigned short)productID;
- (int)readBulkDataWithTimeout:(unsigned int)arg1;
- (int)readInterruptData;
- (bool)sendCancel:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendDataPackets:(id)arg1;
- (bool)sendEvent:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned int)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned int)arg3;
- (void)setConnected:(bool)arg1;
- (bool)startInitiator;
- (void)stop;
- (id)usbSerialNumberString;
- (unsigned short)vendorID;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1;
- (bool)writeBulkData:(id)arg1;

@end
