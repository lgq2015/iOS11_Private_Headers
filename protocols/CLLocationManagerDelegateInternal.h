/* made by EzioChiu.
 */

@protocol CLLocationManagerDelegateInternal <CLLocationManagerDelegate>

@optional

- (void)locationManager:(CLLocationManager *)arg1 didChangeAppStatusFor:(NSDictionary *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didChangeStatusForTechnology:(int)arg2 active:(bool)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didEnterRegion:(CLRegion *)arg2 withLocation:(CLLocation *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didExitRegion:(CLRegion *)arg2 withLocation:(CLLocation *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFailFindingPlacemarkForLocation:(CLLocation *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFindPlacemark:(NSDictionary *)arg2 forLocation:(CLLocation *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didRangePeers:(NSArray *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didReceiveApproval:(bool)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didRecordHistoricLocation:(CLLocation *)arg2 forInterval:(double)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didStartRangingForPeer:(_CLRangingPeer *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didStopRangingForPeer:(_CLRangingPeer *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3 usingSupportInfo:(NSDictionary *)arg4;
- (void)locationManager:(CLLocationManager *)arg1 rangingDidFailForPeer:(_CLRangingPeer *)arg2 withError:(NSError *)arg3;

@end
