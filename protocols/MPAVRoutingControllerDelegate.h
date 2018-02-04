/* made by EzioChiu.
 */

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional

- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRouteDidChange:(MPAVRoute *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 volumeControlAvailabilityDidChange:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;

@end
