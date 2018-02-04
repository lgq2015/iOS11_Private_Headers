/* made by EzioChiu.
 */

@protocol INSetClimateSettingsInCarIntentExport <NSObject, JSExport>

@required

- (long long)airCirculationMode;
- (long long)climateZone;
- (NSNumber *)enableAirConditioner;
- (NSNumber *)enableAutoMode;
- (NSNumber *)enableClimateControl;
- (NSNumber *)enableFan;
- (NSNumber *)fanSpeedIndex;
- (NSNumber *)fanSpeedPercentage;
- (id)init;
- (long long)relativeFanSpeedSetting;
- (long long)relativeTemperatureSetting;
- (void)setAirCirculationMode:(long long)arg1;
- (void)setClimateZone:(long long)arg1;
- (void)setEnableAirConditioner:(NSNumber *)arg1;
- (void)setEnableAutoMode:(NSNumber *)arg1;
- (void)setEnableClimateControl:(NSNumber *)arg1;
- (void)setEnableFan:(NSNumber *)arg1;
- (void)setFanSpeedIndex:(NSNumber *)arg1;
- (void)setFanSpeedPercentage:(NSNumber *)arg1;
- (void)setRelativeFanSpeedSetting:(long long)arg1;
- (void)setRelativeTemperatureSetting:(long long)arg1;
- (void)setTemperature:(NSMeasurement *)arg1;
- (NSMeasurement *)temperature;

@end