/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDUSBDevice : NSObject {
    struct IOUSBDeviceStruct300 {} ** _device;
    struct IOUSBInterfaceStruct220 {} ** _interface;
    bool  _isConfigured;
    bool  _isOpen;
    unsigned int  _notification;
    struct IONotificationPort { } * _notificationPort;
    NSString * _privateRunLoopMode;
}

- (void).cxx_destruct;
- (unsigned long long)_transferData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(int (*)arg5;
- (void)abortPipe:(unsigned char)arg1;
- (bool)clearPipe:(unsigned char)arg1 bothEnds:(bool)arg2;
- (bool)close;
- (void)dealloc;
- (bool)getInformationForPipe:(unsigned char)arg1 direction:(char *)arg2 number:(char *)arg3 transferType:(char *)arg4 maxPacketSize:(unsigned short*)arg5 interval:(char *)arg6;
- (id)initWithIOObject:(unsigned int)arg1;
- (bool)isConfigured;
- (bool)isOpen;
- (unsigned char)numberOfConfigurations;
- (bool)open;
- (bool)openWithSeize:(bool)arg1;
- (int)product;
- (unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned int)arg4 andCompletionTimeOut:(unsigned int)arg5;
- (bool)readData:(void*)arg1 withSize:(unsigned long long*)arg2 fromPipe:(unsigned char)arg3;
- (unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (void)registerForDisconnectNotifications:(bool)arg1;
- (bool)reset;
- (bool)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void*)arg5 size:(unsigned short)arg6 sizeTransferred:(unsigned long long*)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9;
- (bool)setAlternateInterface:(unsigned char)arg1;
- (bool)setConfiguration:(unsigned char)arg1;
- (bool)setInterface:(unsigned char)arg1;
- (int)vendor;
- (bool)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned int)arg4 andCompletionTimeOut:(unsigned int)arg5;
- (unsigned long long)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4;

@end
