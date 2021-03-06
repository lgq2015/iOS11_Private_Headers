/* made by EzioChiu.
 */

@protocol WBSCyclerPrimaryDeviceCoordinatorDelegate <NSObject>

@optional

- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didReceiveData:(NSData *)arg2 fromSecondaryDevice:(unsigned long long)arg3;
- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didStartListeningForSecondaryDevicesOnPort:(unsigned long long)arg2;
- (void)primaryDeviceCoordinatorDidConnectToAllSecondaryDevices:(WBSCyclerPrimaryDeviceCoordinator *)arg1;

@end
