/* made by EzioChiu.
 */

@protocol MNCommuteDestinationUpdaterDelegate <NSObject>

@required

- (void)destinationUpdater:(MNCommuteDestinationUpdater *)arg1 didUpdateDestination:(MNCommuteDestination *)arg2;
- (void)destinationUpdaterDidArrive:(MNCommuteDestinationUpdater *)arg1;
- (bool)isMapsActive;

@end
