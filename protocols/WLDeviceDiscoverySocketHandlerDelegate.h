/* made by EzioChiu.
 */

@protocol WLDeviceDiscoverySocketHandlerDelegate

@required

- (void)deviceDiscoverySocketHandler:(WLDeviceDiscoverySocketHandler *)arg1 didFailToHandshakeWithSourceDevice:(WLSourceDevice *)arg2 error:(NSError *)arg3;
- (void)deviceDiscoverySocketHandler:(WLDeviceDiscoverySocketHandler *)arg1 didFinishHandshakeWithSourceDevice:(WLSourceDevice *)arg2;

@end
