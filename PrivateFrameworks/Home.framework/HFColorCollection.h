/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFColorCollection : NSObject <NAIdentifiable> {
    HFRGBColor * _RGBColor;
    HFTemperatureColor * _temperatureColor;
}

@property (nonatomic, readonly, copy) HFRGBColor *RGBColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <HFColorPrimitive> *preferredColorPrimitive;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFTemperatureColor *temperatureColor;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)RGBColor;
- (id)colorByAdjustingForProfile:(id)arg1;
- (id)colorPrimitives;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPrimitiveColor:(id)arg1;
- (id)initWithPrimitiveColors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)preferredColorPrimitive;
- (id)temperatureColor;

@end
