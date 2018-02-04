/* made by EzioChiu.
 */

@protocol WPHeySiriProtocol <NSObject>

@required

- (void)heySiri:(WPHeySiri *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSData *)arg3;
- (void)heySiriDidUpdateState:(WPHeySiri *)arg1;

@optional

- (void)heySiri:(WPHeySiri *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)heySiri:(WPHeySiri *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)heySiriAdvertisingPending:(WPHeySiri *)arg1;
- (void)heySiriStartedAdvertising:(WPHeySiri *)arg1;
- (void)heySiriStartedScanning:(WPHeySiri *)arg1;
- (void)heySiriStoppedAdvertising:(WPHeySiri *)arg1;
- (void)heySiriStoppedScanning:(WPHeySiri *)arg1;

@end
