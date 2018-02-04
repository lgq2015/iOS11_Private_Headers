/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule {
    NSDictionary * _axisRangeQuantityOverrides;
    HKQuantity * _defaultYAxisRangeQuantity;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;

- (void).cxx_destruct;
- (void)_convertQuantities;
- (bool)isCompatibleWithQuantityType:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
