/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKLocationController : NSObject <CLLocationManagerDelegate> {
    NSMutableArray * __assetsWaitingForLocation;
    CLLocationManager * __locationManager;
    bool  __monitoringLocation;
    CLLocation * _currentLocation;
    bool  _enabled;
    bool  _headingEnabled;
}

@property (nonatomic, readonly) NSMutableArray *_assetsWaitingForLocation;
@property (nonatomic, readonly) CLLocationManager *_locationManager;
@property (getter=_isMonitoringLocation, nonatomic, readonly) bool _monitoringLocation;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHeadingEnabled, nonatomic) bool headingEnabled;
@property (readonly) Class superclass;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (void)setUsesEffectiveBundleIdentifier:(bool)arg1;
+ (id)sharedInstance;
+ (bool)usesEffectiveBundleIdentifier;

- (void).cxx_destruct;
- (void)_applicationStateChanged:(id)arg1;
- (id)_assetsWaitingForLocation;
- (void)_authorizeOrStartLocationManager;
- (id)_currentLocationMetadataWithDeviceOrientation:(long long)arg1 forDevice:(long long)arg2;
- (bool)_isMonitoringLocation;
- (id)_locationManager;
- (void)_startMonitoringLocationUpdates;
- (void)_stopMonitoringLocationUpdates;
- (void)_updateAssetsWaitingOnLocation;
- (bool)_updateLocationMetadataForAsset:(id)arg1;
- (void)_updateLocationMonitoring;
- (void)addLocationToAssetWhenAvailable:(id)arg1;
- (bool)addLocationToMetadata:(id)arg1 withOrientation:(long long)arg2 device:(long long)arg3;
- (id)currentLocation;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (bool)isHeadingEnabled;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHeadingEnabled:(bool)arg1;

@end
