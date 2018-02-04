/* made by EzioChiu.
 */

@protocol MKLocationManagerObserver <NSObject>

@required

- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidPauseLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg1;
- (void)locationManagerDidResumeLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg1 withError:(NSError *)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg1;

@end
