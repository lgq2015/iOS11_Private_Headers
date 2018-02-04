/* made by EzioChiu.
 */

@protocol WBSCyclerDeviceCoordinatorDelegate <NSObject>

@optional

- (void)deviceCoordinator:(WBSCyclerDeviceCoordinator *)arg1 didBeginPrimaryDeviceCoordinationWithAddress:(NSString *)arg2;
- (void)deviceCoordinator:(WBSCyclerDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)deviceCoordinator:(void *)arg1 didReceiveData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: WBSCyclerDeviceCoordinator *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)deviceCoordinatorDidEstablishConnectionsToAllDevices:(WBSCyclerDeviceCoordinator *)arg1;

@end
