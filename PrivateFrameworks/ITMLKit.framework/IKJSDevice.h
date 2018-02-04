/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSDevice : IKJSObject <IKJSDevice, NSObject, RadiosPreferencesDelegate, _IKJSDevice, _IKJSDeviceProxy> {
    <IKAppDeviceConfig> * _deviceConfig;
    id  _isNetworkTypeChangedToken;
    id  _networkReachabilityChangedToken;
    RadiosPreferences * _radioPrefs;
}

@property (nonatomic, readonly) NSString *advertisingIdentifier;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *appVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <IKAppDeviceConfig> *deviceConfig;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAdvertisingTrackingEnabled;
@property (nonatomic, readonly) bool isInAirplaneMode;
@property (nonatomic, readonly) bool isInRetailDemoMode;
@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic, readonly) double lastNetworkChangedTime;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *networkType;
@property (nonatomic, readonly) NSNumber *pixelRatio;
@property (nonatomic, readonly) NSString *productType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *vendorID;
@property (nonatomic, readonly) NSString *vendorIdentifier;

+ (id)getMobileGestaltString:(struct __CFString { }*)arg1;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (id)advertisingIdentifier;
- (void)airplaneModeChanged;
- (id)appIdentifier;
- (id)appVersion;
- (id)asPrivateIKJSDevice;
- (id)capacity:(id)arg1;
- (void)dealloc;
- (id)deviceConfig;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (bool)isAdvertisingTrackingEnabled;
- (bool)isInAirplaneMode;
- (bool)isInRetailDemoMode;
- (bool)isNetworkReachable;
- (double)lastNetworkChangedTime;
- (id)model;
- (id)networkType;
- (id)pixelRatio;
- (id)productType;
- (void)setDeviceConfig:(id)arg1;
- (id)systemVersion;
- (id)vendorID;
- (id)vendorIdentifier;

@end
