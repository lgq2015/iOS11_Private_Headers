/* made by EzioChiu.
 */

@protocol MKLocationProvider <NSObject>

@required

- (long long)activityType;
- (id /* block */)authorizationRequestBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, id /* block */, void*, void, id /* block */, bool, void*, void*, id, SEL
- (int)authorizationStatus;
- (void)authorizationStatusOnQueue:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (<MKLocationProviderDelegate> *)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (NSBundle *)effectiveBundle;
- (NSString *)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isTracePlayer;
- (bool)matchInfoEnabled;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, bool, void*, void*
- (void)setDelegate:(id <MKLocationProviderDelegate>)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(NSBundle *)arg1;
- (void)setEffectiveBundleIdentifier:(NSString *)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (bool)shouldShiftIfNecessary;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (bool)usesCLMapCorrection;

@optional

- (CLLocation *)lastLocation;

@end
