/* made by EzioChiu.
 */

@protocol WPDeviceScannerDelegate <NSObject>

@required

- (void)deviceScannerDidUpdateState:(WPDeviceScanner *)arg1;

@optional

- (void)scanner:(WPDeviceScanner *)arg1 didFailToRegisterDevices:(NSDictionary *)arg2 withError:(NSError *)arg3;
- (void)scanner:(WPDeviceScanner *)arg1 foundAnyDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)scanner:(WPDeviceScanner *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)scanner:(WPDeviceScanner *)arg1 foundRequestedDevices:(NSArray *)arg2;

@end
