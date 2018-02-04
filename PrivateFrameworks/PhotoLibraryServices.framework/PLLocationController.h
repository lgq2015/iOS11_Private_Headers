/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {
    NSDictionary * _exifDictionary;
    bool  _isEnabled;
    bool  _isHeadingEnabled;
    bool  _isUpdating;
    CLLocationManager * _locationManager;
    NSMutableArray * _locationPendingAssets;
    NSString * _locationStr;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setUsesEffectiveBundleIdentifier:(bool)arg1;
+ (id)sharedInstance;
+ (bool)usesEffectiveBundleIdentifier;

- (bool)_addLocationToAsset:(id)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (void)_assetContainerChanged:(id)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_updateLocationRunState;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(bool)arg3;
- (void)dealloc;
- (id)init;
- (id)location;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(bool)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationString;
- (void)setEnabled:(bool)arg1;
- (void)setHeadingEnabled:(bool)arg1;

@end
