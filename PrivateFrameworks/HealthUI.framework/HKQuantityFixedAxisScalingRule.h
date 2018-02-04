/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule {
    HKValueRange * _defaultQuantityBounds;
    NSDictionary * _quantityBoundsOverrides;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKUnit *unit;

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;

- (void).cxx_destruct;
- (void)_convertQuantityRanges;
- (id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2;
- (bool)isCompatibleWithQuantityType:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
