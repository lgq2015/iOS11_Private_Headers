/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *distanceUnits;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *precipitationUnits;
@property (nonatomic, copy) NSString *pressureUnits;
@property (nonatomic, copy) NSString *speedUnits;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temperatureUnits;

+ (id)units;
+ (id)unitsWithDictionary:(id)arg1 context:(id)arg2;

- (id)distanceUnits;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)precipitationUnits;
- (id)pressureUnits;
- (void)setDistanceUnits:(id)arg1;
- (void)setPrecipitationUnits:(id)arg1;
- (void)setPressureUnits:(id)arg1;
- (void)setSpeedUnits:(id)arg1;
- (void)setTemperatureUnits:(id)arg1;
- (id)speedUnits;
- (id)temperatureUnits;

@end
