/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationServiceConnection : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)cancelNotifications;
- (void)dealloc;
- (void)notifyParsedBarcodeWithData:(id)arg1 withReply:(id /* block */)arg2;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;

@end
