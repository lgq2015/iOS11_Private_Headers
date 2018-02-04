/* made by EzioChiu.
 */

@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>

@required

- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(MNActiveRouteInfo *)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;

@end
