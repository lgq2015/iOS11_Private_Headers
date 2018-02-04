/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSuggestedSearchNearby : PUSuggestedSearch {
    bool  _cancelled;
    CLLocation * _lastLocation;
    CLLocationManager * _locationManager;
    bool  _monitoringLocation;
}

- (void).cxx_destruct;
- (void)_authorizeOrStartMonitoringLocation;
- (void)_inqRestart;
- (void)_startMonitoringLocation;
- (void)_stopMonitoringLocation;
- (void)cancel;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
