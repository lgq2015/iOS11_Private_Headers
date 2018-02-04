/* made by EzioChiu.
 */

@protocol MNLocationManagerObserver <NSObject>

@required

- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidPauseLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidReset:(MNLocationManager *)arg1;
- (void)locationManagerDidResumeLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MNLocationManager *)arg1 withError:(NSError *)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerUpdatedLocation:(MNLocationManager *)arg1;

@end
