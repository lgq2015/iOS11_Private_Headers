/* made by EzioChiu.
 */

@protocol WFScanManagerDelegate <NSObject>

@required

- (void)scanManager:(WFScanManager *)arg1 updatedPartialResults:(NSSet *)arg2;
- (void)scanManagerScanningDidFinish:(WFScanManager *)arg1 withResults:(NSSet *)arg2;

@optional

- (void)scanManager:(WFScanManager *)arg1 didFindHotspotHelperNetworks:(NSSet *)arg2;
- (void)scanManager:(WFScanManager *)arg1 stateDidChange:(long long)arg2;
- (void)scanManagerScanningWillStart:(WFScanManager *)arg1;
- (bool)scanManagerShouldSupportHotspotHelper:(WFScanManager *)arg1;
- (bool)scanManagerShouldSupportUnfilteredScanning:(WFScanManager *)arg1;

@end
