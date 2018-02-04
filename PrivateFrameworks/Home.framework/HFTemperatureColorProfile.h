/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureColorProfile : NSObject <HFColorProfile> {
    float  _maximumTemperature;
    float  _minimumTemperature;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float maximumTemperature;
@property (nonatomic, readonly) float minimumTemperature;
@property (readonly) Class superclass;

- (id)adjustedColorPrimitiveForPrimitive:(id)arg1;
- (float)adjustedTemperatureForTemperature:(float)arg1;
- (id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2;
- (float)maximumTemperature;
- (float)minimumTemperature;

@end
