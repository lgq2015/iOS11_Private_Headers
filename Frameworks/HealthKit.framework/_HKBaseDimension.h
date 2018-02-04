/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBaseDimension : _HKDimension <_HKFactor> {
    NSString * _name;
    HKUnit * _reducedUnit;
    HKBaseUnit * _reducibleBaseUnit;
    double  _reductionCoefficient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) HKUnit *reducedUnit;
@property (nonatomic, retain) HKBaseUnit *reducibleBaseUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly) Class superclass;

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(id /* block */)arg2;
+ (id)conductance;
+ (id)energy;
+ (id)equivalents;
+ (id)length;
+ (id)mass;
+ (id)nonConvertibleIU;
+ (id)nonConvertibleMole;
+ (id)nullDimension;
+ (id)pressure;
+ (id)temperature;
+ (id)time;
+ (id)titer;
+ (id)volume;

- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)_initWithName:(id)arg1;
- (bool)canBeReduced;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)reducedUnit;
- (id)reducibleBaseUnit;
- (double)reductionCoefficient;
- (void)setReducedUnit:(id)arg1;
- (void)setReducibleBaseUnit:(id)arg1;
- (void)setReductionCoefficient:(double)arg1;
- (id)unitString;

@end
