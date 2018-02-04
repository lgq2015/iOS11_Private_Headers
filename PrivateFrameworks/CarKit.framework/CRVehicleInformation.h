/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleInformation : NSObject {
    AVExternalDevice * _externalDevice;
    int  _mapsAmbientBrightnessNotifyToken;
    unsigned long long  _mapsFallbackAmbientBrightness;
}

@property (nonatomic, readonly) unsigned long long driverPosition;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (nonatomic, readonly) unsigned long long interactionRestrictions;
@property (nonatomic) unsigned long long mapsFallbackAmbientBrightness;
@property (nonatomic, readonly) unsigned long long vehicleAmbientBrightness;

- (void).cxx_destruct;
- (void)_fetchMapsFallbackAmbientBrightnessWithToken:(int)arg1;
- (void)_handleLimitedUIChanged:(id)arg1;
- (void)_handleNightModeChanged:(id)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)dealloc;
- (unsigned long long)driverPosition;
- (id)externalDevice;
- (id)init;
- (unsigned long long)interactionRestrictions;
- (unsigned long long)mapsFallbackAmbientBrightness;
- (void)setExternalDevice:(id)arg1;
- (void)setMapsFallbackAmbientBrightness:(unsigned long long)arg1;
- (unsigned long long)vehicleAmbientBrightness;

@end
